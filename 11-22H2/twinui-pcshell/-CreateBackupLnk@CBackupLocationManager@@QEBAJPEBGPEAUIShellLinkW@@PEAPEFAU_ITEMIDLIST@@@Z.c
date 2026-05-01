/*
 * XREFs of ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180752C34
 * Callers:
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x18075461C (-GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 *     ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18075E694 (-_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z @ 0x18075F538 (-s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBackupLocationManager::CreateBackupLnk(
        CBackupLocationManager *this,
        wchar_t *a2,
        struct IShellLinkW *a3,
        struct _ITEMIDLIST **a4)
{
  int BackupPath; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // edx
  wchar_t *v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h]
  WCHAR pszDir[264]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pszPath[264]; // [rsp+250h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4A8h] [rbp+3A8h]

  *a4 = 0LL;
  v15 = 0LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  v14[1] = (wchar_t *)-1LL;
  v15 = -1LL;
  BackupPath = CBackupLocationManager::GetBackupPath(this, v14);
  v9 = BackupPath;
  if ( BackupPath < 0 )
  {
    v10 = 3759LL;
LABEL_17:
    v11 = (unsigned int)BackupPath;
    goto LABEL_18;
  }
  BackupPath = StringCchCopyW(pszDir, 260LL, v14[0]);
  v9 = BackupPath;
  if ( BackupPath < 0 )
  {
    v10 = 3762LL;
    goto LABEL_17;
  }
  BackupPath = StringCchCopyW(pszPath, 260LL, a2);
  v9 = BackupPath;
  if ( BackupPath < 0 )
  {
    v10 = 3765LL;
    goto LABEL_17;
  }
  BackupPath = PathCchAppend(pszPath, 0x104uLL, L".lnk");
  v9 = BackupPath;
  if ( BackupPath < 0 )
  {
    v10 = 3766LL;
    goto LABEL_17;
  }
  if ( PathCleanupSpec(pszDir, pszPath) >= 0 )
  {
    BackupPath = PathCchAppend(pszDir, 0x104uLL, pszPath);
    v9 = BackupPath;
    if ( BackupPath >= 0 )
    {
      BackupPath = CBackupLocationManager::s_ShouldCreateNewFile(pszDir, v12);
      v9 = BackupPath;
      if ( BackupPath >= 0 )
      {
        BackupPath = CBackupLocationManager::_PersistLnk(this, a3, pszDir, a4);
        v9 = BackupPath;
        if ( BackupPath >= 0 )
        {
          v9 = 0;
          goto LABEL_20;
        }
        v10 = 3770LL;
      }
      else
      {
        v10 = 3769LL;
      }
    }
    else
    {
      v10 = 3768LL;
    }
    goto LABEL_17;
  }
  v9 = -2147467259;
  v11 = 2147500037LL;
  v10 = 3767LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)v11);
LABEL_20:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  return v9;
}
