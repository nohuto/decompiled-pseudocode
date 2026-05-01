/*
 * XREFs of ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180746B78
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1802EBAF4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_12603dae6e80c2220100b0c8836f21bd_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_12603dae6e80c2220100b0c8836f21bd_@@@Z @ 0x1800EAE38 (--$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@App.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800ECCDC (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x1802D22F2 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??$?0$0P@@StringReference@Internal@Windows@@QEAA@AEAY0P@$$CBG@Z @ 0x1807463E0 (--$-0$0P@@StringReference@Internal@Windows@@QEAA@AEAY0P@$$CBG@Z.c)
 *     ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@$$QEAPEAUIUnknown@@@Z @ 0x180746438 (--$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microso.c)
 */

__int64 __fastcall _ActivateApplicationForLaunchHelperWithWindowFactory(
        IUnknown *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  int v12; // edx
  APTTYPE v13; // ecx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 *v16; // rbx
  HRESULT Site; // eax
  const unsigned __int16 *v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  void *v21; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  HSTRING v23; // rbx
  IUnknown *punkSite; // [rsp+40h] [rbp-A1h] BYREF
  IUnknown *v26; // [rsp+48h] [rbp-99h] BYREF
  void *v27; // [rsp+50h] [rbp-91h] BYREF
  IUnknown *v28; // [rsp+58h] [rbp-89h] BYREF
  unsigned __int16 *v29; // [rsp+60h] [rbp-81h] BYREF
  __int64 v30; // [rsp+68h] [rbp-79h]
  __int64 v31; // [rsp+70h] [rbp-71h]
  __int64 v32; // [rsp+78h] [rbp-69h] BYREF
  _QWORD v33[3]; // [rsp+80h] [rbp-61h] BYREF
  _QWORD v34[4]; // [rsp+98h] [rbp-49h] BYREF
  HSTRING string[4]; // [rsp+B8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v32 = a6;
  *a8 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
  v30 = -1LL;
  v31 = -1LL;
  if ( (int)ParseAppUserModelId(a4, 0LL, &v29) >= 0 )
    a4 = v29;
  v27 = 0LL;
  Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)string, a4);
  v28 = (IUnknown *)string[0];
  if ( !a3 )
    a3 = &LocaleName;
  Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)v34, a3);
  punkSite = (IUnknown *)v34[0];
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v27);
  v33[0] = &punkSite;
  v33[1] = &v28;
  v14 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_12603dae6e80c2220100b0c8836f21bd_>(
          v13,
          v12,
          &v27,
          (__int64)v33);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v26 = 0LL;
    v16 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v26, &v28);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
    Site = IUnknown_GetSite(a1, &GUID_00000000_0000_0000_c000_000000000046, (void **)v16);
    v15 = Site;
    if ( Site < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
        (const char *)(unsigned int)Site);
LABEL_18:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
      goto LABEL_19;
    }
    if ( a6 )
    {
      punkSite = 0LL;
      v28 = v26;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punkSite);
      v19 = Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &,IUnknown *>(
              (CLaunchToMonitor **)&punkSite,
              &v32,
              &v28);
      v15 = v19;
      if ( v19 < 0 )
      {
        v20 = 54LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
          (const char *)(unsigned int)v19);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punkSite);
LABEL_17:
        IUnknown_SetSite(a1, v26);
        goto LABEL_18;
      }
      v19 = IUnknown_SetSite(a1, punkSite);
      v15 = v19;
      if ( v19 < 0 )
      {
        v20 = 55LL;
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punkSite);
    }
    v21 = v27;
    QueryInterface = a1->lpVtbl[1].QueryInterface;
    v23 = *Windows::Internal::StringReference::StringReference(string, (const unsigned __int16 (*)[15])v18);
    Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)v34, a2);
    v15 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64, HSTRING, void *, int, _DWORD *))QueryInterface)(
            a1,
            v34[0],
            a7,
            v23,
            v21,
            a5,
            a8);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
    (const char *)(unsigned int)v14);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v27);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
  return v15;
}
