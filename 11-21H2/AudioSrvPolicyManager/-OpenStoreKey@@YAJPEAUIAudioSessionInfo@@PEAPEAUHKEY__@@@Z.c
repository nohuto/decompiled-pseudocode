/*
 * XREFs of ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x180036CFC
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180034ED0 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800340B4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x18003495C (-GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OpenStoreKey(struct IAudioSessionInfo *a1, HKEY *a2)
{
  RPC_STATUS v4; // eax
  void *v5; // r8
  unsigned int v6; // edi
  bool v7; // sf
  int PropKeyPath; // eax
  int v10; // ebx
  int v11; // r14d
  HKEY v12; // rsi
  DWORD LastError; // ebx
  bool v14; // sf
  unsigned int v15; // esi
  HKEY v16; // rcx
  HKEY v17; // rcx
  int LowRightsRegistryKey; // eax
  HKEY hKey[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR SubKey[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  v4 = RpcImpersonateClient(0LL);
  v6 = v4;
  if ( v4 && v4 != 1725 && v4 != 1765 )
  {
    v7 = v4 < 0;
    if ( v4 > 0 )
    {
      v6 = (unsigned __int16)v4 | 0x80070000;
      v7 = 1;
    }
    if ( v7 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)v6);
    return v6;
  }
  PropKeyPath = GetPropKeyPath(a1, SubKey, v5);
  v10 = PropKeyPath;
  if ( PropKeyPath < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)PropKeyPath);
LABEL_11:
    if ( !v6 )
      RpcRevertToSelf();
    return (unsigned int)v10;
  }
  v11 = 131103;
  hKey[0] = 0LL;
  v10 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, hKey);
  if ( v10 == 5 )
  {
    v11 = 131097;
    v12 = hKey[0];
    if ( hKey[0] )
    {
      LastError = GetLastError();
      RegCloseKey(v12);
      SetLastError(LastError);
    }
    hKey[0] = 0LL;
    v10 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x20019u, hKey);
  }
  v14 = v10 < 0;
  if ( v10 > 0 )
  {
    v10 = (unsigned __int16)v10 | 0x80070000;
    v14 = v10 < 0;
  }
  if ( v14 )
  {
    v15 = -2147024894;
    if ( v10 == -2147024894 )
    {
      v16 = hKey[0];
      if ( !hKey[0] )
      {
LABEL_24:
        if ( !v6 )
          RpcRevertToSelf();
        return v15;
      }
LABEL_23:
      RegCloseKey(v16);
      goto LABEL_24;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v10);
    v17 = hKey[0];
    if ( !hKey[0] )
      goto LABEL_11;
    goto LABEL_28;
  }
  LowRightsRegistryKey = CreateLowRightsRegistryKey(hKey[0], L"Audio\\PolicyConfig\\PropertyStore", v11, a2);
  v10 = LowRightsRegistryKey;
  if ( LowRightsRegistryKey < 0 )
  {
    v15 = -2147024891;
    if ( LowRightsRegistryKey == -2147024891 )
    {
      v16 = hKey[0];
      if ( !hKey[0] )
        goto LABEL_24;
      goto LABEL_23;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)LowRightsRegistryKey);
    v17 = hKey[0];
    if ( !hKey[0] )
      goto LABEL_11;
LABEL_28:
    RegCloseKey(v17);
    goto LABEL_11;
  }
  if ( hKey[0] )
    RegCloseKey(hKey[0]);
  if ( !v6 )
    RpcRevertToSelf();
  return 0LL;
}
