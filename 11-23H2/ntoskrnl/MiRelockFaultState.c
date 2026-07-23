/*
 * XREFs of MiRelockFaultState @ 0x140287128
 * Callers:
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiKernelWriteToExecutableMemory @ 0x1406468BC (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiRelockFaultState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int8 v6; // r14
  __int64 v7; // r9
  unsigned __int64 valid; // rax
  volatile LONG *SharedVm; // rbx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  v6 = MiLockWorkingSetShared(*(_QWORD *)a1);
  valid = MiLockLowestValidPageTable(v2, a2 << 25 >> 16, &v11, v7);
  v3 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v2, valid);
    MiUnlockWorkingSetShared(v2, v6);
    v3 = 0LL;
    goto LABEL_5;
  }
  if ( !valid )
  {
LABEL_5:
    *(_BYTE *)(a1 + 13) |= 1u;
    SharedVm = (volatile LONG *)MiGetSharedVm(v2);
    LOBYTE(valid) = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
  }
  *(_QWORD *)(a1 + 16) = v3;
  return valid;
}
