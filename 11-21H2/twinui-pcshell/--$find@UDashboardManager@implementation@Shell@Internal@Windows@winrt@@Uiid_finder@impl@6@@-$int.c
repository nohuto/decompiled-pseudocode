/*
 * XREFs of ??$find@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SAPEAXPEBUDashboardManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F8988
 * Callers:
 *     ?find_interface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F8C50 (-find_interface@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U134.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax

  v5 = (_QWORD *)*a2;
  v6 = *(_QWORD *)*a2 - winrt::impl::guid_v<IImmersiveShellComponent>;
  if ( !v6 )
    v6 = v5[1] + 0x3BA05710A3855A7ELL;
  if ( v6 )
  {
    if ( (unsigned __int8)winrt::operator==(v5, &winrt::impl::guid_v<IInspectable>, a1, a4) )
    {
      v14 = v8 + 48;
    }
    else
    {
      if ( (unsigned __int8)winrt::operator==(v7, &winrt::impl::guid_v<IImmersiveWindowMessageNotification>, v8, v9) )
        return v11;
      if ( !(unsigned __int8)winrt::operator==(v10, &winrt::impl::guid_v<IEdgeUiTouchInvocation>, v11, v12) )
        return 0LL;
      v14 = v8 + 8;
    }
    return v14 & -(__int64)(v8 != 0);
  }
  return (a1 + 40) & -(__int64)(a1 != 0);
}
