/*
 * XREFs of sub_1402D8E9C @ 0x1402D8E9C
 * Callers:
 *     sub_140259480 @ 0x140259480 (sub_140259480.c)
 *     sub_1402D8ABC @ 0x1402D8ABC (sub_1402D8ABC.c)
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 *     sub_1402D8E2C @ 0x1402D8E2C (sub_1402D8E2C.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_1402DBD88 @ 0x1402DBD88 (sub_1402DBD88.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_1402D8E9C(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v3; // dl
  __int64 v4; // r9

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v3 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && v3 <= 0xFu )
      {
        v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v4 + 20) |= ~((unsigned __int16)(1LL << (v3 + 1)) - 1) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140D311C0);
  *a1 = CurrentIrql;
}
