/*
 * XREFs of CmpAssignKeySecurity @ 0x1408585CC
 * Callers:
 *     CmpSecurityMethod @ 0x1406D5900 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpGetKeyNodeForKcb @ 0x140710874 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackExclusive @ 0x1407109C8 (CmpLockKcbStackExclusive.c)
 *     CmpAssignSecurityToKcb @ 0x14076AC50 (CmpAssignSecurityToKcb.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1407BE234 (ObAssignObjectSecurityDescriptor.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmUnlockHiveSecurity @ 0x140AF5100 (CmUnlockHiveSecurity.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, void *a2)
{
  char v3; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // di
  int started; // ebx
  ULONG_PTR v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 KeyNodeForKcb; // r15
  __int64 v20; // rcx
  PPRIVILEGE_SET v21; // rcx
  __int128 v23; // [rsp+48h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+58h] [rbp-18h]
  char v25; // [rsp+C0h] [rbp+50h]
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v26 = 0LL;
  v3 = 0;
  HvpGetCellContextReinitialize(&v26);
  v23 = 0LL;
  WORD1(v23) = -1;
  *(_OWORD *)Privileges = 0LL;
  v25 = CmpAcquireShutdownRundown(v6, v5, v7);
  v12 = v25;
  if ( v25 )
  {
    CmpLockRegistry(v9, v8, v10, v11);
    v14 = *(_QWORD *)(a1 + 8);
    v3 = 1;
    v15 = *(_QWORD *)(v14 + 32);
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v23, v14);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive((__int64)&v23);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        v16 = KeAbPreAcquire(v15 + 72, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(v15 + 72), 0LL, v16, v15 + 72);
        if ( v16 )
          *(_BYTE *)(v16 + 18) = 1;
        v17 = KeAbPreAcquire(v15 + 1784, 0LL);
        v18 = v17;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 1784), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v15 + 1784), v17, v15 + 1784);
        if ( v18 )
          *(_BYTE *)(v18 + 18) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v14, (unsigned int *)&v26, 1);
        ObAssignObjectSecurityDescriptor(a1, 0LL);
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v15 + 4112) & 0x20) != 0 && *(_DWORD *)(v15 + 1872) )
          a2 = (void *)(*(_QWORD *)(*(_QWORD *)(v15 + 1888) + 8LL) + 32LL);
        started = CmpGetSecurityDescriptorNodeEx(
                    *(_QWORD *)(v14 + 32),
                    *(_DWORD *)(v14 + 40),
                    KeyNodeForKcb,
                    *(_DWORD *)(v14 + 40) >> 31,
                    a2,
                    0,
                    (unsigned int *)(KeyNodeForKcb + 44));
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v14, *(unsigned int *)(KeyNodeForKcb + 44), 0LL, 1, 0);
          started = 0;
        }
        if ( KeyNodeForKcb )
        {
          v20 = *(_QWORD *)(v14 + 32);
          if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v20, &v26);
          else
            HvpReleaseCellPaged(v20, (unsigned int *)&v26);
        }
        CmUnlockHiveSecurity(v15);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
        KeAbPostRelease(v15 + 72);
      }
      CmpUnlockKcbStack((__int64)&v23);
    }
    v12 = v25;
  }
  else
  {
    started = -1073741431;
  }
  v21 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v3 )
    CmpUnlockRegistry(v21, v8, v10, v11);
  if ( v12 )
    CmpReleaseShutdownRundown(v21, v8);
  return (unsigned int)started;
}
