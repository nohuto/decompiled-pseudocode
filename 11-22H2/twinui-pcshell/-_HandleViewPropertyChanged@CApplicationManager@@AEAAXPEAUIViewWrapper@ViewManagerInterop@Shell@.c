/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180011DA0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000F0C0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000D5C0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000F918 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000FB04 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A2F4C (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A3204 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *); // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  CTaskWindowFinder *v9; // rbx
  int First; // ebx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64); // rdi
  PVOID Ptr; // rdi
  int (__fastcall *v14)(PVOID, __int64, __int64 *); // rbx
  int (__fastcall *v15)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *); // rbx
  unsigned int v16; // esi
  __int64 v17; // r8
  void (__fastcall *v18)(char *, GUID *, IUnknown **); // rbx
  CTaskWindowFinder *v19; // rbx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-69h]
  INT32 result; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64); // [rsp+38h] [rbp-51h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-41h] BYREF
  __int64 v28; // [rsp+50h] [rbp-39h] BYREF
  IUnknown *punk; // [rsp+58h] [rbp-31h] BYREF
  void *ppvOut; // [rsp+60h] [rbp-29h] BYREF
  __int64 v31; // [rsp+68h] [rbp-21h] BYREF
  int v32; // [rsp+70h] [rbp-19h]
  __int64 v33; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v34[8]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v35[16]; // [rsp+88h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+Fh] BYREF
  HSTRING string2; // [rsp+B0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v32 = 0;
  string1 = 0LL;
  v6 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string1 = 0LL;
  if ( v6(a3, &string1) < 0 )
    goto LABEL_24;
  string2 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"BackVisible", 0xCu, 0xBu);
  if ( WindowsCompareStringOrdinal(string1, string2, &result) >= 0 && !result )
  {
    string2 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v19 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v34, a2);
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)v19;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&hstringHeader.Reserved.Reserved2[8]);
    hstringHeader.Reserved.Reserved2[16] = *((_BYTE *)v19 + 16);
    LODWORD(string2) = 0;
    LOBYTE(v19) = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                         (__int64)this,
                         (__int64)&hstringHeader,
                         &v25,
                         0LL) >= 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
    if ( (_BYTE)v19 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v25)[26])(v25);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    goto LABEL_23;
  }
  string2 = 0LL;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_18079C338);
  if ( WindowsCompareStringOrdinal(string1, *(HSTRING *)(v7 + 24), &result) >= 0 && !result )
  {
    v20 = CApplicationManager::_HandleUniversalFrameChangeRequest(this, a2);
    v21 = retaddr;
    if ( v20 >= 0 )
      goto LABEL_24;
    v22 = 6465LL;
LABEL_32:
    wil::details::in1diag3::_Log_Hr(
      v21,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v20,
      v23);
    goto LABEL_24;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18079C340);
  if ( WindowsCompareStringOrdinal(string1, *(HSTRING *)(v8 + 24), &result) >= 0 && !result )
  {
    v20 = CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest(this, a2);
    v21 = retaddr;
    if ( v20 >= 0 )
      goto LABEL_24;
    v22 = 6469LL;
    goto LABEL_32;
  }
  string2 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameworkViewType", 0x12u, 0x11u);
  if ( WindowsCompareStringOrdinal(string1, string2, &result) >= 0 && !result )
  {
    string2 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v9 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v34, a2);
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&hstringHeader.Reserved.Reserved2[8]);
    hstringHeader.Reserved.Reserved2[16] = *((_BYTE *)v9 + 16);
    LODWORD(string2) = 0;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
              (__int64)this,
              (__int64)&hstringHeader,
              &v25,
              0LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v35);
    v31 = 0LL;
    if ( First >= 0 )
    {
      v11 = v25;
      v12 = (*v25)[44];
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
      First = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), __int64, GUID *, __int64 *))v12)(
                v11,
                2LL,
                &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
                &v31);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( First >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v31 + 48LL))(
           v31,
           a2) )
    {
      v33 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v25, (__int64)&v33);
      v28 = 0LL;
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v14 = *(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
      if ( v14(Ptr, v33, &v28) >= 0 )
      {
        v27 = 0;
        v15 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *))(*(_QWORD *)a2 + 368LL);
        string2 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameworkViewType", 0x12u, 0x11u);
        if ( v15(a2, string2, &v27) >= 0 )
        {
          v16 = v27;
          if ( v27 )
          {
            v17 = 0LL;
            if ( v27 == 1 )
              v17 = 64LL;
          }
          else
          {
            v17 = 32LL;
          }
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v28 + 464LL))(v28, 96LL, v17);
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
          punk = 0LL;
          v32 = 32;
          v18 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          v18((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
          LODWORD(v18) = IUnknown_QueryService(
                           punk,
                           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                           &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
                           &ppvOut);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          if ( (int)v18 >= 0 )
            (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v28, v16);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
        }
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
LABEL_23:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  }
LABEL_24:
  WindowsDeleteString(string1);
}
