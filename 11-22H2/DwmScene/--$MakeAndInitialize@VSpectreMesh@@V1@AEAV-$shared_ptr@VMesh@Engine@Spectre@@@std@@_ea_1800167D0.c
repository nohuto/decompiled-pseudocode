/*
 * XREFs of ??$MakeAndInitialize@VSpectreMesh@@V1@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreMesh@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x1800167D0
 * Callers:
 *     ?CreateMesh@SpectreRenderer@@UEAAJPEAPEAUISpectreMesh@@@Z @ 0x1800184C0 (-CreateMesh@SpectreRenderer@@UEAAJPEAPEAUISpectreMesh@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreMesh,SpectreMesh,std::shared_ptr<Spectre::Engine::Mesh> &>(
        __int64 *a1,
        _QWORD *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreMesh,SpectreMesh,std::shared_ptr<Spectre::Engine::Mesh> &>(
           a1,
           a2);
}
