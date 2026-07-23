/*
 * XREFs of sub_14027DAD4 @ 0x14027DAD4
 * Callers:
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 */

__int64 __fastcall sub_14027DAD4(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C51864);
  if ( (unsigned int)sub_14027B080(a1) == 1 || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( a1 >= qword_140C540C0 && a1 <= qword_140C51BF0 )
    return HIBYTE(word_140C51864);
  return (unsigned __int8)word_140C51864;
}
