/*
 * XREFs of Short2Bcd @ 0x1C004ED94
 * Callers:
 *     UsbhGetLocationIdString @ 0x1C0050690 (UsbhGetLocationIdString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Short2Bcd(unsigned __int16 a1)
{
  unsigned __int16 v1; // r10
  __int16 v2; // bx
  unsigned __int16 v3; // r11
  int v4; // r8d

  v1 = 0;
  v2 = 1000;
  v3 = 0;
  if ( a1 <= 0x270Fu )
    v1 = a1;
  do
  {
    v4 = (v1 - v1 % v2) / v2;
    v3 = v4 | (16 * v3);
    v1 -= v4 * v2;
    v2 /= 10;
  }
  while ( v2 );
  return v3;
}
