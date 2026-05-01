/*
 * XREFs of ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18069161C
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180227620 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180228800 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 *     ?Shutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHXZ @ 0x18067C5C0 (-Shutdown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180691BA0 (-TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801BA844 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1802D2A56 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?A_PAEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x18068D668 (--$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@-$factory_cache_entry@UFlyoutBase@Primit.c)
 *     ??R_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@QEBA@AEBUIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z @ 0x18068E9C8 (--R_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@QEBA@AEBUIFlyoutBaseStatics@Primitives@Controls@Xa.c)
 *     ?Hide@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068F78C (-Hide@-$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell.c)
 *     ?OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180690630 (-OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEB.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180692AC0 (-View@-$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension@UISnapLayoutPickerExtension@Shell.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  const char *v5; // r9
  signed int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+10h]
  struct IInspectable v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  __int64 v10; // [rsp+70h] [rbp+28h] BYREF
  struct IInspectable v11; // [rsp+78h] [rbp+30h] BYREF

  v2 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v8.lpVtbl) = *((_DWORD *)this + 80);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v2,
      byte_1808759B9,
      0LL,
      v3,
      (__int64)&v8);
  }
  if ( !*((_BYTE *)this + 340) )
  {
    *((_BYTE *)this + 340) = 1;
    if ( *((_DWORD *)this + 93) == 2 )
    {
      if ( *((_BYTE *)this + 339) )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension>::Hide((__int64 *)this + 36);
      }
      else
      {
        v8.lpVtbl = 0LL;
        v11.lpVtbl = 0LL;
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnClosed(this, &v11, &v8);
      }
    }
    else
    {
      v9 = winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension>::View(
             (char *)this + 288,
             &v10);
      _InterlockedIncrement64(&qword_180991E98);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> )
      {
        _lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_::operator()(
          &v9,
          (__int64)&v8,
          (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>);
        _InterlockedDecrement64(&qword_180991E98);
      }
      else
      {
        _InterlockedDecrement64(&qword_180991E98);
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::call<_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_ &>(
          v4,
          (__int64)&v8,
          &v9);
      }
      if ( v10 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
      if ( !v8.lpVtbl )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xD3,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
          v5);
      v6 = (*((__int64 (__fastcall **)(struct IInspectableVtbl *))v8.lpVtbl->QueryInterface + 15))(v8.lpVtbl);
      if ( v6 < 0 )
        winrt::throw_hresult(v6);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
    }
  }
}
