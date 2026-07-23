/*
 * XREFs of sub_140230700 @ 0x140230700
 * Callers:
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_1402CC9A0 @ 0x1402CC9A0 (sub_1402CC9A0.c)
 * Callees:
 *     sub_14023073C @ 0x14023073C (sub_14023073C.c)
 */

_BOOL8 sub_140230700()
{
  int v0; // r8d
  _DWORD *v1; // r9
  char v2; // r10

  if ( !(unsigned int)sub_14023073C() )
  {
    if ( (dword_140D0689C & 0x200000) == 0 )
      return 1;
    return (v2 & 1) == 0;
  }
  if ( v0 == 1 )
    return (v2 & 1) == 0;
  if ( (v2 & 2) != 0 )
    *v1 = 1;
  return 0;
}
