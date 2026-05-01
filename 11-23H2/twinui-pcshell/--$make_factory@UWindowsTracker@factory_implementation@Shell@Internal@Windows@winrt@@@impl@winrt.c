/*
 * XREFs of ??$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B2388
 * Callers:
 *     ?Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x1800B1FEC (-Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 * Callees:
 *     ??0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AF994 (--0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ @ 0x1800B41C0 (-get_static_lifetime_map@impl@winrt@@YA-AU-$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
char **__fastcall winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>(
        char **a1)
{
  __int64 v2; // rbx
  winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker *v3; // rdi
  char *v4; // rdi
  int v5; // eax
  _QWORD v7[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v8[5]; // [rsp+48h] [rbp-28h] BYREF
  winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker *v9; // [rsp+A8h] [rbp+38h] BYREF
  char *v10; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+48h] BYREF

  winrt::impl::get_static_lifetime_map(&v11);
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v8,
    L"Windows.Internal.Shell.WindowsTracker",
    0x25uLL);
  v10 = 0LL;
  v2 = v11;
  (*(void (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)v11 + 48LL))(v11, v8[0], &v10);
  if ( v10 )
  {
    *a1 = v10;
  }
  else
  {
    v3 = (winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker *)operator new(0x28uLL);
    v9 = v3;
    winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::WindowsTracker(v3);
    *(_QWORD *)v3 = &winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::`vftable';
    v4 = (char *)v3 + 16;
    v7[0] = v4;
    v7[1] = &`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>'::`7'::lock;
    _Platform_AcquireSRWLockExclusive(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>'::`7'::lock);
    (*(void (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)v2 + 48LL))(v2, v8[0], &v10);
    if ( v10 )
    {
      *a1 = v10;
      ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>'::`7'::lock);
      if ( v4 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v7);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, char *, winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker **))(*(_QWORD *)v2 + 80LL))(
             v2,
             v8[0],
             v4,
             &v9);
      if ( v5 < 0 )
        winrt::throw_hresult((unsigned int)v5);
      *a1 = v4;
      ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>'::`7'::lock);
    }
  }
  if ( v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
  return a1;
}
