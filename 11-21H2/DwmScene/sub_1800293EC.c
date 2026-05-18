/*
 * XREFs of sub_1800293EC @ 0x1800293EC
 * Callers:
 *     sub_180028430 @ 0x180028430 (sub_180028430.c)
 * Callees:
 *     sub_18007BC8C @ 0x18007BC8C (sub_18007BC8C.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 */

__int64 __fastcall sub_1800293EC(__int64 a1, float a2)
{
  float v3; // xmm2_4
  int v4; // eax
  float v5; // xmm1_4
  float v6; // xmm0_4
  __int64 v7; // rbx
  __int64 result; // rax

  v3 = 1000.0 / a2;
  v4 = *(_DWORD *)(a1 + 3912) + 1;
  *(_DWORD *)(a1 + 3912) = v4;
  *(float *)(a1 + 3904) = a2;
  v5 = a2 + *(float *)(a1 + 3908);
  *(float *)(a1 + 3888) = v3;
  *(float *)(a1 + 3908) = v5;
  if ( v5 < 1000.0 )
  {
    v6 = *(float *)(a1 + 3920);
  }
  else
  {
    *(_DWORD *)(a1 + 3908) = 0;
    *(_DWORD *)(a1 + 3912) = 0;
    *(_DWORD *)(a1 + 3900) = *(_DWORD *)(a1 + 3920);
    *(_DWORD *)(a1 + 3896) = *(_DWORD *)(a1 + 3916);
    *(_DWORD *)(a1 + 3916) = -8388609;
    *(float *)(a1 + 3892) = (float)((float)v4 * 1000.0) / v5;
    v6 = 3.4028235e38;
  }
  if ( v6 > v3 )
    v6 = v3;
  *(float *)(a1 + 3920) = v6;
  if ( v3 <= *(float *)(a1 + 3916) )
    v3 = *(float *)(a1 + 3916);
  *(float *)(a1 + 3916) = v3;
  v7 = sub_18007BD8C();
  *(_QWORD *)(a1 + 3928) = sub_18007BC8C(v7, 11LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3952) = sub_18007BC8C(v7, 6LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3936) = sub_18007BC8C(v7, 5LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3944) = sub_18007BC8C(v7, 7LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3960) = sub_18007BC8C(v7, 3LL, 2LL, 3LL);
  result = sub_18007BC8C(v7, 8LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3968) = result;
  return result;
}
