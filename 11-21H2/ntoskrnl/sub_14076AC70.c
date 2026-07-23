/*
 * XREFs of sub_14076AC70 @ 0x14076AC70
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_1409473F0 @ 0x1409473F0 (sub_1409473F0.c)
 *     sub_14095B398 @ 0x14095B398 (sub_14095B398.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14076ACA8 @ 0x14076ACA8 (sub_14076ACA8.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 */

__int64 __fastcall sub_14076AC70(__int64 a1)
{
  sub_1407756F4(0LL);
  sub_14076ACA8(a1);
  ExReleaseResourceLite(&stru_140C46AC0);
  return sub_140775698(0LL);
}
