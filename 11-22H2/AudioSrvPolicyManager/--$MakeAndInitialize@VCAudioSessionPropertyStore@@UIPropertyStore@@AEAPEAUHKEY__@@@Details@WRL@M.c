/*
 * XREFs of ??$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUHKEY__@@@Z @ 0x18003CCF8
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18003E678 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015A88 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015FAC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003CB5C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UI.c)
 *     ??0CAudioSessionPropertyStore@@QEAA@XZ @ 0x18003CDD4 (--0CAudioSessionPropertyStore@@QEAA@XZ.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x18003E79C (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003FAF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionPropertyStore,IPropertyStore,HKEY__ * &>(
        _QWORD *a1,
        HKEY *a2)
{
  void *v4; // rax
  unsigned int v5; // edi
  CAudioSessionPropertyStore *v6; // rax
  HKEY v7; // rdx
  CAudioSessionPropertyStore *v8; // rbx
  int PropertyStore; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  if ( v4 )
  {
    v6 = CAudioSessionPropertyStore::CAudioSessionPropertyStore((CAudioSessionPropertyStore *)v4);
    v7 = *a2;
    v8 = v6;
    v12 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      (HKEY *)v6 + 7,
      v7);
    PropertyStore = CAudioSessionPropertyStore::LoadPropertyStore(v8);
    v5 = PropertyStore;
    if ( PropertyStore >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>>(
             (__int64)v8,
             &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
             a1);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)PropertyStore);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::Release(v8);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v12);
  return v5;
}
