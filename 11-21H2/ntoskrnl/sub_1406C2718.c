/*
 * XREFs of sub_1406C2718 @ 0x1406C2718
 * Callers:
 *     sub_140245D28 @ 0x140245D28 (sub_140245D28.c)
 *     sub_140972D10 @ 0x140972D10 (sub_140972D10.c)
 *     sub_14098056C @ 0x14098056C (sub_14098056C.c)
 * Callees:
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_14025D494 @ 0x14025D494 (sub_14025D494.c)
 */

__int64 __fastcall sub_1406C2718(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = 0LL;
  if ( !a2 )
    return 1LL;
  while ( (unsigned int)sub_140245DF4(v2 + a1) )
  {
    v2 += 4096LL;
    if ( v2 >= a2 )
      return 1LL;
  }
  while ( v2 )
  {
    v2 -= 4096LL;
    sub_14025D494(v2 + a1);
  }
  return 0LL;
}
