/*
 * XREFs of ??$MakeAndInitialize@VSpectreSampler@@V1@AEAV?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreSampler@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Z @ 0x18001690C
 * Callers:
 *     ?CreateSampler@SpectreRenderer@@UEAAJPEAPEAUISpectreSampler@@@Z @ 0x180018570 (-CreateSampler@SpectreRenderer@@UEAAJPEAPEAUISpectreSampler@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreSampler,SpectreSampler,std::shared_ptr<Spectre::Engine::Sampler> &>(
        __int64 *a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreSampler,SpectreSampler,std::shared_ptr<Spectre::Engine::Sampler> &>(
           a1,
           a2);
}
