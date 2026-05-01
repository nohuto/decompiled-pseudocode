/*
 * XREFs of ??$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18027DB8C
 * Callers:
 *     ?Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18027E3B0 (-Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ @ 0x1800B41C0 (-get_static_lifetime_map@impl@winrt@@YA-AU-$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027DD28 (--0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
char **__fastcall winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>(
        char **a1)
{
  __int64 v2; // rbx
  winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *v3; // rdi
  char *v4; // rdi
  int v5; // eax
  char *v7; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v9[4]; // [rsp+50h] [rbp-20h] BYREF
  winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *v10; // [rsp+A8h] [rbp+38h] BYREF
  char *v11; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+48h] BYREF

  winrt::impl::get_static_lifetime_map((__int64)&v12);
  v8[0] = L"Windows.Internal.Shell.ProcessTracker";
  v8[1] = 37LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v9, (__int64)v8);
  v11 = 0LL;
  v2 = v12;
  (*(void (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)v12 + 48LL))(v12, v9[0], &v11);
  if ( v11 )
  {
    *a1 = v11;
  }
  else
  {
    v3 = (winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *)operator new(0x28uLL);
    v10 = v3;
    winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker::ProcessTracker(v3);
    *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>::`vftable';
    v4 = (char *)v3 + 16;
    v7 = v4;
    v8[0] = &`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>'::`7'::lock;
    _Platform_AcquireSRWLockExclusive(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>'::`7'::lock);
    (*(void (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)v2 + 48LL))(v2, v9[0], &v11);
    if ( v11 )
    {
      *a1 = v11;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, char *, winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker **))(*(_QWORD *)v2 + 80LL))(
             v2,
             v9[0],
             v4,
             &v10);
      if ( v5 < 0 )
        winrt::throw_hresult((unsigned int)v5);
      v7 = 0LL;
      *a1 = v4;
    }
    ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>'::`7'::lock);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v7);
  }
  if ( v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v12);
  return a1;
}
