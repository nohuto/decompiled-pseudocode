/*
 * XREFs of ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005684C
 * Callers:
 *     ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x18003F4F8 (-AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ.c)
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003F6F8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@@Z @ 0x18003F904 (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x18003FD38 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ??$As@UICompositionLight@Composition@UI@Windows@@@?$ComPtr@UISpotLight@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003FFA0 (--$As@UICompositionLight@Composition@UI@Windows@@@-$ComPtr@UISpotLight@Composition@UI@Windows@@@.c)
 *     ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x180040058 (-CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePa.c)
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x18004DE7C (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B3C8C (--1CDesktopManager@@EEAA@XZ.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800B8ED0 (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     ??1?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C1300 (--1-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800C130C (--1CGlobalLightSet@@EEAA@XZ.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CEE78 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(__int64 *a1)
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
