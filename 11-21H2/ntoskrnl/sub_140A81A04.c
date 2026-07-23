/*
 * XREFs of sub_140A81A04 @ 0x140A81A04
 * Callers:
 *     sub_140A98ACC @ 0x140A98ACC (sub_140A98ACC.c)
 *     sub_140A98D0C @ 0x140A98D0C (sub_140A98D0C.c)
 *     sub_140AA5AF8 @ 0x140AA5AF8 (sub_140AA5AF8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140A81A04(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  if ( !*a1 )
  {
    *a1 = a2;
    result = a2 + a3;
LABEL_6:
    a1[1] = result;
    return result;
  }
  if ( a2 < *a1 )
    *a1 = a2;
  result = a2 + a3;
  if ( a2 + a3 > a1[1] )
    goto LABEL_6;
  return result;
}
