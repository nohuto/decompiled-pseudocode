/*
 * XREFs of sub_140777C08 @ 0x140777C08
 * Callers:
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DEAB0 @ 0x1402DEAB0 (sub_1402DEAB0.c)
 *     sub_1407750C0 @ 0x1407750C0 (sub_1407750C0.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 */

char __fastcall sub_140777C08(__int64 a1, unsigned __int8 a2)
{
  char v5; // bl

  if ( sub_1402DEAB0(a1) )
    return 0;
  sub_1407756F4(0);
  v5 = sub_1407750C0(a1, a2);
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0);
  return v5;
}
