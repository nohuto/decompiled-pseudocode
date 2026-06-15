/*
 * XREFs of ?OpenAudioSystemEffectsPropertyStoreRegKey@EffectPack@@QEAAJIKPEAPEAUHKEY__@@@Z @ 0x180154FBC
 * Callers:
 *     ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x18014B70C (-CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180036070 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF09C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D8670 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180148410 (-GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall EffectPack::OpenAudioSystemEffectsPropertyStoreRegKey(
        EffectPack *this,
        int a2,
        __int64 a3,
        HKEY *a4)
{
  __int64 v5; // rcx
  int EffectPackDevNodeRegistryRoot; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int *v11; // rax
  unsigned int v12; // eax
  HKEY v14; // rax
  HKEY v15; // rcx
  HKEY phkResult; // [rsp+80h] [rbp-80h] BYREF
  HKEY hKey; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SubKey[128]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  *a4 = 0LL;
  v5 = *((_QWORD *)this + 159);
  hKey = 0LL;
  EffectPackDevNodeRegistryRoot = GetEffectPackDevNodeRegistryRoot((DEVINSTID_W)(v5 + 544), &hKey);
  v9 = EffectPackDevNodeRegistryRoot;
  if ( EffectPackDevNodeRegistryRoot < 0 )
  {
    v10 = 310LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)(unsigned int)EffectPackDevNodeRegistryRoot);
LABEL_9:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
    return v9;
  }
  v11 = (unsigned int *)*((_QWORD *)this + 159);
  EffectPackDevNodeRegistryRoot = StringCchPrintfW(
                                    SubKey,
                                    128LL,
                                    L"EffectPackRegistration\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\FxProperties\\FX\\%d",
                                    *v11,
                                    *((unsigned __int16 *)v11 + 2),
                                    *((unsigned __int16 *)v11 + 3),
                                    *((unsigned __int8 *)v11 + 8),
                                    *((unsigned __int8 *)v11 + 9),
                                    *((unsigned __int8 *)v11 + 10),
                                    *((unsigned __int8 *)v11 + 11),
                                    *((unsigned __int8 *)v11 + 12),
                                    *((unsigned __int8 *)v11 + 13),
                                    *((unsigned __int8 *)v11 + 14),
                                    *((unsigned __int8 *)v11 + 15),
                                    a2);
  v9 = EffectPackDevNodeRegistryRoot;
  if ( EffectPackDevNodeRegistryRoot < 0 )
  {
    v10 = 317LL;
    goto LABEL_5;
  }
  phkResult = 0LL;
  v12 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &phkResult);
  if ( v12 == 2 )
  {
    v15 = phkResult;
  }
  else
  {
    if ( v12 )
    {
      v9 = wil::details::in1diag3::Return_Win32(
             retaddr,
             328LL,
             (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
             (const char *)v12);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkResult);
      goto LABEL_9;
    }
    v14 = phkResult;
    v15 = 0LL;
    phkResult = 0LL;
    *a4 = v14;
  }
  if ( v15 )
    RegCloseKey(v15);
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
