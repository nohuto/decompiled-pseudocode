/*
 * XREFs of sub_18004C2A0 @ 0x18004C2A0
 * Callers:
 *     sub_18004BDC0 @ 0x18004BDC0 (sub_18004BDC0.c)
 * Callees:
 *     _o__fdclass @ 0x18000BF6A (_o__fdclass.c)
 */

bool __fastcall sub_18004C2A0(float *a1)
{
  float v1; // xmm0_4
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax

  v1 = *a1;
  v2 = 1LL;
  v3 = 15LL;
  do
  {
    v4 = v2 >> 2;
    v5 = v2++ & 3;
    v1 = v1 + a1[4 * v4 + v5];
    --v3;
  }
  while ( v3 );
  return (__int16)o__fdclass() <= 0;
}
