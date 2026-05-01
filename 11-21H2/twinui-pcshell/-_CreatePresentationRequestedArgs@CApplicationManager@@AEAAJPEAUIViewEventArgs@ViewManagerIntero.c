/*
 * XREFs of ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x18002ECFC
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800E8B80 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EBCDC (--$As@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180124EC0 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18017A0E0 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x1802DD460 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E6D20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmB_ea_1802E6D20.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CApplicationManager::_CreatePresentationRequestedArgs(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a2,
        struct IPresentationRequestedArgs **a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **); // rdi
  int v9; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v10; // rbx
  const char *v11; // r9
  __int64 result; // rax
  int (__fastcall *v13)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  CTaskWindowFinder *v14; // rbx
  __int64 v15; // rcx
  int First; // ebx
  int v17; // eax
  PVOID Ptr; // rdi
  __int64 (__fastcall *v19)(PVOID, _QWORD, __int64); // rbx
  __int64 AddressOf; // rax
  int v21; // eax
  _QWORD *v22; // rax
  struct IPresentationRequestedArgs *v23; // rbx
  int v24[2]; // [rsp+20h] [rbp-88h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v25; // [rsp+28h] [rbp-80h] BYREF
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v27; // [rsp+38h] [rbp-70h] BYREF
  __int64 v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  char v31; // [rsp+58h] [rbp-50h]
  int v32; // [rsp+60h] [rbp-48h]
  _BYTE v33[8]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v34[56]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v36; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+20h] BYREF

  try
  {
    *a3 = 0LL;
    v37 = 0LL;
    v36 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = **(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
    LOBYTE(v6) = v6(a2, &GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684, &v37) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    if ( !(_BYTE)v6 )
      goto LABEL_8;
    v36 = 0LL;
    v7 = v37;
    v8 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **))(*(_QWORD *)v37 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v36);
    v9 = v8(v7, &v36);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2152,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v9,
        v24[0]);
    v10 = v36;
    if ( !v36 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v36);
LABEL_8:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
      return 2147943568LL;
    }
    v25 = 0LL;
    v26 = 0LL;
    v13 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v36 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    if ( v13(v10, &v25) >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v38 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
      v14 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v33, v25);
      v29 = *(_QWORD *)v14;
      v15 = *((_QWORD *)v14 + 1);
      v30 = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v31 = *((_BYTE *)v14 + 16);
      v32 = 0;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v29, &v38, 0LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v34);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( First < 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v36);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
        return (unsigned int)First;
      }
      *(_QWORD *)v24 = 0LL;
      v17 = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(&v38, v24);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2162,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v17,
          v24[0]);
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v19 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)Ptr + 56LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v26);
      v21 = v19(Ptr, *(_QWORD *)v24, AddressOf);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2163,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v21,
          v24[0]);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
    }
    *(_QWORD *)v24 = 0LL;
    v28 = v26;
    v27 = v36;
    v22 = (_QWORD *)wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
                      &v38,
                      &v27,
                      &v28);
    v23 = (struct IPresentationRequestedArgs *)((*v22 + 16LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v22 >> 64));
    *v22 = 0LL;
    v27 = 0LL;
    *(_QWORD *)v24 = v23;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v27);
    if ( v38 )
    {
      v38 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release();
    }
    if ( v23 )
      (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)v23 + 8LL))(v23);
    *a3 = v23;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v24);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v36);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v36) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2171,
                     (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     v11);
    return (unsigned int)v36;
  }
  return result;
}
