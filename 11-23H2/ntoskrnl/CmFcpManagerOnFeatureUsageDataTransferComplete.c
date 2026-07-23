/*
 * XREFs of CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x14067FC68
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

signed __int32 __fastcall CmFcpManagerOnFeatureUsageDataTransferComplete(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // r14
  _QWORD *v9; // rax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (unsigned __int64 *)(a1 + 1352);
  v3 = 0;
  v4 = KeAbPreAcquire(a1 + 1352, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  v6 = (_QWORD *)(a1 + 1312);
  v7 = *(_DWORD **)(a1 + 1312);
  if ( v7 == (_DWORD *)(a1 + 1312) )
    goto LABEL_13;
  while ( (v7[6] & 7) != 1 )
  {
    v8 = *(_QWORD *)v7;
    v3 = (v7[6] >> 3) & 0x1FFFFFFE;
    if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = (_QWORD *)*((_QWORD *)v7 + 1), (_DWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    ExFreePoolWithTag(v7, 0);
    v7 = (_DWORD *)v8;
    if ( (_QWORD *)v8 == v6 )
      goto LABEL_13;
  }
  if ( v7 != (_DWORD *)*v6 )
  {
LABEL_13:
    if ( *(_DWORD *)(a1 + 1700) != v3 )
    {
      *(_DWORD *)(a1 + 1700) = v3;
      _InterlockedOr(v11, 0);
      if ( *(_QWORD *)(a1 + 1344) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 1344), 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
