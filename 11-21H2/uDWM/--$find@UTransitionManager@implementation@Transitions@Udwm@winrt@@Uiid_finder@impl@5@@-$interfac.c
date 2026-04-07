/*
 * XREFs of ??$find@UTransitionManager@implementation@Transitions@Udwm@winrt@@Uiid_finder@impl@5@@?$interface_list@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@UITransitionManagerNativePrivate@34@@impl@winrt@@SAPEAXPEBUTransitionManager@implementation@Transitions@Udwm@2@AEBUiid_finder@12@@Z @ 0x180044250
 * Callers:
 *     ?find_interface@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800421E0 (-find_interface@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::find<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // rax

  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>;
  if ( !v4 )
    v4 = v3[1] + 0x4C5778FF47F1EF56LL;
  if ( !v4 )
    return (a1 + 24) & -(__int64)(a1 != 0);
  v6 = *v3 - winrt::impl::guid_v<Udwm::Transitions::ITransitionManagerNativePrivate>;
  if ( *v3 == winrt::impl::guid_v<Udwm::Transitions::ITransitionManagerNativePrivate> )
    v6 = v3[1] + 0x1574DD40EF798F68LL;
  return a1 & -(__int64)(v6 == 0);
}
