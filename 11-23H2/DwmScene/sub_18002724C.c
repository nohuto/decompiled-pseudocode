/*
 * XREFs of sub_18002724C @ 0x18002724C
 * Callers:
 *     sub_180026500 @ 0x180026500 (sub_180026500.c)
 * Callees:
 *     sub_180070A98 @ 0x180070A98 (sub_180070A98.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 */

__int64 __fastcall sub_18002724C(__int64 a1, float a2)
{
  float *v2; // rdx
  float v3; // xmm2_4
  int v4; // eax
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // eax
  float v9; // xmm0_4
  __int64 v10; // rbx
  __int64 result; // rax

  v2 = (float *)(a1 + 3916);
  v3 = 1000.0 / a2;
  v4 = *(_DWORD *)(a1 + 3912) + 1;
  *(_DWORD *)(a1 + 3912) = v4;
  *(float *)(a1 + 3904) = a2;
  v6 = a2 + *(float *)(a1 + 3908);
  *(float *)(a1 + 3888) = v3;
  *(float *)(a1 + 3908) = v6;
  if ( v6 >= 1000.0 )
  {
    *(_DWORD *)(a1 + 3908) = 0;
    *(_DWORD *)(a1 + 3912) = 0;
    v7 = (float)v4;
    *(_DWORD *)(a1 + 3900) = *(_DWORD *)(a1 + 3920);
    v8 = *v2;
    *(_DWORD *)(a1 + 3920) = 2139095039;
    *(float *)(a1 + 3896) = v8;
    *v2 = -3.4028235e38;
    *(float *)(a1 + 3892) = (float)(v7 * 1000.0) / v6;
  }
  v9 = *(float *)(a1 + 3920);
  if ( v9 > v3 )
    v9 = v3;
  *(float *)(a1 + 3920) = v9;
  if ( v3 <= *v2 )
    v3 = *v2;
  *v2 = v3;
  v10 = sub_180070B94();
  *(_QWORD *)(a1 + 3928) = sub_180070A98(v10, 11LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3952) = sub_180070A98(v10, 6LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3936) = sub_180070A98(v10, 5LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3944) = sub_180070A98(v10, 7LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3960) = sub_180070A98(v10, 3LL, 2LL, 3LL);
  result = sub_180070A98(v10, 8LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3968) = result;
  return result;
}
