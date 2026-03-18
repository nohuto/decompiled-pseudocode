/*
 * XREFs of MiCleanWorkingSet @ 0x14024E9E0
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDrainSystemAccessLog @ 0x1402829D0 (MiDrainSystemAccessLog.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rbp
  __int64 SharedVm; // rbx
  KIRQL v4; // al
  KIRQL v5; // di
  __int64 v6; // rbx
  __int64 v7; // rdx

  v1 = a1 + 1664;
  SharedVm = MiGetSharedVm(a1 + 1664);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v5 = v4;
  *(_BYTE *)(v1 + 187) |= 1u;
  --*(_QWORD *)(a1 + 1272);
  MiDrainSystemAccessLog(v1);
  v6 = *(_QWORD *)(v1 + 112);
  LOBYTE(v7) = v5;
  MiUnlockWorkingSetExclusive(v1, v7);
  return v6 - 4;
}
