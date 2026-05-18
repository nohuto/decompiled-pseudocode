/*
 * XREFs of ??$MakeAndInitialize@VSpectreLightNode@@V1@AEAW4Dwm3DLightType@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreLightNode@@@WRL@Microsoft@@@012@AEAW4Dwm3DLightType@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180016530
 * Callers:
 *     ?CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z @ 0x180018290 (-CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreLightNode,SpectreLightNode,enum Dwm3DLightType &,std::shared_ptr<Spectre::Engine::SceneNode> &>(
        __int64 *a1,
        int *a2,
        Spectre::Engine::SceneNode **a3)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreLightNode,SpectreLightNode,enum Dwm3DLightType &,std::shared_ptr<Spectre::Engine::SceneNode> &>(
           a1,
           a2,
           a3);
}
