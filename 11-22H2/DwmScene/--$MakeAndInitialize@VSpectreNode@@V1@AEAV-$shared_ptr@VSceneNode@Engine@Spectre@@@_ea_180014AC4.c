/*
 * XREFs of ??$MakeAndInitialize@VSpectreNode@@V1@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreNode@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180014AC4
 * Callers:
 *     ?AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z @ 0x180014CA0 (-AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreNode,SpectreNode,std::shared_ptr<Spectre::Engine::SceneNode> &>(
        __int64 *a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreNode,SpectreNode,std::shared_ptr<Spectre::Engine::SceneNode> &>(
           a1,
           a2);
}
