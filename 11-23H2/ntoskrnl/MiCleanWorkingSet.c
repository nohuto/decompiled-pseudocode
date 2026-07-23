/*
 * XREFs of MiCleanWorkingSet @ 0x140364B8C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiDrainSystemAccessLog @ 0x140286F64 (MiDrainSystemAccessLog.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rbp
  volatile LONG *SharedVm; // rbx
  KIRQL v4; // al
  unsigned __int8 v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9

  v1 = a1 + 1664;
  SharedVm = (volatile LONG *)MiGetSharedVm(a1 + 1664);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v5 = v4;
  LOBYTE(v6) = *(_BYTE *)(v1 + 187) | 1;
  *(_BYTE *)(v1 + 187) = v6;
  --*(_QWORD *)(a1 + 1272);
  MiDrainSystemAccessLog(v1, v6, v7, v8);
  v9 = *(_QWORD *)(v1 + 112);
  MiUnlockWorkingSetExclusive(v1, v5, v10, v11);
  return v9 - 4;
}
