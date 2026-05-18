/*
 * XREFs of ??4?$array@V?$shared_ptr@VSampler@Engine@Spectre@@@std@@$0BA@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009E070
 * Callers:
 *     ??0TextureState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z @ 0x18009DEF4 (--0TextureState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z.c)
 *     ?Reset@TextureState@Engine@Spectre@@UEAAXXZ @ 0x18009E110 (-Reset@TextureState@Engine@Spectre@@UEAAXXZ.c)
 *     ??0SamplerState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z @ 0x18009E2A0 (--0SamplerState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z.c)
 *     ?Reset@SamplerState@Engine@Spectre@@UEAAXXZ @ 0x18009E460 (-Reset@SamplerState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 *__fastcall std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 16LL;
  do
  {
    std::shared_ptr<Spectre::Engine::Light>::operator=(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
