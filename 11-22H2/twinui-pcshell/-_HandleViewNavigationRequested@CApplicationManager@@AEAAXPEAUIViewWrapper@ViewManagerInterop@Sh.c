/*
 * XREFs of ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18000F584
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000F0C0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000D5C0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000F918 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000FB04 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180010098 (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CApplicationManager::_HandleViewNavigationRequested(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *a4)
{
  CTaskWindowFinder *v8; // rbx
  PVOID Ptr; // rdi
  int (__fastcall *v10)(PVOID, __int64, __int64 *); // rbx
  void (__fastcall *v11)(char *, GUID *, IUnknown **); // rbx
  void (__fastcall *v12)(char *, GUID *, IUnknown **); // rbx
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, LPCWSTR *); // rdi
  struct Windows::Foundation::Collections::IPropertySet *v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+28h] [rbp-39h]
  int v22; // [rsp+38h] [rbp-29h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-21h] BYREF
  __int64 v24; // [rsp+48h] [rbp-19h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64); // [rsp+50h] [rbp-11h] BYREF
  void *v26; // [rsp+58h] [rbp-9h] BYREF
  void *ppvOut; // [rsp+60h] [rbp-1h] BYREF
  __int64 v28; // [rsp+68h] [rbp+7h] BYREF
  LPCWSTR psz; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+78h] [rbp+17h] BYREF
  __int64 v31; // [rsp+80h] [rbp+1Fh]
  __int64 v32; // [rsp+88h] [rbp+27h] BYREF
  __int64 v33; // [rsp+90h] [rbp+2Fh] BYREF
  char v34; // [rsp+98h] [rbp+37h]
  int v35; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v22 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  v8 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)&psz, a2);
  v32 = *(_QWORD *)v8;
  v33 = *((_QWORD *)v8 + 1);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
  v34 = *((_BYTE *)v8 + 16);
  v35 = 0;
  LODWORD(v8) = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v32, &v25, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (int)v8 >= 0 )
  {
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v25, (__int64)&v28);
    v24 = 0LL;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v10 = *(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
    if ( v10(Ptr, v28, &v24) >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
      punk = 0LL;
      v22 = 2;
      v11 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
      v11((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
      LODWORD(v11) = IUnknown_QueryService(
                       punk,
                       &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                       &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1,
                       &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
      if ( (int)v11 >= 0
        && (*(int (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 40LL))(
             ppvOut,
             v24,
             a3) >= 0 )
      {
        v26 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
        punk = 0LL;
        v22 = 9;
        v12 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        v12((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
        LODWORD(v12) = IUnknown_QueryService(
                         punk,
                         &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                         &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                         &v26);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        if ( (int)v12 >= 0 )
        {
          v22 = 0;
          if ( (*(int (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *, int *))(*(_QWORD *)v26 + 80LL))(
                 v26,
                 v24,
                 a3,
                 &v22) >= 0 )
          {
            if ( v22 )
            {
              LOBYTE(v13) = 1;
              v20 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, __int64))(*(_QWORD *)a4 + 72LL))(
                      a4,
                      v13);
              if ( v20 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x17BA,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v20,
                  v21);
            }
          }
        }
        v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v25)[80])(v25);
        v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, _QWORD))(*(_QWORD *)a4 + 56LL))(
                a4,
                v14);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x17C0,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v15,
            v21);
        psz = 0LL;
        v30 = 0LL;
        v31 = 0LL;
        v16 = v28;
        v17 = *(int (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v28 + 32LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&psz);
        v30 = -1LL;
        v31 = -1LL;
        if ( v17(v16, &psz) >= 0 )
        {
          v19 = AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(psz, (const unsigned __int16 *)a3, v18);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x17CA,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v19,
              v21);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&psz);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
}
