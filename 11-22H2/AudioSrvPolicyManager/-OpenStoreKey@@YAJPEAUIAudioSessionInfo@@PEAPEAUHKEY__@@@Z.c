/*
 * XREFs of ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x18003F72C
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18003E678 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015A88 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016084 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18003D904 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x18003E08C (-GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z.c)
 */

__int64 __fastcall OpenStoreKey(struct IAudioSessionInfo *a1, HKEY *a2)
{
  RPC_STATUS v4; // eax
  unsigned __int16 *v5; // r8
  unsigned int v6; // ebx
  bool v7; // sf
  int PropKeyPath; // eax
  int v10; // edi
  int v11; // esi
  bool v12; // sf
  unsigned int v13; // esi
  __int64 v14; // rdx
  int LowRightsRegistryKey; // eax
  HKEY phkResult[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR SubKey[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

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
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
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
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)PropKeyPath);
LABEL_11:
    if ( !v6 )
      RpcRevertToSelf();
    return (unsigned int)v10;
  }
  phkResult[0] = 0LL;
  v11 = 131103;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    phkResult,
    0LL);
  v10 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, phkResult);
  if ( v10 == 5 )
  {
    v11 = 131097;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      phkResult,
      0LL);
    v10 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x20019u, phkResult);
  }
  v12 = v10 < 0;
  if ( v10 > 0 )
  {
    v10 = (unsigned __int16)v10 | 0x80070000;
    v12 = v10 < 0;
  }
  if ( v12 )
  {
    v13 = -2147024894;
    if ( v10 == -2147024894 )
    {
LABEL_20:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(phkResult);
      if ( !v6 )
        RpcRevertToSelf();
      return v13;
    }
    v14 = 230LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v10);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(phkResult);
    goto LABEL_11;
  }
  LowRightsRegistryKey = CreateLowRightsRegistryKey(phkResult[0], L"Audio\\PolicyConfig\\PropertyStore", v11, a2);
  v10 = LowRightsRegistryKey;
  if ( LowRightsRegistryKey < 0 )
  {
    v13 = -2147024891;
    if ( LowRightsRegistryKey == -2147024891 )
      goto LABEL_20;
    v14 = 232LL;
    goto LABEL_24;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(phkResult);
  if ( !v6 )
    RpcRevertToSelf();
  return 0LL;
}
