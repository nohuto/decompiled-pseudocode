/*
 * XREFs of ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180034ED0
 * Callers:
 *     ?TryGetAudioSessionPropertyStore@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18000D8A0 (-TryGetAudioSessionPropertyStore@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAPEAUIProp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x1800351A4 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180036274 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x180036CFC (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800370D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectab.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LoadPropertyStore(struct IAudioSessionInfo *a1, struct IPropertyStore **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HKEY v6; // rcx
  HKEY v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  HKEY v14; // rdi
  unsigned int Interface; // esi
  HKEY v16; // rbp
  DWORD LastError; // esi
  int PropertyStore; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+18h] BYREF
  HKEY v21; // [rsp+68h] [rbp+20h] BYREF

  hKey = 0LL;
  v4 = OpenStoreKey(a1, &hKey);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -2147024894 || v4 == -2147024891 )
    {
      v6 = hKey;
      if ( hKey )
LABEL_7:
        RegCloseKey(v6);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41D,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v4);
      v6 = hKey;
      if ( hKey )
        goto LABEL_7;
    }
    return v5;
  }
  v21 = 0LL;
  v8 = hKey;
  v9 = OpenSessionKey(a1, hKey, &v21);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x421,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v9);
    if ( v21 )
      RegCloseKey(v21);
    if ( v8 )
      RegCloseKey(v8);
    return v10;
  }
  v11 = 2LL;
  do
  {
    *a2 = 0LL;
    --v11;
  }
  while ( v11 );
  v12 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  v14 = v21;
  if ( !v12 )
  {
    Interface = -2147024882;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x407,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)Interface);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x423,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)Interface);
    if ( v14 )
      RegCloseKey(v14);
    if ( v8 )
      RegCloseKey(v8);
    return Interface;
  }
  v12[4] = 1LL;
  *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPropertyStore>::`vftable';
  v12[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPropertyStore>::`vftable'{for `IWeakReferenceSource'};
  v12[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPropertyStore>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPropertyStore>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v13 = &CAudioSessionPropertyStore::`vftable';
  v13[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPropertyStore>::`vftable'{for `IWeakReferenceSource'};
  v13[2] = &CAudioSessionPropertyStore::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPropertyStore>'};
  v13[5] = 0LL;
  v13[6] = 0LL;
  v13[7] = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v13 + 8), 0, 0);
  *((_BYTE *)v13 + 104) = 0;
  v16 = (HKEY)v13[7];
  if ( v16 )
  {
    LastError = GetLastError();
    RegCloseKey(v16);
    SetLastError(LastError);
  }
  v13[7] = v14;
  PropertyStore = CAudioSessionPropertyStore::LoadPropertyStore((CAudioSessionPropertyStore *)v13);
  Interface = PropertyStore;
  if ( PropertyStore >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::QueryInterface(
                  v13,
                  &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
                  a2);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F7,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)PropertyStore);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::Release(v13);
  if ( (Interface & 0x80000000) != 0 )
    goto LABEL_27;
  if ( v8 )
    RegCloseKey(v8);
  return 0LL;
}
