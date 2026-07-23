/*
 * XREFs of sub_140232200 @ 0x140232200
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 * Callees:
 *     sub_140232260 @ 0x140232260 (sub_140232260.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_140232200(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
  sub_140232260(a1, *(unsigned int *)(v2 + 15584));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
}
