/*
 * XREFs of isspace @ 0x1403E1B20
 * Callers:
 *     ?ScTrimString@@YAXPEAD@Z @ 0x140650B5C (-ScTrimString@@YAXPEAD@Z.c)
 *     CmpGetToken @ 0x140B18C50 (CmpGetToken.c)
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
