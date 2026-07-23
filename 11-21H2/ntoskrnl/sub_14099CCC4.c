/*
 * XREFs of sub_14099CCC4 @ 0x14099CCC4
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 *     sub_1407EF514 @ 0x1407EF514 (sub_1407EF514.c)
 */

__int64 __fastcall sub_14099CCC4(char a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  sub_1407EF098(1);
  v2 = 0;
  if ( a1 )
  {
    v3 = dword_140C1F488 + 1;
  }
  else
  {
    if ( !dword_140C1F488 )
    {
      v2 = -1073741811;
      goto LABEL_11;
    }
    v3 = dword_140C1F488 - 1;
  }
  dword_140C1F488 = v3;
  if ( v3 == 1 && a1 || !v3 && !a1 )
    sub_1407EF514();
LABEL_11:
  sub_1407EF120();
  return v2;
}
