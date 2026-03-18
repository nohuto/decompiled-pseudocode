/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x1407A6A74
 * Callers:
 *     AlpcpReceiveMessage @ 0x1407AC930 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1407A7FBC (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     AlpcpLogReceiveMessage @ 0x140967B4C (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, int a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 result; // rax
  __int64 v7; // rbp
  ULONG_PTR v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ebx
  volatile signed __int64 *v12; // rsi
  int v13; // eax
  volatile signed __int64 *v14; // r14
  unsigned int v15; // r8d
  int v16; // edx
  ULONG_PTR v17; // rbx
  ULONG_PTR v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v18[0] = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v7 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, (_DWORD)a4, (__int64)v18);
  if ( (int)result >= 0 )
  {
    v8 = v18[0];
    if ( v7 != *(_QWORD *)(v18[0] + 16) )
    {
      v9 = -1073740030;
LABEL_12:
      AlpcpUnlockMessage(v18[0]);
      return v9;
    }
    v10 = *(_DWORD *)(v18[0] + 40);
    if ( (v10 & 0x10000) == 0 || (v11 = 1, v7 != *(_QWORD *)(v18[0] + 64)) )
      v11 = 0;
    if ( (v10 & 7) != 4 && !v11 )
    {
      v9 = -1073741811;
      goto LABEL_12;
    }
    v12 = (volatile signed __int64 *)(v7 + 352);
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    v13 = *(_DWORD *)(v7 + 416);
    if ( (v13 & 0x40) != 0 )
    {
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      return 3221227264LL;
    }
    if ( (v13 & 0x10) != 0 )
    {
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      return 3221225537LL;
    }
    if ( v11 )
    {
      v14 = (volatile signed __int64 *)(v7 + 136);
      ExAcquirePushLockExclusiveEx(v7 + 136, 0LL);
      *(_DWORD *)(v8 + 40) &= ~0x10000u;
      **(_QWORD **)(v8 + 88) = *(_QWORD *)(v8 + 80);
      *(_QWORD *)(*(_QWORD *)(v8 + 80) + 8LL) = *(_QWORD *)(v8 + 88);
      --*(_DWORD *)(v7 + 464);
    }
    else
    {
      v14 = (volatile signed __int64 *)(v7 + 200);
      ExAcquirePushLockExclusiveEx(v7 + 200, 0LL);
      --*(_DWORD *)(v7 + 460);
      *(_DWORD *)(v8 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v8 + 16) = 0LL;
      **(_QWORD **)(v8 + 8) = *(_QWORD *)v8;
      *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v8 + 8);
      v15 = (*(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
      if ( !*(_QWORD *)(v8 + 144) )
        v15 = *(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0;
      v16 = v15 | 0x10000000;
      if ( !*(_QWORD *)(v8 + 152) )
        v16 = v15;
      if ( (v16 & a5) != 0 )
      {
        *(_WORD *)(v8 + 244) |= 0x2000u;
        AlpcpInsertMessagePendingQueue(v7, v8);
LABEL_31:
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v14);
        KeAbPostRelease((ULONG_PTR)v14);
        if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
        KeAbPostRelease(v7 + 352);
        v17 = v18[0];
        if ( AlpcpLogEnabled )
          AlpcpLogReceiveMessage(v18[0]);
        *a4 = v17;
        return 0LL;
      }
      *(_WORD *)(v8 + 244) &= ~0x2000u;
    }
    --*(_WORD *)(v8 - 30);
    goto LABEL_31;
  }
  return result;
}
