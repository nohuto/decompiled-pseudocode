/*
 * XREFs of ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x1803A1C00
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000F0C0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000D5C0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000F918 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000FB04 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x180394754 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18039ED10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmB_ea_18039ED10.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CApplicationManager::_CreatePresentationRequestedArgs(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a2,
        struct IPresentationRequestedArgs **a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **); // rdi
  int v9; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v10; // rbx
  int (__fastcall *v11)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  CTaskWindowFinder *v12; // rbx
  int First; // ebx
  const char *v14; // r9
  __int64 result; // rax
  int v16; // eax
  PVOID Ptr; // rdi
  __int64 (__fastcall *v18)(PVOID, _QWORD, struct IApplicationView **); // rbx
  int v19; // eax
  _QWORD *v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64); // rbx
  __int64 v22; // rcx
  int v23[2]; // [rsp+20h] [rbp-88h] BYREF
  struct IApplicationView *v24; // [rsp+28h] [rbp-80h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v25; // [rsp+30h] [rbp-78h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v26; // [rsp+38h] [rbp-70h] BYREF
  struct IApplicationView *v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h] BYREF
  __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  char v30; // [rsp+58h] [rbp-50h]
  int v31; // [rsp+60h] [rbp-48h]
  _BYTE v32[8]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v33[7]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v35; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+18h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64); // [rsp+C8h] [rbp+20h] BYREF

  try
  {
    *a3 = 0LL;
    v36 = 0LL;
    v35 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = **(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    LOBYTE(v6) = v6(a2, &GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684, &v36) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
    if ( (_BYTE)v6 )
    {
      v35 = 0LL;
      v7 = v36;
      v8 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **))(*(_QWORD *)v36 + 48LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
      v9 = v8(v7, &v35);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x20E2,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v9,
          v23[0]);
      v10 = v35;
      if ( v35 )
      {
        v25 = 0LL;
        v24 = 0LL;
        v11 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v35 + 88LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
        if ( v11(v10, &v25) >= 0 )
        {
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v37 = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
          v12 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v32, v25);
          v28 = *(_QWORD *)v12;
          v29 = *((_QWORD *)v12 + 1);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
          v30 = *((_BYTE *)v12 + 16);
          v31 = 0;
          First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                    (__int64)this,
                    (__int64)&v28,
                    &v37,
                    0LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v33);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          if ( First < 0 )
          {
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
            return (unsigned int)First;
          }
          *(_QWORD *)v23 = 0LL;
          v16 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v37, (__int64)v23);
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x20F2,
              (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v16,
              v23[0]);
          Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
          v18 = *(__int64 (__fastcall **)(PVOID, _QWORD, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
          v19 = v18(Ptr, *(_QWORD *)v23, &v24);
          if ( v19 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x20F3,
              (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v19,
              v23[0]);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
        }
        v37 = 0LL;
        v27 = v24;
        v26 = v35;
        v20 = wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
                v23,
                &v26,
                &v27);
        v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))((*v20 + 16LL) & -(__int64)(*v20 != 0LL));
        *v20 = 0LL;
        v26 = 0LL;
        v37 = v21;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
        v22 = *(_QWORD *)v23;
        if ( *(_QWORD *)v23 )
        {
          *(_QWORD *)v23 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v22);
        }
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
        *a3 = (struct IPresentationRequestedArgs *)v21;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v37);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
        return 0LL;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    result = 2147943568LL;
  }
  catch ( ... )
  {
    LODWORD(v35) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2101,
                     (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     v14);
    return (unsigned int)v35;
  }
  return result;
}
