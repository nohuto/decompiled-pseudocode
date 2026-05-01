/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180028AE4
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800E8B80 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EBCDC (--$As@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180124EC0 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18017A0E0 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802EA04C (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802EA304 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *); // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  CTaskWindowFinder *v9; // rbx
  __int64 v10; // rcx
  int First; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, GUID *, __int64 *); // rdi
  PVOID Ptr; // rdi
  int (__fastcall *v15)(PVOID, __int64, __int64); // rbx
  __int64 AddressOf; // rax
  int (__fastcall *v17)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *); // rbx
  unsigned int v18; // esi
  __int64 v19; // r8
  void (__fastcall *v20)(char *, GUID *, IUnknown **); // rbx
  CTaskWindowFinder *v21; // rbx
  __int64 v22; // rdx
  bool v23; // bl
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  int v27; // [rsp+20h] [rbp-69h]
  INT32 result; // [rsp+30h] [rbp-59h] BYREF
  __int64 v29; // [rsp+38h] [rbp-51h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-41h] BYREF
  IUnknown *punk; // [rsp+50h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+58h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-29h] BYREF
  __int64 v35; // [rsp+68h] [rbp-21h] BYREF
  int v36; // [rsp+70h] [rbp-19h]
  __int64 v37; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v38[8]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v39[16]; // [rsp+88h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+Fh] BYREF
  HSTRING string2; // [rsp+B0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v36 = 0;
  string1 = 0LL;
  v6 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string1 = 0LL;
  if ( v6(a3, &string1) < 0 )
    goto LABEL_26;
  string2 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"BackVisible", 0xCu, 0xBu);
  if ( WindowsCompareStringOrdinal(string1, string2, &result) >= 0 && !result )
  {
    string2 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
    v21 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v38, a2);
    hstringHeader.Reserved.Reserved1 = *(PVOID *)v21;
    v22 = *((_QWORD *)v21 + 1);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    hstringHeader.Reserved.Reserved2[16] = *((_BYTE *)v21 + 16);
    LODWORD(string2) = 0;
    v23 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                 this,
                 &hstringHeader,
                 &v29,
                 0LL) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v39);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 208LL))(v29);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    goto LABEL_25;
  }
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18061C740);
  if ( WindowsCompareStringOrdinal(string1, *(HSTRING *)(v7 + 24), &result) >= 0 && !result )
  {
    v24 = CApplicationManager::_HandleUniversalFrameChangeRequest(this, a2);
    v25 = retaddr;
    if ( v24 >= 0 )
      goto LABEL_26;
    v26 = 6508LL;
LABEL_36:
    wil::details::in1diag3::_Log_Hr(
      v25,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v24,
      v27);
    goto LABEL_26;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_18061C738);
  if ( WindowsCompareStringOrdinal(string1, *(HSTRING *)(v8 + 24), &result) >= 0 && !result )
  {
    v24 = CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest(this, a2);
    v25 = retaddr;
    if ( v24 >= 0 )
      goto LABEL_26;
    v26 = 6512LL;
    goto LABEL_36;
  }
  string2 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameworkViewType", 0x12u, 0x11u);
  if ( WindowsCompareStringOrdinal(string1, string2, &result) >= 0 && !result )
  {
    string2 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
    v9 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v38, a2);
    hstringHeader.Reserved.Reserved1 = *(PVOID *)v9;
    v10 = *((_QWORD *)v9 + 1);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    hstringHeader.Reserved.Reserved2[16] = *((_BYTE *)v9 + 16);
    LODWORD(string2) = 0;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &hstringHeader, &v29, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v39);
    v35 = 0LL;
    if ( First >= 0 )
    {
      v12 = v29;
      v13 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v29 + 352LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
      First = v13(v12, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v35);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( First >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v35 + 48LL))(
           v35,
           a2) )
    {
      v37 = 0LL;
      Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(&v29, &v37);
      v34 = 0LL;
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v15 = *(int (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)Ptr + 56LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v34);
      if ( v15(Ptr, v37, AddressOf) >= 0 )
      {
        v31 = 0;
        v17 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *))(*(_QWORD *)a2 + 368LL);
        string2 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameworkViewType", 0x12u, 0x11u);
        if ( v17(a2, string2, &v31) >= 0 )
        {
          v18 = v31;
          if ( v31 )
          {
            v19 = 0LL;
            if ( v31 == 1 )
              v19 = 64LL;
          }
          else
          {
            v19 = 32LL;
          }
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v34 + 464LL))(v34, 96LL, v19);
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
          punk = 0LL;
          v36 = 32;
          v20 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          v20((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
          LODWORD(v20) = IUnknown_QueryService(
                           punk,
                           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                           &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
                           &ppvOut);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          if ( (int)v20 >= 0 )
            (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v34, v18);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
        }
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
LABEL_25:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
  }
LABEL_26:
  WindowsDeleteString(string1);
}
