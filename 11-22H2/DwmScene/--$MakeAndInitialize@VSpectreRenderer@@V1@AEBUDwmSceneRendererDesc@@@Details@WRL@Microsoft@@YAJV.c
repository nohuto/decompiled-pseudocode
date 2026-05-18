/*
 * XREFs of ??$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreRenderer@@@WRL@Microsoft@@@012@AEBUDwmSceneRendererDesc@@@Z @ 0x1800100B8
 * Callers:
 *     CreateDwmSceneRenderer @ 0x1800105F0 (CreateDwmSceneRenderer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreRenderer,SpectreRenderer,DwmSceneRendererDesc const &>(
        __int64 *a1,
        const struct DwmSceneRendererDesc *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreRenderer,SpectreRenderer,DwmSceneRendererDesc const &>(
           (SpectreRenderer **)a1,
           a2);
}
