/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC
 * Callers:
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x18009DE18 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18009F5A8 (-start@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?GetAvailableSignalValueForLastPresent@CPresentationManager@@UEAA_KXZ @ 0x1800A73E0 (-GetAvailableSignalValueForLastPresent@CPresentationManager@@UEAA_KXZ.c)
 *     ?SetSyncId@CPresentationManager@@UEAAX_K@Z @ 0x1800A76F0 (-SetSyncId@CPresentationManager@@UEAAX_K@Z.c)
 *     ?GetAlphaMode@CPresentationSurface@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800A7CF0 (-GetAlphaMode@CPresentationSurface@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CPresentationSurface@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800A7D30 (-GetColorSpace@CPresentationSurface@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetSourceRect@CPresentationSurface@@UEAA?AUtagRECT@@XZ @ 0x1800A7D70 (-GetSourceRect@CPresentationSurface@@UEAA-AUtagRECT@@XZ.c)
 *     ?SetForCompositionTextures@CPresentationSurface@@UEAAXXZ @ 0x1800A7DC0 (-SetForCompositionTextures@CPresentationSurface@@UEAAXXZ.c)
 *     ?ForceVSyncInterrupt@CPresentationManager@@UEAAJE@Z @ 0x1801AD700 (-ForceVSyncInterrupt@CPresentationManager@@UEAAJE@Z.c)
 *     ?GetNextPresentId@CPresentationManager@@UEAA_KXZ @ 0x1801AD840 (-GetNextPresentId@CPresentationManager@@UEAA_KXZ.c)
 *     ?GetPresentRetiringFence@CPresentationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801ADAE0 (-GetPresentRetiringFence@CPresentationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0 (-Present@CPresentationManager@@UEAAJXZ.c)
 *     ?SetPreferredPresentDuration@CPresentationManager@@UEAAJUSystemInterruptTime@@0@Z @ 0x1801AE680 (-SetPreferredPresentDuration@CPresentationManager@@UEAAJUSystemInterruptTime@@0@Z.c)
 *     ?SetTargetTime@CPresentationManager@@UEAAJUSystemInterruptTime@@@Z @ 0x1801AE720 (-SetTargetTime@CPresentationManager@@UEAAJUSystemInterruptTime@@@Z.c)
 *     ??1CPresentationBuffer@@MEAA@XZ @ 0x1801AF034 (--1CPresentationBuffer@@MEAA@XZ.c)
 *     ?GetAvailableEvent@CPresentationBuffer@@UEAAJPEAPEAX@Z @ 0x1801AF290 (-GetAvailableEvent@CPresentationBuffer@@UEAAJPEAPEAX@Z.c)
 *     ?IsAvailable@CPresentationBuffer@@UEAAJPEAE@Z @ 0x1801AF590 (-IsAvailable@CPresentationBuffer@@UEAAJPEAE@Z.c)
 *     ??1CPresentationSurface@@MEAA@XZ @ 0x1801AFCA4 (--1CPresentationSurface@@MEAA@XZ.c)
 *     ?RestrictToOutput@CPresentationSurface@@UEAAJPEAUIUnknown@@@Z @ 0x1801B0410 (-RestrictToOutput@CPresentationSurface@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetAlphaMode@CPresentationSurface@@UEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1801B0530 (-SetAlphaMode@CPresentationSurface@@UEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetBuffer@CPresentationSurface@@UEAAJPEAUIPresentationBuffer@@@Z @ 0x1801B0580 (-SetBuffer@CPresentationSurface@@UEAAJPEAUIPresentationBuffer@@@Z.c)
 *     ?SetColorSpace@CPresentationSurface@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B05D0 (-SetColorSpace@CPresentationSurface@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisableReadback@CPresentationSurface@@UEAAJE@Z @ 0x1801B0630 (-SetDisableReadback@CPresentationSurface@@UEAAJE@Z.c)
 *     ?SetLetterboxingMargins@CPresentationSurface@@UEAAJMMMM@Z @ 0x1801B06A0 (-SetLetterboxingMargins@CPresentationSurface@@UEAAJMMMM@Z.c)
 *     ?SetSourceRect@CPresentationSurface@@UEAAJPEBUtagRECT@@@Z @ 0x1801B0770 (-SetSourceRect@CPresentationSurface@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?SetTag@CPresentationSurface@@UEAAX_K@Z @ 0x1801B07D0 (-SetTag@CPresentationSurface@@UEAAX_K@Z.c)
 *     ?SetTransform@CPresentationSurface@@UEAAJPEAUPresentationTransform@@@Z @ 0x1801B0810 (-SetTransform@CPresentationSurface@@UEAAJPEAUPresentationTransform@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
