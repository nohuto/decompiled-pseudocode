/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420
 * Callers:
 *     ?Initialize@CCompFrameStats@@IEAAJXZ @ 0x18000581C (-Initialize@CCompFrameStats@@IEAAJXZ.c)
 *     ??1CCompFrameStats@@MEAA@XZ @ 0x180005A88 (--1CCompFrameStats@@MEAA@XZ.c)
 *     ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180010C00 (-CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180036390 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004BF1C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x18004CEC8 (-AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ.c)
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x18004D2EC (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x18004D734 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800970E4 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1CAnimationClock@@UEAA@XZ @ 0x1800A1A0C (--1CAnimationClock@@UEAA@XZ.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7BE0 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z @ 0x1800AF0E8 (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800AFCEC (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800CA554 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?Initialize@CSystemBackdropVisual@@UEAAJXZ @ 0x1800E12A0 (-Initialize@CSystemBackdropVisual@@UEAAJXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180101700 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
