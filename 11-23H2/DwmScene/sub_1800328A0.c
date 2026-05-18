/*
 * XREFs of sub_1800328A0 @ 0x1800328A0
 * Callers:
 *     sub_1800372DC @ 0x1800372DC (sub_1800372DC.c)
 *     sub_180037578 @ 0x180037578 (sub_180037578.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800328A0(__int64 a1, float a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm1_4

  if ( a2 > 0.0 )
  {
    v2 = *(float *)a1;
    if ( a2 > *(float *)a1 )
      v2 = a2;
    *(float *)a1 = v2;
    v3 = *(float *)(a1 + 4);
    if ( v3 > a2 )
      v3 = a2;
    *(float *)(a1 + 4) = v3;
    v4 = a2 + *(float *)(a1 + 8);
    ++*(_QWORD *)(a1 + 16);
    *(float *)(a1 + 8) = v4;
  }
}
