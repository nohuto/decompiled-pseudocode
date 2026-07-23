/*
 * XREFs of sub_14025CE80 @ 0x14025CE80
 * Callers:
 *     sub_14025E544 @ 0x14025E544 (sub_14025E544.c)
 *     sub_1402C5D00 @ 0x1402C5D00 (sub_1402C5D00.c)
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_14025CE80(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 73);
  v3 = &dword_140C51DF0;
  if ( v1 )
    v3 = &dword_140C51DE0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_140C51DF8;
  if ( v1 )
    v4 = &qword_140C51DE8;
  RtlAvlRemoveNode(v4, a1);
  *(_BYTE *)(a1 + 69) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
