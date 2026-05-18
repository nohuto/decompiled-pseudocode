/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::RotateVectorAroundY @ 0x180096AEC
 * Callers:
 *     ?Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180096B80 (-Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     cosf @ 0x18000C008 (cosf.c)
 *     _o_sinf_0 @ 0x18000C068 (_o_sinf_0.c)
 */

__int64 __fastcall Spectre::Engine::_anonymous_namespace_::RotateVectorAroundY(__int64 a1, __int64 a2, float a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 result; // rax

  v5 = cosf(a3);
  v6 = o_sinf_0(a3);
  v7 = *(float *)a2;
  v8 = *(float *)(a2 + 8);
  v9 = *(float *)a2 * v5;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  result = a1;
  *(float *)a1 = v9 - (float)(v8 * v6);
  *(float *)(a1 + 8) = (float)(v8 * v5) + (float)(v7 * v6);
  return result;
}
