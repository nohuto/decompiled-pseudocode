/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1984
 * Callers:
 *     ?SetOpacity@CSpriteVisual@@UEAAXN@Z @ 0x18000ACC0 (-SetOpacity@CSpriteVisual@@UEAAXN@Z.c)
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x1800180F0 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18002C904 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x18004B5EC (-CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@C.c)
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18004D46C (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18004D604 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004D980 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004D9F4 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18006CC70 (-OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18009F5C0 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A53D0 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A5AD0 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A5BE4 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800B8F0C (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B92BC (--1CDisplayDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B9AEC (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800BA9CC (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800BB450 (--1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800BBDA0 (--1CDisplayMixedModeAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800BDA68 (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x1800BDE3C (--1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800BE658 (--1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ @ 0x1800BECFC (--1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800C174C (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180099664 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<3>((__int64)this, (int)a2, a3, (__int64)a4, v5, retaddr, v6);
}
