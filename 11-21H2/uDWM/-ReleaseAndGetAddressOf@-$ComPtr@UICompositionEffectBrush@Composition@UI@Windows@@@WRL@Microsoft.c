/*
 * XREFs of ?ReleaseAndGetAddressOf@?$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAPEAPEAUICompositionEffectBrush@Composition@UI@Windows@@XZ @ 0x18001243C
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003B088 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectBrush>::ReleaseAndGetAddressOf(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return a1;
}
