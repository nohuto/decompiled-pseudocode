/*
 * XREFs of ??R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ @ 0x18079A5B8
 * Callers:
 *     ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x18079AEB0 (-IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z @ 0x18079AE04 (-GetSyncRootManagerRegistryLocation@SyncRootHelpers@Internal@Windows@@YAJPEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_::operator()(bool **a1, const unsigned __int16 **a2)
{
  int SyncRootManagerRegistryLocation; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  DWORD cSubKeys; // [rsp+88h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+90h] [rbp+18h] BYREF
  LPCWSTR lpSubKey; // [rsp+98h] [rbp+20h] BYREF

  SyncRootManagerRegistryLocation = Windows::Internal::SyncRootHelpers::GetSyncRootManagerRegistryLocation(
                                      (Windows::Internal::SyncRootHelpers *)&lpSubKey,
                                      a2);
  v4 = SyncRootManagerRegistryLocation;
  if ( SyncRootManagerRegistryLocation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
      (const char *)(unsigned int)SyncRootManagerRegistryLocation);
    return v4;
  }
  hKey = 0LL;
  v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, 0x20119u, &hKey);
  if ( v5 )
  {
    v6 = 62LL;
LABEL_7:
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           v6,
           (__int64)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
           (const char *)v5);
    goto LABEL_9;
  }
  cSubKeys = 0;
  v5 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( v5 )
  {
    v6 = 66LL;
    goto LABEL_7;
  }
  **a1 = cSubKeys != 0;
  v4 = 0;
LABEL_9:
  if ( hKey )
    RegCloseKey(hKey);
  return v4;
}
