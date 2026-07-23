/*
 * XREFs of sub_140591D7C @ 0x140591D7C
 * Callers:
 *     sub_1405A4FB8 @ 0x1405A4FB8 (sub_1405A4FB8.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall sub_140591D7C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx

  v1 = *a1;
  v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4199) + 12488LL);
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 128));
}
