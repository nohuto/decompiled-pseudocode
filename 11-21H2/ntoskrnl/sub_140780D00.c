/*
 * XREFs of sub_140780D00 @ 0x140780D00
 * Callers:
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_140780AA8 @ 0x140780AA8 (sub_140780AA8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140780D00(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
