/*
 * XREFs of ??$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyClientRegistration@@$$QEAPEAUIMessageProxy@@AEA_NAEAU_GUID@@@Z @ 0x1801D01DC
 * Callers:
 *     ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801D45A0 (-RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180039650 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@HotkeyClientRegistration@@QEAAJPEAUIMessageProxy@@_NU_GUID@@@Z @ 0x1801D4CB4 (-RuntimeClassInitialize@HotkeyClientRegistration@@QEAAJPEAUIMessageProxy@@_NU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyClientRegistration,HotkeyClientRegistration,IMessageProxy *,bool &,_GUID &>(
        HotkeyClientRegistration **a1,
        struct IMessageProxy **a2,
        bool *a3,
        struct _GUID *a4)
{
  HotkeyClientRegistration *v8; // rax
  HotkeyClientRegistration *v9; // rbx
  HotkeyClientRegistration *v10; // rdi
  int v11; // esi
  struct _GUID v13; // [rsp+30h] [rbp-28h] BYREF
  HotkeyClientRegistration *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (HotkeyClientRegistration *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v10 = v8;
  v14 = v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v8);
    *(_QWORD *)v9 = &HotkeyClientRegistration::`vftable';
    *((_QWORD *)v9 + 3) = 0LL;
    *((_DWORD *)v9 + 8) = 0;
    *((_BYTE *)v9 + 80) = 0;
    *(GUID *)((char *)v9 + 84) = GUID_NULL;
    *((_QWORD *)v9 + 13) = 0LL;
    v14 = v10;
    v13 = *a4;
    v11 = HotkeyClientRegistration::RuntimeClassInitialize(v10, *a2, *a3, &v13);
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v14);
      *a1 = v10;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
