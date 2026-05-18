/*
 * XREFs of ??$MakeAndInitialize@VSpectreMaterial@@V1@AEAV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreMaterial@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18001667C
 * Callers:
 *     ?CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z @ 0x1800183C0 (-CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreMaterial,SpectreMaterial,std::shared_ptr<Spectre::Engine::Material> &>(
        __int64 *a1,
        _QWORD *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreMaterial,SpectreMaterial,std::shared_ptr<Spectre::Engine::Material> &>(
           a1,
           a2);
}
