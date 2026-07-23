/*
 * XREFs of sub_14093A908 @ 0x14093A908
 * Callers:
 *     sub_14080B79C @ 0x14080B79C (sub_14080B79C.c)
 * Callees:
 *     sub_14055B654 @ 0x14055B654 (sub_14055B654.c)
 *     sub_14055B7B0 @ 0x14055B7B0 (sub_14055B7B0.c)
 *     sub_14093CFC8 @ 0x14093CFC8 (sub_14093CFC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14093A908(PVOID P)
{
  sub_14055B7B0();
  sub_14055B654((__int64)P, 2LL, 0);
  sub_14093CFC8(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
