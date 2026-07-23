/*
 * XREFs of sub_1403978C0 @ 0x1403978C0
 * Callers:
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_140996A20 @ 0x140996A20 (sub_140996A20.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1403978C0(unsigned int a1, unsigned __int64 a2)
{
  if ( a2 )
    return 3600000000u * (unsigned __int64)a1 / a2;
  else
    return 0LL;
}
