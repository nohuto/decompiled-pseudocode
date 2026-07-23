/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x1402008EC
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MiDrainSystemAccessLog @ 0x140286F64 (MiDrainSystemAccessLog.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteWorkingSetList @ 0x140292F40 (MiDeleteWorkingSetList.c)
 */

__int64 __fastcall MiDeleteSessionAddressSpace(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  KIRQL v11; // r14
  int v12; // edx

  v2 = a1 + 192;
  MiDrainSystemAccessLog(a1 + 192);
  SharedVm = MiGetSharedVm(v2, v5, v6, v7);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v11 = v9;
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
    MiDeleteWorkingSetList(v2);
  LOBYTE(v10) = v11;
  MiUnlockWorkingSetExclusive(v2, v10);
  LOBYTE(v12) = 17;
  return MiDeletePagablePteRange(v2, v12, 0, qword_140C659E8, qword_140C659E8 + 0x7FFFFFFFFFLL, 0, 0, a2);
}
