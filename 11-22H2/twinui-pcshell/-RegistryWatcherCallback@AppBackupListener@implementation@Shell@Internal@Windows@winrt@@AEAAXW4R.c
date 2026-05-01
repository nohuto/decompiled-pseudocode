/*
 * XREFs of ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x1806F5924
 * Callers:
 *     wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1806F0CC0 (wistd--__function--__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800A6BD4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180258EF8 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 *     ?BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uhstring@6@@Z @ 0x1802595F0 (-BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUf.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??1?$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@XZ @ 0x18041DC00 (--1-$pair@$$CBUhstring@winrt@@U12@@std@@QEAA@XZ.c)
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1806F2848 (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1806F2B8C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback(
        __int64 a1,
        int a2,
        HKEY a3,
        const WCHAR *a4,
        _QWORD *a5)
{
  wil::details::registry_watcher_state **v9; // rcx
  unsigned int v10; // r8d
  winrt::hstring *v11; // r14
  void **v12; // rbx
  struct winrt::impl::hstring_header *v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  struct winrt::impl::hstring_header *v16; // rdx
  unsigned int v17; // r8d
  struct winrt::impl::hstring_header *v18; // rbx
  __int64 v19; // r8
  struct winrt::impl::hstring_header *v20; // rdx
  unsigned int v21; // r8d
  winrt::hstring *v22; // r14
  struct winrt::impl::hstring_header *v23; // rdx
  unsigned int v24; // r8d
  struct winrt::impl::hstring_header *v25; // rdx
  unsigned int v26; // r8d
  winrt::impl *v27; // [rsp+30h] [rbp-78h] BYREF
  struct winrt::impl::hstring_header *v28; // [rsp+38h] [rbp-70h] BYREF
  struct winrt::impl::hstring_header *v29; // [rsp+40h] [rbp-68h] BYREF
  struct winrt::impl::hstring_header *v30; // [rsp+48h] [rbp-60h] BYREF
  volatile signed __int32 **v31; // [rsp+50h] [rbp-58h] BYREF
  void *v32; // [rsp+58h] [rbp-50h] BYREF
  char v33; // [rsp+60h] [rbp-48h]
  volatile signed __int32 ***v34; // [rsp+68h] [rbp-40h]
  winrt::impl *v35[2]; // [rsp+70h] [rbp-38h] BYREF
  char v36; // [rsp+80h] [rbp-28h]
  struct winrt::impl::hstring_header **v37; // [rsp+88h] [rbp-20h]
  char v38; // [rsp+B8h] [rbp+10h] BYREF

  winrt::hstring::hstring((winrt::hstring *)&v27, &LocaleName);
  if ( a2 == 1 )
  {
    if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(a5) )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        v9,
        0LL);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v27);
      return;
    }
  }
  else if ( !a2 )
  {
    winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted(a1, (__int64)&v32, a3, a4);
    if ( v33 )
    {
      winrt::hstring::operator=((volatile signed __int32 **)&v27, (winrt::impl **)&v32, v10);
      v31 = (volatile signed __int32 **)&v30;
      v11 = winrt::hstring::hstring((winrt::hstring *)&v30, L"Win32");
      v37 = &v29;
      v12 = (void **)winrt::hstring::hstring((winrt::hstring *)&v29, L"Uninstall");
      v28 = winrt::impl::duplicate_hstring(v27, v13, v14);
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
        a1,
        &v38,
        (void **)&v28,
        v12,
        v11,
        0);
      if ( v33 )
        winrt::hstring::~hstring(&v32);
    }
    else
    {
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled(
        a1,
        (__int64)v35,
        a3,
        a4);
      if ( v36 )
      {
        winrt::hstring::operator=((volatile signed __int32 **)&v27, v35, v15);
        if ( !v36 )
          std::_Throw_bad_optional_access();
        v18 = winrt::impl::duplicate_hstring(v35[1], v16, v17);
        v30 = v18;
        if ( winrt::operator==((__int64)&v30, (__int64)L"Install", v19) )
        {
          v28 = winrt::impl::duplicate_hstring(v27, v20, v21);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry(
            a1,
            (__int64)&v38,
            (void **)&v28);
        }
        else
        {
          v34 = &v31;
          v22 = winrt::hstring::hstring((winrt::hstring *)&v31, L"Win32");
          v37 = &v28;
          v28 = winrt::impl::duplicate_hstring(v18, v23, v24);
          v29 = winrt::impl::duplicate_hstring(v27, v25, v26);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
            a1,
            &v38,
            (void **)&v29,
            (void **)&v28,
            v22,
            0);
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v30);
        if ( v36 )
          std::pair<winrt::hstring const,winrt::hstring>::~pair<winrt::hstring const,winrt::hstring>((volatile signed __int32 **)v35);
        if ( v33 )
          winrt::hstring::~hstring(&v32);
      }
      else if ( v33 )
      {
        winrt::hstring::~hstring(&v32);
      }
    }
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v27);
}
