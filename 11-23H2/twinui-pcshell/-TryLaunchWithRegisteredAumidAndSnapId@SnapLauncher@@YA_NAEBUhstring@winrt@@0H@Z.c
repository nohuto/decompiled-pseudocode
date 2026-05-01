/*
 * XREFs of ?TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z @ 0x18022E03C
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x18022A840 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_18022A840.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$as@UIServiceProvider@@@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?A_PXZ @ 0x18022DCBC (--$as@UIServiceProvider@@@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-A_PXZ.c)
 *     ??$make@VSnapWindowProvider@SnapLauncher@@AEAH@winrt@@YA?A_PAEAH@Z @ 0x18022DD20 (--$make@VSnapWindowProvider@SnapLauncher@@AEAH@winrt@@YA-A_PAEAH@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall SnapLauncher::TryLaunchWithRegisteredAumidAndSnapId(
        SnapLauncher *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  const WCHAR *v4; // rax
  bool v5; // bl
  __int64 (__fastcall ***v7)(_QWORD, const IID *, __int64 *); // [rsp+30h] [rbp-39h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  LPITEMIDLIST ppidl; // [rsp+40h] [rbp-29h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+50h] [rbp-19h] BYREF
  int v11; // [rsp+E0h] [rbp+77h] BYREF
  IUnknown *punk; // [rsp+E8h] [rbp+7Fh] BYREF

  v11 = (int)a3;
  punk = 0LL;
  v4 = winrt::hstring::c_str(this);
  if ( SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0,
         v4,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&punk) >= 0 )
  {
    winrt::make<SnapLauncher::SnapWindowProvider,int &>(&v7, &v11);
    if ( SHGetIDListFromObject(punk, &ppidl) >= 0 )
    {
      pExecInfo.cbSize = 112;
      memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
      pExecInfo.fMask = 134217996;
      pExecInfo.nShow = 1;
      pExecInfo.lpIDList = ppidl;
      pExecInfo.lpParameters = winrt::hstring::c_str(a2);
      pExecInfo.hInstApp = (HINSTANCE)*winrt::com_ptr<IObjectWithSite>::as<IServiceProvider>(&v7, &v8);
      if ( v8 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
      v5 = ShellExecuteExW(&pExecInfo);
      CoTaskMemFree(ppidl);
    }
    else
    {
      v5 = 0;
    }
    if ( v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v7);
  }
  else
  {
    v5 = 0;
  }
  if ( punk )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&punk);
  return v5;
}
