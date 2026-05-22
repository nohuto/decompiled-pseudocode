/*
 * XREFs of ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800E5564
 * Callers:
 *     ?GetAvailableSignalValueForLastPresent@CPresentationManager@@UEAA_KXZ @ 0x1800A73E0 (-GetAvailableSignalValueForLastPresent@CPresentationManager@@UEAA_KXZ.c)
 *     ?SetSyncId@CPresentationManager@@UEAAX_K@Z @ 0x1800A76F0 (-SetSyncId@CPresentationManager@@UEAAX_K@Z.c)
 *     ?Lock@CPresentationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800A7A8C (-Lock@CPresentationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetAlphaMode@CPresentationSurface@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800A7CF0 (-GetAlphaMode@CPresentationSurface@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CPresentationSurface@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800A7D30 (-GetColorSpace@CPresentationSurface@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetSourceRect@CPresentationSurface@@UEAA?AUtagRECT@@XZ @ 0x1800A7D70 (-GetSourceRect@CPresentationSurface@@UEAA-AUtagRECT@@XZ.c)
 *     ?SetForCompositionTextures@CPresentationSurface@@UEAAXXZ @ 0x1800A7DC0 (-SetForCompositionTextures@CPresentationSurface@@UEAAXXZ.c)
 *     ?ForceVSyncInterrupt@CPresentationManager@@UEAAJE@Z @ 0x1801AD700 (-ForceVSyncInterrupt@CPresentationManager@@UEAAJE@Z.c)
 *     ?GetNextPresentId@CPresentationManager@@UEAA_KXZ @ 0x1801AD840 (-GetNextPresentId@CPresentationManager@@UEAA_KXZ.c)
 *     ?GetPresentRetiringFence@CPresentationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801ADAE0 (-GetPresentRetiringFence@CPresentationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetPreferredPresentDuration@CPresentationManager@@UEAAJUSystemInterruptTime@@0@Z @ 0x1801AE680 (-SetPreferredPresentDuration@CPresentationManager@@UEAAJUSystemInterruptTime@@0@Z.c)
 *     ?SetTargetTime@CPresentationManager@@UEAAJUSystemInterruptTime@@@Z @ 0x1801AE720 (-SetTargetTime@CPresentationManager@@UEAAJUSystemInterruptTime@@@Z.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

struct _RTL_CRITICAL_SECTION **__fastcall wil::critical_section::lock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  wil::EnterCriticalSection(a2, a1);
  return a2;
}
