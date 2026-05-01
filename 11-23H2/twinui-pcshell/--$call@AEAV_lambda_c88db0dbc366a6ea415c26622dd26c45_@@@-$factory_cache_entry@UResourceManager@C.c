/*
 * XREFs of ??$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@?$factory_cache_entry@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@Z @ 0x180087054
 * Callers:
 *     ?EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18002DC14 (-EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@.c)
 *     ?EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x180085D5C (-EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$get_activation_factory@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@YA?AU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@0@AEBUhstring@param@0@@Z @ 0x180087184 (--$get_activation_factory@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationMod.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>::call<_lambda_c88db0dbc366a6ea415c26622dd26c45_ &>(
        __int64 a1,
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  void (__fastcall ***v8)(_QWORD, __int64 *, _QWORD **); // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp-18h] BYREF

  v9 = a2;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v10,
    L"Windows.ApplicationModel.Resources.Core.ResourceManager",
    0x37uLL);
  winrt::get_activation_factory<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>(
    &v8,
    v10);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
  if ( v8 )
  {
    v11 = 0LL;
    (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
    v4 = v11;
    v9 = v11;
  }
  else
  {
    v9 = 0LL;
    v4 = 0LL;
  }
  if ( v4 )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v9);
    _InterlockedIncrement64(&qword_18098E878);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E880);
    }
    v5 = winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>;
    *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    _InterlockedDecrement64(&qword_18098E878);
    v6 = v8 == 0LL;
  }
  else
  {
    *a2 = v3;
    if ( v3 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v3)[1])(v3);
    v6 = v3 == 0LL;
  }
  if ( !v6 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v8);
  return a2;
}
