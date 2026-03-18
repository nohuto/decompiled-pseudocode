/*
 * XREFs of MiRelockFaultState @ 0x140286E98
 * Callers:
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiKernelWriteToExecutableMemory @ 0x14064636C (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x14025A290 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140286E74 (MiGetSharedVm.c)
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
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
