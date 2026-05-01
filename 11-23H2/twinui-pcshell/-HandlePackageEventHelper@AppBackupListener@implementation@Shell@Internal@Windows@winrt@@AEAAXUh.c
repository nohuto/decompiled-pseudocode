/*
 * XREFs of ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1806F362C
 * Callers:
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x1806F3700 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1806F3900 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1806F3C20 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180258EF8 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(
        __int64 a1,
        winrt::impl **a2,
        winrt::impl **a3)
{
  winrt::hstring *v6; // rbx
  struct winrt::impl::hstring_header *v7; // rdx
  unsigned int v8; // r8d
  struct winrt::impl::hstring_header *v9; // rdx
  unsigned int v10; // r8d
  int v11; // [rsp+28h] [rbp-38h]
  struct winrt::impl::hstring_header *v12; // [rsp+30h] [rbp-30h] BYREF
  struct winrt::impl::hstring_header *v13; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-18h]
  struct winrt::impl::hstring_header **v16; // [rsp+50h] [rbp-10h]
  char v17; // [rsp+A8h] [rbp+48h] BYREF

  v15 = v14;
  v6 = winrt::hstring::hstring((winrt::hstring *)v14, L"MSIX");
  v16 = &v12;
  v12 = winrt::impl::duplicate_hstring(*a3, v7, v8);
  v13 = winrt::impl::duplicate_hstring(*a2, v9, v10);
  v11 = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
    a1,
    &v17,
    (void **)&v13,
    (void **)&v12,
    v6,
    v11);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}
