/*
 * XREFs of ExpWnfReadStateData @ 0x1407944BC
 * Callers:
 *     ExpWnfDeliverThreadNotifications @ 0x140792EFC (ExpWnfDeliverThreadNotifications.c)
 *     NtQueryWnfStateData @ 0x140794AD0 (NtQueryWnfStateData.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall ExpWnfReadStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  signed __int64 *v9; // rbx
  __int64 v10; // rdi
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-48h]

  v14 = 0;
  v9 = (signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, 0, v10, (__int64)v9);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  v11 = *(_DWORD **)(a1 + 88);
  if ( !v11 )
  {
    *a2 = 0;
    goto LABEL_11;
  }
  if ( v11 == (_DWORD *)1 )
  {
    *a2 = *(_DWORD *)(a1 + 96);
LABEL_11:
    *a5 = 0;
    goto LABEL_13;
  }
  *a2 = v11[3];
  *a5 = v11[2];
  v12 = v11[2];
  if ( a4 < v12 )
  {
    v14 = -1073741789;
  }
  else
  {
    memmove(a3, v11 + 4, v12);
    v14 = 0;
  }
LABEL_13:
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return v14;
}
