/*
 * XREFs of ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z @ 0x18075E174
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180753208 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x180756C18 (-GetTombstonePath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 */

__int64 __fastcall CBackupLocationManager::_GetTombstoneShortcutLocation(PCWSTR *this, LPCWSTR pszPath, wchar_t *a3)
{
  int TombstonePath; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  const WCHAR *FileNameW; // rax
  HRESULT v11; // eax
  wchar_t *v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+30h] [rbp-D0h]
  WCHAR pszPatha[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
  v14 = -1LL;
  v15 = -1LL;
  TombstonePath = CBackupLocationManager::GetTombstonePath(this, &v13);
  v7 = TombstonePath;
  if ( TombstonePath >= 0 )
  {
    StringCchCopyW(pszPatha, 260LL, v13);
    FileNameW = PathFindFileNameW(pszPath);
    v11 = PathCchAppend(pszPatha, 0x104uLL, FileNameW);
    v7 = v11;
    if ( v11 >= 0 )
    {
      if ( PathYetAnotherMakeUniqueName(pszPatha, pszPatha, 0LL, 0LL) )
      {
        StringCchCopyW(a3, 261LL, pszPatha);
        v7 = 0;
        goto LABEL_9;
      }
      v7 = -2147467259;
      v9 = 3070LL;
      v8 = 2147500037LL;
    }
    else
    {
      v8 = (unsigned int)v11;
      v9 = 3068LL;
    }
  }
  else
  {
    v8 = (unsigned int)TombstonePath;
    v9 = 3065LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)v8);
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
  return v7;
}
