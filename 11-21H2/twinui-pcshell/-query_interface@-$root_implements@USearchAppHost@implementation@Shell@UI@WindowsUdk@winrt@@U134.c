/*
 * XREFs of ?query_interface@?$root_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801A2F38
 * Callers:
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180138540 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@w.c)
 *     ?QueryInterface@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18017A1B0 (-QueryInterface@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearch.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18017A1D0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_18017A1D0.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18017A1F0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_18017A1F0.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18017A210 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_18017A210.c)
 *     ?QueryInterface@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801A01F0 (-QueryInterface@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@wi_ea_1801A01F0.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1803A01B0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1803A01B0.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1803A01D0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1803A01D0.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?AddRef@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@QEAAIXZ @ 0x18019E608 (-AddRef@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winr.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801A2E1C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 weak_ref; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_2;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
    goto LABEL_4;
  if ( winrt::operator==(v8, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
  {
    v11 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    return winrt::impl::make_marshaler(v11, a3);
  }
  else
  {
    if ( winrt::operator==(v10, &winrt::impl::guid_v<IInspectable>) )
    {
      v9 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      goto LABEL_5;
    }
    if ( winrt::operator==(v12, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
    {
LABEL_4:
      v9 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
LABEL_5:
      *a3 = v9;
LABEL_2:
      winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef((__int64)a1);
      return 0LL;
    }
    if ( winrt::operator==(v13, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
    {
      weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
      *a3 = weak_ref;
      return weak_ref == 0 ? 0x8007000E : 0;
    }
    else
    {
      return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
    }
  }
}
