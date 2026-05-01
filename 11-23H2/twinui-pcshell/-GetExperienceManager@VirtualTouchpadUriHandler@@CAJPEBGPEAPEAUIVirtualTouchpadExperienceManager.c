/*
 * XREFs of ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804FF004
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x1804FEDB0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?CopyTo@?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801177C8 (-CopyTo@-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v10)(__int64, PVOID, __int64 *); // rsi
  __int64 *v11; // rdi
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // [rsp+30h] [rbp-19h] BYREF
  __int64 v18; // [rsp+38h] [rbp-11h] BYREF
  __int64 v19; // [rsp+40h] [rbp-9h] BYREF
  __int64 v20; // [rsp+48h] [rbp-1h] BYREF
  const WCHAR *v21; // [rsp+50h] [rbp+7h] BYREF
  HSTRING_HEADER v22; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *a2 = 0LL;
  v19 = 0LL;
  v21 = L"Windows.Internal.ShellExperience.VirtualTouchpad";
  ppv = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v20);
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
    v5 = v19;
    v18 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v19 + 24LL);
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &v20);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
    v8 = v6(v5, &unk_180896320, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, v7);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v8);
LABEL_12:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      goto LABEL_13;
    }
    v9 = v18;
    v17 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v18 + 48LL);
    v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v17, &v20);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v21, v12);
    v14 = v10(v9, v13[1].Reserved.Reserved1, v11);
    v4 = v14;
    if ( v14 >= 0 )
    {
      v14 = Microsoft::WRL::ComPtr<IObjectCollection>::CopyTo(&v17);
      v4 = v14;
      if ( v14 >= 0 )
      {
        v4 = 0;
        goto LABEL_11;
      }
      v15 = 99LL;
    }
    else
    {
      v15 = 98LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)(unsigned int)v14);
LABEL_11:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)Instance);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  return v4;
}
