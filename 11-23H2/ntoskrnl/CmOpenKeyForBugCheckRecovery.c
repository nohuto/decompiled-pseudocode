/*
 * XREFs of CmOpenKeyForBugCheckRecovery @ 0x140A0D350
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmOpenKey @ 0x1406E2A90 (CmOpenKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     CmpLockKeyBodyIntoMemory @ 0x140A17788 (CmpLockKeyBodyIntoMemory.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmOpenKeyForBugCheckRecovery(_QWORD *a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r15
  HANDLE v11; // r14
  unsigned int v12; // edi
  bool v13; // zf
  int started; // esi
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  HANDLE v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v22[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v24; // [rsp+B0h] [rbp+40h] BYREF

  memset(v22, 0, sizeof(v22));
  v21 = 0LL;
  CmpInitializeThreadInfo((__int64)&v21);
  v10 = 0LL;
  v11 = 0LL;
  LOBYTE(v12) = 0;
  v24 = 0LL;
  v13 = (*(_DWORD *)(v9 + 24) & 0x200) == 0;
  v20 = 0LL;
  if ( v13 )
  {
    started = -1073741811;
  }
  else
  {
    v15 = CmpAcquireShutdownRundown(v8, v7, v9);
    v12 = v15 & 1;
    if ( (v15 & 1) != 0 )
    {
      started = CmOpenKey(&v20, a2, a3, a4, 0LL, 0);
      if ( started < 0 )
      {
        v11 = v20;
      }
      else
      {
        v11 = v20;
        started = CmObReferenceObjectByHandle((_DWORD)v20, a2, v16, 0, (__int64)&v24, 0LL);
        if ( started < 0 )
        {
          v10 = v24;
        }
        else
        {
          CmpLockRegistry(v8, v7, v16, v17);
          v10 = v24;
          v12 |= 2u;
          v18 = v24[1];
          started = CmpStartKcbStackForTopLayerKcb((__int64)v22, v18);
          if ( started >= 0 )
          {
            CmpLockKcbStackTopExclusiveRestShared((__int64)v22);
            v12 |= 4u;
            started = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
            if ( started >= 0 )
            {
              if ( (*(_DWORD *)(v18 + 184) & 0x40000) != 0 )
              {
                started = CmpLockKeyBodyIntoMemory(v10);
                if ( started >= 0 )
                {
                  *a1 = v11;
                  v11 = 0LL;
                  started = 0;
                }
              }
              else
              {
                started = -1073741811;
              }
            }
          }
        }
      }
      if ( v12 >= 4 )
        CmpUnlockKcbStack((__int64)v22);
    }
    else
    {
      started = -1073741431;
    }
    if ( (v12 & 2) != 0 )
      CmpUnlockRegistry(v8, v7, v16, v17);
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v11 )
    ObCloseHandle(v11, 0);
  if ( (v12 & 1) != 0 )
    CmpReleaseShutdownRundown(v8, v7);
  CmCleanupThreadInfo((__int64 *)&v21);
  return (unsigned int)started;
}
