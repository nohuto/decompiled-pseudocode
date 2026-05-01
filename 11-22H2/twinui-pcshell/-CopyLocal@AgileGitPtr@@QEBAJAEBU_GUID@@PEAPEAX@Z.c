/*
 * XREFs of ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC20
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b16571f7fb7f4e85d44c575668fabb7___::Run @ 0x180016450 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1b16571f7fb7f4e85d44c575668fabb7___--Run.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180040D68 (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_358e99305f92347d1d7773659819cb56___::Run @ 0x180070650 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_358e99305f92347d1d7773659819cb56___--Run.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009C540 (-UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedE.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18009CAE8 (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18009D834 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1800A0F1C (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc7fada248b85e5d1b4f2443fa1ae7ed___::Run @ 0x1801B51A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cc7fada248b85e5d1b4f2443fa1ae7ed___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09496e5ff37d712a9a147c3a9b6e30d4___::Run @ 0x1801B65F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_09496e5ff37d712a9a147c3a9b6e30d4___--Run.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0ED0 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C1A70 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1804C7F68 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804CAB28 (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1804CAEEC (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1804CB310 (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804CFCC0 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804D2330 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 *     ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@_KPEAUIAsyncCallback@@@Z @ 0x1804D2944 (-TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI.c)
 *     ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x1804EAE64 (-OnBackComplete@WindowWrapperBase@@AEAAX_N@Z.c)
 *     ?OnBackComplete@UwpWindowWrapperBase@@AEAAX_N@Z @ 0x1804F1424 (-OnBackComplete@UwpWindowWrapperBase@@AEAAX_N@Z.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780DE0 (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileGitPtr::CopyLocal(AgileGitPtr *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  bool v4; // zf
  __int64 v5; // rcx

  result = 0LL;
  v4 = *(_QWORD *)this == 0LL;
  *a3 = 0LL;
  if ( v4 )
    return 2147942487LL;
  v5 = *(_QWORD *)this;
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v5 + 24LL))(v5, a2);
  return result;
}
