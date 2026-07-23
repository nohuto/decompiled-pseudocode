/*
 * XREFs of sub_14053DA58 @ 0x14053DA58
 * Callers:
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_14053D99C @ 0x14053D99C (sub_14053D99C.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053D2E4 @ 0x14053D2E4 (sub_14053D2E4.c)
 */

char __fastcall sub_14053DA58(_BYTE *a1, char a2, char a3)
{
  char result; // al
  char v6; // dl

  result = a1[1172];
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8;
    }
    else
    {
      result = -result;
      v6 = result != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = sub_14053D2E4((__int64)a1, v6);
    }
    else if ( !a1[985] )
    {
      if ( !a1[984] )
        KeBugCheckEx(0x34u, 0x660uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      result = sub_1402E2D20((unsigned __int64)(a1 + 920), -30000000LL, 0, 0, 0LL);
    }
    if ( !a1[1172] )
      a1[985] = 1;
  }
  return result;
}
