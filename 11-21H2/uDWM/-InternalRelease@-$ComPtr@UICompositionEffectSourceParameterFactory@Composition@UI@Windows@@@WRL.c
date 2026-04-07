/*
 * XREFs of ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D20
 * Callers:
 *     ??_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x1800117E0 (--_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003B088 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ??$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@?$ComPtr@UICompositionEffectSourceParameter@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003B7CC (--$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@-$ComPtr@UICompositionEffectSourceParame.c)
 *     ?put_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x18010A860 (-put_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffe.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
