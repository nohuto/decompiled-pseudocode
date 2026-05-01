/*
 * XREFs of ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180073EB0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800E8B80 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EBCDC (--$As@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@_KPEA_K@Z @ 0x180124F58 (--$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@-$CActivationBasedCollection@V-$ComPtr@UIIm.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180157750 (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CApplicationManager::_HandleViewNavigationRequested(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *a4)
{
  __int64 v8; // r8
  int App; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  PVOID Ptr; // rdi
  int (__fastcall *v12)(PVOID, __int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  void (__fastcall *v14)(char *, GUID *, IUnknown **); // rbx
  void (__fastcall *v15)(char *, GUID *, IUnknown **); // rbx
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  int (__fastcall *v20)(__int64, LPCWSTR *); // rdi
  struct Windows::Foundation::Collections::IPropertySet *v21; // r8
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-39h]
  IUnknown *punk; // [rsp+30h] [rbp-29h] BYREF
  void *v26; // [rsp+38h] [rbp-21h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  __int64 v28; // [rsp+48h] [rbp-11h] BYREF
  __int64 v29; // [rsp+50h] [rbp-9h] BYREF
  LPCWSTR psz; // [rsp+58h] [rbp-1h] BYREF
  __int64 v31; // [rsp+60h] [rbp+7h] BYREF
  __int64 v32; // [rsp+68h] [rbp+Fh]
  __int64 v33; // [rsp+70h] [rbp+17h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v34; // [rsp+78h] [rbp+1Fh] BYREF
  char v35; // [rsp+80h] [rbp+27h]
  int v36; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v38; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+6Fh] BYREF

  LODWORD(v38) = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v39 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v39);
  psz = 0LL;
  v31 = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v31);
  LOBYTE(v32) = 0;
  v33 = 0LL;
  v34 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v35 = 0;
  v36 = 0;
  v39 = 0LL;
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByTaskWindow>(
          (char *)this + 624,
          &v33,
          v8,
          &v38);
  if ( App >= 0 )
  {
    v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8 * v38);
    App = (**v10)(v10, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v39);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( App >= 0 )
  {
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(&v39, &v29);
    v28 = 0LL;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v12 = *(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v28);
    if ( v12(Ptr, v29, AddressOf) >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      punk = 0LL;
      LODWORD(v38) = 2;
      v14 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
      v14((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
      LODWORD(v14) = IUnknown_QueryService(
                       punk,
                       &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                       &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
                       &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
      if ( (int)v14 >= 0
        && (*(int (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 40LL))(
             ppvOut,
             v28,
             a3) >= 0 )
      {
        v26 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
        punk = 0LL;
        LODWORD(v38) = 9;
        v15 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        v15((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
        LODWORD(v15) = IUnknown_QueryService(
                         punk,
                         &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                         &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                         &v26);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        if ( (int)v15 >= 0 )
        {
          LODWORD(v38) = 0;
          if ( (*(int (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *, __int64 *))(*(_QWORD *)v26 + 80LL))(
                 v26,
                 v28,
                 a3,
                 &v38) >= 0 )
          {
            if ( (_DWORD)v38 )
            {
              LOBYTE(v16) = 1;
              v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, __int64))(*(_QWORD *)a4 + 72LL))(
                      a4,
                      v16);
              if ( v23 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1800,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v23,
                  v24);
            }
          }
        }
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 640LL))(v39);
        v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, _QWORD))(*(_QWORD *)a4 + 56LL))(
                a4,
                v17);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1806,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v18,
            v24);
        psz = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        v19 = v29;
        v20 = *(int (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v29 + 32LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&psz);
        v31 = -1LL;
        v32 = -1LL;
        if ( v20(v19, &psz) >= 0 )
        {
          v22 = AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(psz, (const unsigned __int16 *)a3, v21);
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1810,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v22,
              v24);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&psz);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v39);
}
