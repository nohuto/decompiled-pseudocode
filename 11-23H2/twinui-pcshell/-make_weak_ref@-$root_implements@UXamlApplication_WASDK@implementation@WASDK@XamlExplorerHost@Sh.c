/*
 * XREFs of ?make_weak_ref@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18006ACD4
 * Callers:
 *     ?query_interface@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180015598 (-query_interface@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180392600 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

void *__fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx
  void *result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  if ( v1 < 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v1 + 24), 1u);
    return (void *)(2 * v1 + 8);
  }
  else
  {
    result = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v4 = (unsigned __int64)result;
    if ( result )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      v10 = v4;
      *(_QWORD *)(v4 + 8) = &winrt::impl::weak_source<0,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_QWORD *)(v4 + 16) = v5;
      *(_DWORD *)(v4 + 24) = v1;
      *(_DWORD *)(v4 + 28) = 1;
      v6 = (v4 >> 1) | 0x8000000000000000uLL;
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64(a1 + 2, v6, v1);
        v7 = v1 == v8;
        v1 = v8;
        if ( v7 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 24), 1u);
          return (void *)(v10 + 8);
        }
        if ( v8 < 0 )
          break;
        _InterlockedExchange((volatile __int32 *)(v10 + 24), v8);
      }
      v9 = 2 * v8 + 8;
      winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(
        &v10,
        (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u));
      return (void *)v9;
    }
  }
  return result;
}
