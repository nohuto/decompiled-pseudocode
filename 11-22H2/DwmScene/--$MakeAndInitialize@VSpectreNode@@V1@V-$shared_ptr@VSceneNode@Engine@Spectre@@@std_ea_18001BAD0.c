/*
 * XREFs of ??$MakeAndInitialize@VSpectreNode@@V1@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreNode@@@WRL@Microsoft@@@012@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001BAD0
 * Callers:
 *     ?RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18001BF8C (-RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreNode,SpectreNode,std::shared_ptr<Spectre::Engine::SceneNode>>(
        __int64 *a1,
        _QWORD *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreNode,SpectreNode,std::shared_ptr<Spectre::Engine::SceneNode>>(
           a1,
           a2);
}
