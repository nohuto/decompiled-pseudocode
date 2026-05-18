/*
 * XREFs of ?RuntimeClassInitialize@SpectreMesh@@QEAAJAEBV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x180013A90
 * Callers:
 *     ??$MakeAndInitialize@VSpectreMesh@@V1@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreMesh@@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x1800166AC (--$MakeAndInitialize@VSpectreMesh@@V1@AEAV-$shared_ptr@VMesh@Engine@Spectre@@@std@@@Details@WRL@.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall SpectreMesh::RuntimeClassInitialize(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 32) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 52) = 0;
  return 0LL;
}
