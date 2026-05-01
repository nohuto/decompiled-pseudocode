/*
 * XREFs of ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180258EF8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x1802590C0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 *     ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1806F362C (-HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUh.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x1806F5924 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2 @ 0x180258A6C (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
        __int64 a1,
        _BYTE *a2,
        void **a3,
        void **a4,
        winrt::hstring *a5,
        ...)
{
  void *v9; // rax
  void **v10; // rbx
  __int64 v12; // [rsp+38h] [rbp-180h]
  int v13; // [rsp+1C8h] [rbp+10h] BYREF
  void **v14; // [rsp+1D0h] [rbp+18h]
  void **v15; // [rsp+1D8h] [rbp+20h]
  va_list va; // [rsp+1E8h] [rbp+30h] BYREF

  va_start(va, a5);
  v15 = a4;
  v14 = a3;
  v9 = operator new(0x14EuLL);
  v13 = 0;
  v12 = a1;
  v10 = (void **)a5;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__InitCoro_2(
    &v13,
    (__int64)v9,
    a2,
    (int)a3,
    (__int64)a4,
    (__int64)a5,
    (int *)va,
    v12);
  winrt::hstring::~hstring(a3);
  winrt::hstring::~hstring(a4);
  winrt::hstring::~hstring(v10);
  return a2;
}
