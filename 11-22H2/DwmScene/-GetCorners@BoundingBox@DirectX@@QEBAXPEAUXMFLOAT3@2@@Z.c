/*
 * XREFs of ?GetCorners@BoundingBox@DirectX@@QEBAXPEAUXMFLOAT3@2@@Z @ 0x18004A35C
 * Callers:
 *     ?RenderSymbols@Bounds@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004A4B0 (-RenderSymbols@Bounds@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 *     ?RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C850 (-RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectX::BoundingBox::GetCorners(DirectX::BoundingBox *this, struct DirectX::XMFLOAT3 *a2)
{
  unsigned __int64 v2; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm3
  __m128 v5; // xmm0
  __m128 v6; // xmm0

  v2 = 0LL;
  v3 = _mm_movelh_ps((__m128)*(unsigned __int64 *)this, (__m128)*((unsigned int *)this + 2));
  v4 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 12), (__m128)*((unsigned int *)this + 5));
  do
  {
    v5 = _mm_mul_ps(v4, *(__m128 *)((char *)&DirectX::g_BoxOffset + v2));
    v2 += 16LL;
    v6 = _mm_add_ps(v5, v3);
    *(_QWORD *)a2 = v6.m128_u64[0];
    *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
    a2 = (struct DirectX::XMFLOAT3 *)((char *)a2 + 12);
  }
  while ( v2 < 0x80 );
}
