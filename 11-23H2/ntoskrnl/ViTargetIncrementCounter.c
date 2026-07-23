/*
 * XREFs of ViTargetIncrementCounter @ 0x140ACBBFC
 * Callers:
 *     VfCheckImageCompliance @ 0x140AC34BC (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140AC37C0 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140AC3868 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140AC3910 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140ACF5F0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VfHandlePoolAlloc @ 0x140AD0FD0 (VfHandlePoolAlloc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140AD51A0 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD5200 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140AD52A0 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140AD5300 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140AD53A0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140AD5430 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140AD5740 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140AD57C0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140AD5860 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140AD5900 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD5A20 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD5D0C (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140AD6978 (ViFaultsInjectionNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140209FDC (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A34C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404668A8 (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x140ACA734 (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x140ACBEB4 (ViTargetUpdateTreeAllowed.c)
 */

void __fastcall ViTargetIncrementCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  v9 = 0LL;
  if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a1) )
  {
    LOBYTE(v4) = VfDriverIsKernelImageAddress(v3);
    if ( !v4 )
    {
      VfAvlInitializeLockContext((__int64)&v9, 1);
      v7 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v9, v6, v5);
      if ( v7 )
      {
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      VfAvlCleanupLockContext((__int64)&v9);
    }
  }
}
