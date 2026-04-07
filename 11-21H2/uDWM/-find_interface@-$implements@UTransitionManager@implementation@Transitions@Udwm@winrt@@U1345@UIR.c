/*
 * XREFs of ?find_interface@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800421E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UTransitionManager@implementation@Transitions@Udwm@winrt@@Uiid_finder@impl@5@@?$interface_list@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@UITransitionManagerNativePrivate@34@@impl@winrt@@SAPEAXPEBUTransitionManager@implementation@Transitions@Udwm@2@AEBUiid_finder@12@@Z @ 0x180044250 (--$find@UTransitionManager@implementation@Transitions@Udwm@winrt@@Uiid_finder@impl@5@@-$interfac.c)
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 32;
  v4 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionManager>;
  v3 = *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionManager>;
  v7 = a2;
  if ( v3 )
    v4 = a2[1] + 0x4ACC19359E507F5DLL;
  if ( v4 )
  {
    v6 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IRotationTransitionManager>;
    if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IRotationTransitionManager> )
      v6 = a2[1] + 0x26D9910909CB886CLL;
    if ( v6 )
      return winrt::impl::interface_list<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::find<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::impl::iid_finder>(
               v2,
               &v7);
    if ( v2 )
      return v2 + 16;
  }
  else if ( v2 )
  {
    return v2 + 8;
  }
  return 0LL;
}
