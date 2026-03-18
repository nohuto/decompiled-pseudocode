/*
 * XREFs of MiReleaseWalkLocks @ 0x14033D29C
 * Callers:
 *     MiGetNextPageTablePte @ 0x14025D0A0 (MiGetNextPageTablePte.c)
 *     MiDeleteEmptyPageTableTail @ 0x14033CC90 (MiDeleteEmptyPageTableTail.c)
 *     MiYieldPageTableWalk @ 0x14033D228 (MiYieldPageTableWalk.c)
 *     MiQueryEPTAccessedState @ 0x14046C08C (MiQueryEPTAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 *     MiUnlockPhysicalPageByVa @ 0x14061CDD0 (MiUnlockPhysicalPageByVa.c)
 *     MiCombineWorkingSetTail @ 0x140653620 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A2F0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  __int64 v6; // rdi

  v4 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24), v4);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    MiUnlockWorkingSetShared(v6, *(_BYTE *)(a1 + 7));
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67024);
    MiUnlockWorkingSetExclusive(v6, *(_BYTE *)(a1 + 7), a3, a4);
  }
  *(_BYTE *)(a1 + 4) |= 1u;
}
