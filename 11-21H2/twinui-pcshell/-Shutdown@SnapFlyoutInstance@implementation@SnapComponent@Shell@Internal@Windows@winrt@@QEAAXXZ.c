/*
 * XREFs of ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805BA8B4
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::InternalHideAsync$_ResumeCoro$1 @ 0x1801C06A0 (SnapFlyoutHost--InternalHideAsync$_ResumeCoro$1.c)
 *     ?Shutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHXZ @ 0x1805B04F0 (-Shutdown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?AUFlyoutBase@Primitives@Controls@Xaml@UI@Windows@2@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1805B764C (--$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@-$factory_cache_entry@UFlyoutBase@Primit.c)
 *     ?GetAttachedFlyout@?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUFlyoutBase@Primitives@Controls@Xaml@UI@Windows@3@AEBUFrameworkElement@7893@@Z @ 0x1805B8D38 (-GetAttachedFlyout@-$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics@UIFlyoutBase.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUFrameworkElement@Xaml@UI@Windows@3@XZ @ 0x1805BB6EC (-View@-$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // rax
  signed int v4; // eax
  __int64 v5; // [rsp+30h] [rbp-9h] BYREF
  __int64 v6; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v9; // [rsp+70h] [rbp+37h]
  int v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+7Ch] [rbp+43h]

  v2 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
  {
    LODWORD(v5) = *((_DWORD *)this + 70);
    v9 = &v5;
    v10 = 4;
    v11 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806CB8A6, 0LL, 0LL, 3u, &v8);
  }
  if ( !*((_BYTE *)this + 300) )
  {
    *((_BYTE *)this + 300) = 1;
    v3 = (_QWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension>::View(
                     (char *)this + 240,
                     &v6);
    v7[0] = v3;
    v7[1] = &qword_1807B6D88;
    _InterlockedIncrement64(&qword_1807B6D88);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> )
    {
      winrt::impl::consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::GetAttachedFlyout(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>,
        &v5,
        v3);
      _InterlockedDecrement64(&qword_1807B6D88);
    }
    else
    {
      _InterlockedDecrement64(&qword_1807B6D88);
      winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::call<_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_ &>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))&qword_1807B6D88,
        (__int64)&v5,
        v7);
    }
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 120LL))(v5);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  }
}
