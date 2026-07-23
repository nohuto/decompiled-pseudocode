/*
 * XREFs of sub_1405E3AB8 @ 0x1405E3AB8
 * Callers:
 *     sub_1406E88A0 @ 0x1406E88A0 (sub_1406E88A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405E3AB8(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // dx

  result = 0LL;
  if ( a1 )
  {
    v2 = *a1;
    if ( (*a1 & 1) != 0 )
      return 3221225485LL;
    v3 = a1[1];
    if ( (v3 & 1) != 0 || v2 > v3 || v3 == 0xFFFF || !*((_QWORD *)a1 + 1) && (v2 || v3) )
      return 3221225485LL;
  }
  return result;
}
