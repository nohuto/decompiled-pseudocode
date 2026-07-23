/*
 * XREFs of sub_1403978A4 @ 0x1403978A4
 * Callers:
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_140997C84 @ 0x140997C84 (sub_140997C84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403978A4(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx

  if ( a1 == -1LL || a2 == -1LL )
    return -1LL;
  if ( a2 < a1 )
    return 0LL;
  v3 = a2 - a1;
  if ( v3 > a3 )
    return a3;
  return v3;
}
