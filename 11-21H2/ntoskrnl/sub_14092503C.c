/*
 * XREFs of sub_14092503C @ 0x14092503C
 * Callers:
 *     sub_1409246D8 @ 0x1409246D8 (sub_1409246D8.c)
 *     sub_14092512C @ 0x14092512C (sub_14092512C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14092503C(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax

  if ( a1 == a2 )
  {
    v2 = 0;
    v3 = 0;
  }
  else if ( a1 >= a2 )
  {
    v2 = a1 - a2;
    v3 = 1;
  }
  else
  {
    v2 = a2 - a1;
    v3 = -1;
  }
  result = -v3;
  if ( v2 <= 0x7FFFFFFF )
    return v3;
  return result;
}
