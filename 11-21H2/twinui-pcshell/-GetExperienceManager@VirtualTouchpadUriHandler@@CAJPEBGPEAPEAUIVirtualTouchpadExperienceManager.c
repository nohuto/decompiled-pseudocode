/*
 * XREFs of ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804491B4
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180448F70 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CopyTo@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE1DC (-CopyTo@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetExperienceManager(
        const unsigned __int16 *a1,
        struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager **a2)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, void *, GUID *, __int64 *); // rsi
  __int64 *v7; // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rsi
  __int64 **v11; // rax
  __int64 *AddressOf; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-19h] BYREF
  __int64 v19; // [rsp+38h] [rbp-11h] BYREF
  __int64 v20; // [rsp+40h] [rbp-9h] BYREF
  __int64 v21; // [rsp+48h] [rbp-1h] BYREF
  const WCHAR *v22; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v23[32]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *a2 = 0LL;
  v20 = 0LL;
  v22 = L"Windows.Internal.ShellExperience.VirtualTouchpad";
  ppv = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v20, &v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppv);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v4 = Instance;
  if ( Instance >= 0 )
  {
    v5 = v20;
    v19 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v20 + 24LL);
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v21);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
    v8 = v6(v5, &unk_1806E4D48, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, v7);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v8);
LABEL_12:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      goto LABEL_13;
    }
    v9 = v19;
    v18 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 48LL);
    v11 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &v21);
    AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v11);
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, &v22, v13);
    v15 = v10(v9, *(_QWORD *)(v14 + 24), AddressOf);
    v4 = v15;
    if ( v15 >= 0 )
    {
      v15 = Microsoft::WRL::ComPtr<IInspectable>::CopyTo(&v18);
      v4 = v15;
      if ( v15 >= 0 )
      {
        v4 = 0;
        goto LABEL_11;
      }
      v16 = 99LL;
    }
    else
    {
      v16 = 98LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)(unsigned int)v15);
LABEL_11:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)Instance);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  return v4;
}
