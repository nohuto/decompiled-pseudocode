/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18003D904
 * Callers:
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x18003D570 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18003F0E4 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x18003F72C (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D380 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001044C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015A88 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016084 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180045290 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180046068 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18004659C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180046690 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateLowRightsRegistryKey(HKEY a1, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  unsigned int LastError; // ebx
  unsigned int v10; // r8d
  unsigned __int16 *v11; // r9
  int v12; // eax
  signed int v13; // edi
  const char *v14; // r9
  int v15; // eax
  HKEY v16; // rax
  unsigned int v18; // [rsp+28h] [rbp-29h]
  unsigned int *v19; // [rsp+48h] [rbp-9h]
  HKEY Handle; // [rsp+58h] [rbp+7h] BYREF
  PSID Sid[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v22; // [rsp+70h] [rbp+1Fh]
  struct _SECURITY_ATTRIBUTES v23; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  memset(&v23, 0, sizeof(v23));
  v23.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(a1, &v23.lpSecurityDescriptor);
  LastError = v8;
  if ( v8 >= 0 )
  {
    Sid[1] = &v23;
    v22 = 1;
    Handle = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &Handle,
      0LL);
    v12 = SafeRegCreateKeyEx(a1, a2, v10, v11, v18, a3 | ((a3 & 0x20006) != 0 ? 655360 : 0x20000), &v23, &Handle, v19);
    v13 = v12;
    if ( v12 > 0 )
      v13 = (unsigned __int16)v12 | 0x80070000;
    if ( v13 >= 0 )
    {
      Sid[0] = 0LL;
      if ( ConvertStringSidToSidW(L"LW", Sid) )
      {
        if ( (int)SetRegistryKeyIntegrityLevel(Handle, Sid[0]) >= 0
          || (v15 = SetRegistryHandleIntegrityLevel(Handle, Sid[0]), LastError = v15, v15 >= 0) )
        {
          v16 = Handle;
          Handle = 0LL;
          *a4 = v16;
          LocalFree(Sid[0]);
          LastError = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA5,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)(unsigned int)v15);
          LocalFree(Sid[0]);
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x9C,
                      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                      v14);
      }
    }
    else
    {
      LastError = -2147024891;
      if ( v13 != -2147024891 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x98,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v13);
        LastError = v13;
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&Handle);
    operator delete(v23.lpSecurityDescriptor);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v8);
  }
  return LastError;
}
