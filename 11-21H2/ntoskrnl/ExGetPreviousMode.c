/*
 * XREFs of ExGetPreviousMode @ 0x1402DFD50
 * Callers:
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_140780AA8 @ 0x140780AA8 (sub_140780AA8.c)
 *     sub_140780D40 @ 0x140780D40 (sub_140780D40.c)
 *     sub_140A34148 @ 0x140A34148 (sub_140A34148.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return *((_BYTE *)KeGetCurrentThread() + 562);
}
