/*
 * XREFs of ??$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18073414C
 * Callers:
 *     ?GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x180283E64 (-GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ @ 0x1800B41C0 (-get_static_lifetime_map@impl@winrt@@YA-AU-$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$make@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1807340C0 (--$make@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA-A_PXZ.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>(
        _QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  signed int v5; // eax
  _QWORD v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v8[5]; // [rsp+48h] [rbp-28h] BYREF
  char v9; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+48h] BYREF

  winrt::impl::get_static_lifetime_map((__int64)&v10);
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v8,
    L"Windows.Internal.Shell.NetworkConnectionUtils",
    45);
  v11 = 0LL;
  v2 = v10;
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, v8[0], &v11);
  if ( v11 )
  {
    *a1 = v11;
  }
  else
  {
    v3 = operator new(0x28uLL);
    v4 = v3 + 2;
    v3[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Foundation::IActivationFactory>::`vftable';
    v3[3] = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    v3[1] = 1LL;
    *v3 = &winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils::`vftable';
    winrt::make<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,>(v3 + 4);
    *v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>::`vftable';
    v7[0] = v3 + 2;
    v7[1] = &`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>'::`7'::lock;
    _Platform_AcquireSRWLockExclusive(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>'::`7'::lock);
    v2 = v10;
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, v8[0], &v11);
    if ( v11 )
    {
      *a1 = v11;
      ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>'::`7'::lock);
      if ( v4 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v7);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, char *))(*(_QWORD *)v2 + 80LL))(v2, v8[0], v4, &v9);
      if ( v5 < 0 )
        winrt::throw_hresult(v5);
      *a1 = v4;
      ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>'::`7'::lock);
    }
  }
  if ( v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  return a1;
}
