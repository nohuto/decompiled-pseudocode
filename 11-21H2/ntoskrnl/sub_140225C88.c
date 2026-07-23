/*
 * XREFs of sub_140225C88 @ 0x140225C88
 * Callers:
 *     sub_140224F04 @ 0x140224F04 (sub_140224F04.c)
 *     sub_1402254C0 @ 0x1402254C0 (sub_1402254C0.c)
 *     sub_14022560C @ 0x14022560C (sub_14022560C.c)
 *     sub_14098EBBC @ 0x14098EBBC (sub_14098EBBC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140225C88(_BYTE *a1)
{
  char result; // al

  result = 0;
  if ( a1 )
  {
    if ( (unsigned __int8)byte_140D06992 > 1u )
    {
      if ( *(_QWORD *)a1 )
        result = *(_BYTE *)(*(_QWORD *)a1 + 301LL);
    }
    else
    {
      if ( !a1[64] )
        return result;
      result = a1[88];
    }
    if ( result )
      return 1;
  }
  return result;
}
