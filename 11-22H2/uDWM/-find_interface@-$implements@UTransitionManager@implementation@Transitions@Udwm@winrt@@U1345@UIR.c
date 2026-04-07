/*
 * XREFs of ?find_interface@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180040EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UTransitionManager@implementation@Transitions@Udwm@winrt@@Uiid_finder@impl@5@@?$interface_list@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@UITransitionManagerNativePrivate@34@@impl@winrt@@SAPEAXPEBUTransitionManager@implementation@Transitions@Udwm@2@AEBUiid_finder@12@@Z @ 0x1800FC4B0 (--$find@UTransitionManager@implementation@Transitions@Udwm@winrt@@Uiid_finder@impl@5@@-$interfac.c)
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 40;
  v4 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionManager>;
  v3 = *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionManager>;
  v10 = a2;
  if ( v3 )
    v4 = a2[1] + 0x4ACC19359E507F5DLL;
  if ( !v4 )
  {
    if ( v2 )
      return v2 + 8;
    return 0LL;
  }
  v6 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IRotationTransitionManager>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IRotationTransitionManager> )
    v6 = a2[1] + 0x26D9910909CB886CLL;
  if ( v6 )
  {
    v8 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>;
    if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager> )
      v8 = a2[1] + 0x4C5778FF47F1EF56LL;
    if ( v8 )
      return winrt::impl::interface_list<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::find<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::impl::iid_finder>(
               v2,
               &v10);
    v9 = v2 + 24;
    if ( !v2 )
      return 0LL;
    return v9;
  }
  if ( !v2 )
    return 0LL;
  return v2 + 16;
}
