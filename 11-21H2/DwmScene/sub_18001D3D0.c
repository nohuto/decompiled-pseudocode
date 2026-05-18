/*
 * XREFs of sub_18001D3D0 @ 0x18001D3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 */

// Hidden C++ exception states: #wind=2
float *__fastcall sub_18001D3D0(__int64 a1, float *a2, float *a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rax
  float *result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+28h] [rbp-30h]
  __int64 v18[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_18002C460(*(_QWORD *)(a1 + 16) + 16LL, &v16);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_1800129F4(v18, (__int64)&qword_1801F7FD8);
  result = (float *)sub_18004607C(v6, v7);
  v12 = result[2] - result[5];
  v13 = result[1] - result[4];
  *a2 = *result - result[3];
  a2[1] = v13;
  a2[2] = v12;
  v14 = result[5] + result[2];
  v15 = result[1] + result[4];
  *a3 = *result + result[3];
  a3[1] = v15;
  a3[2] = v14;
  if ( v17 )
    return (float *)j_LanguageEnumProc(v16, v9, v10, v11);
  return result;
}
