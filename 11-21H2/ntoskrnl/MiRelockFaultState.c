/*
 * XREFs of MiRelockFaultState @ 0x14027D364
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405A7608 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall MiRelockFaultState(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  char v6; // r14
  unsigned __int64 valid; // rax
  __int64 SharedVm; // rbx
  __int64 v9; // rdx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  v6 = MiLockWorkingSetShared(*a1);
  valid = MiLockLowestValidPageTable(v2, a2 << 25 >> 16, &v11);
  v3 = valid;
  if ( valid != a2 )
  {
    MiUnlockPageTableInternal(v2, valid);
    LOBYTE(v9) = v6;
    MiUnlockWorkingSetShared(v2, v9);
    v3 = 0LL;
    goto LABEL_5;
  }
  if ( !valid )
  {
LABEL_5:
    *((_BYTE *)a1 + 13) |= 1u;
    SharedVm = MiGetSharedVm(v2);
    LOBYTE(valid) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  a1[2] = v3;
  return valid;
}
