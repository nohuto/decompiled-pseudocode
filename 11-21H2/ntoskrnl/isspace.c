/*
 * XREFs of isspace @ 0x1403E1B20
 * Callers:
 *     sub_140650B5C @ 0x140650B5C (sub_140650B5C.c)
 *     sub_140B18C50 @ 0x140B18C50 (sub_140B18C50.c)
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 8;
}
