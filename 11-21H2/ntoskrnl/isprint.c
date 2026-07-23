/*
 * XREFs of isprint @ 0x1403E1AF0
 * Callers:
 *     sub_1405FABF8 @ 0x1405FABF8 (sub_1405FABF8.c)
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 0x157;
}
