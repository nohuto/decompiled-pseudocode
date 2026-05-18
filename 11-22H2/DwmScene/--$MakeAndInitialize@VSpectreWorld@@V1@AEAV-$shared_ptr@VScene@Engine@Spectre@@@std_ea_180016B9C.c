/*
 * XREFs of ??$MakeAndInitialize@VSpectreWorld@@V1@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreWorld@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180016B9C
 * Callers:
 *     ?CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z @ 0x1800187F0 (-CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreWorld,SpectreWorld,std::shared_ptr<Spectre::Engine::Scene> &>(
        __int64 *a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreWorld,SpectreWorld,std::shared_ptr<Spectre::Engine::Scene> &>(
           a1,
           a2);
}
