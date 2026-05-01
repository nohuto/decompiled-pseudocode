/*
 * XREFs of ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEAAKXZ @ 0x1800D9A50
 * Callers:
 *     ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@W7EAAKXZ @ 0x1802ABF50 (-AddRef@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@_ea_1802ABF50.c)
 *     ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WBI@EAAKXZ @ 0x1802ABF70 (-AddRef@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@_ea_1802ABF70.c)
 *     ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WCA@EAAKXZ @ 0x1802ABF90 (-AddRef@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@_ea_1802ABF90.c)
 *     ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WCI@EAAKXZ @ 0x1802ABFB0 (-AddRef@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@_ea_1802ABFB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v3; // zf
  signed __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 64);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v1 + 1, v1);
    v3 = v1 == v4;
    v1 = v4;
    if ( v3 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
