/*
 * XREFs of sub_140418FE4 @ 0x140418FE4
 * Callers:
 *     sub_140961998 @ 0x140961998 (sub_140961998.c)
 *     sub_140A57460 @ 0x140A57460 (sub_140A57460.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_140418FE4()
{
  return (qword_140D06958 & 0x400000) != 0 || (qword_140D06958 & 0x29) == 9;
}
