/*
 * XREFs of sub_1405ECFE0 @ 0x1405ECFE0
 * Callers:
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405ECFE0(int a1, int a2)
{
  if ( (unsigned int)(a1 - 4352) > 0x12 || (unsigned int)(a2 - 4449) > 0x14 )
    return 0LL;
  else
    return (unsigned int)(28 * (a2 + 21 * a1) - 2639516);
}
