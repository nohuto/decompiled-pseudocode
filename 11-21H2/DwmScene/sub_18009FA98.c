/*
 * XREFs of sub_18009FA98 @ 0x18009FA98
 * Callers:
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     sub_18009FB34 @ 0x18009FB34 (sub_18009FB34.c)
 */

__int64 sub_18009FA98()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  double v2; // xmm0_8
  __int64 v3; // r8
  int v4; // xmm2_4
  float v5; // xmm1_4
  __int64 v6; // rax
  __int64 v7; // rcx
  float v8; // xmm0_4
  __int64 result; // rax

  v2 = sub_18009FB34();
  v3 = *(_QWORD *)(v1 + 144);
  v4 = LODWORD(v2);
  if ( v3 < 0 )
  {
    v6 = *(_QWORD *)(v1 + 144) & 1LL | (*(_QWORD *)(v1 + 144) >> 1);
    v5 = (float)(int)v6 + (float)(int)v6;
  }
  else
  {
    v5 = (float)(int)v3;
  }
  v7 = *(_QWORD *)(v1 + 136);
  if ( v7 < 0 )
    v8 = (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1))
       + (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1));
  else
    v8 = (float)(int)v7;
  *(_DWORD *)(v0 + 8) = 0;
  result = v0;
  *(_DWORD *)(v0 + 12) = v4;
  *(float *)v0 = (float)(v8 - 1.0) / v5;
  *(float *)(v0 + 4) = 0.5 / v5;
  return result;
}
