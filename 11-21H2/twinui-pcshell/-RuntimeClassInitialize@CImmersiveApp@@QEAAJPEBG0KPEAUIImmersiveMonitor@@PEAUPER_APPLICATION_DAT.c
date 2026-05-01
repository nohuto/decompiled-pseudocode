/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18006E200
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x1800EF2B0 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18006C584 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18006CB6C (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800710F0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18008CF70 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800E79B4 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E8158 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800EBA40 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x18030254C (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::RuntimeClassInitialize(
        CImmersiveApp *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7,
        unsigned __int64 a8)
{
  CallerIdentity **v11; // r12
  HRESULT v12; // r15d
  __int64 v13; // r8
  __int64 v14; // rdx
  PCWSTR StringRawBuffer; // rax
  enum ORIENTATION_PREFERENCE *v16; // r8
  unsigned int v17; // r14d
  unsigned int v18; // edi
  int (__fastcall *v19)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *); // rbx
  __int64 v20; // rdi
  int (__fastcall *v21)(__int64, struct IIAMServiceProvider **); // rbx
  __int64 v22; // rdx
  int v24; // eax
  __int64 *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda; // rax
  __int64 v26; // rbx
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh]
  unsigned int v29[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct IIAMServiceProvider *v30; // [rsp+40h] [rbp-C0h] BYREF
  struct IIAMServiceProvider *v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  const unsigned __int16 *v34; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v35[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v36[40]; // [rsp+80h] [rbp-80h] BYREF

  v34 = a3;
  v30 = a7;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v36,
    "Initialization");
  v36[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)v36, a2);
  v11 = (CallerIdentity **)((char *)this + 584);
  v12 = SHStrDupW(a2, (LPWSTR *)this + 73);
  if ( v12 >= 0 )
  {
    *((_DWORD *)this + 148) = a4;
    Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((char *)this + 768, a5);
    *((_BYTE *)this + 748) = *((_BYTE *)a6 + 28);
    *((_BYTE *)this + 749) = *((_BYTE *)a6 + 29);
    *((_BYTE *)this + 750) = *((_BYTE *)a6 + 30);
    *((_BYTE *)this + 751) = *((_BYTE *)a6 + 31);
    *((_BYTE *)this + 752) = *((_BYTE *)a6 + 32);
    *((_BYTE *)this + 753) = *((_BYTE *)a6 + 33);
    *((_BYTE *)this + 754) = *((_BYTE *)a6 + 34);
    *((_BYTE *)this + 755) = *((_BYTE *)a6 + 35);
    *((_BYTE *)this + 756) = *((_BYTE *)a6 + 36);
    *((_BYTE *)this + 757) = *((_BYTE *)a6 + 37);
    LOBYTE(v13) = 3;
    LOBYTE(v14) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
      v14,
      v13);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a6, 0LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
      (char *)this + 600,
      StringRawBuffer,
      -1LL);
    v12 = CImmersiveApp::CImmersiveWindowCollection::Initialize((CImmersiveApp *)((char *)this + 288), v30);
    if ( v12 >= 0 )
    {
      v17 = 500;
      v27 = 500;
      v28 = 768;
      if ( (int)CallerIdentity::GetManifestedOrientationPreference(*v11, (const unsigned __int16 *)this + 380, v16) < 0 )
        *((_DWORD *)this + 190) = 0;
      if ( *((_BYTE *)this + 748) )
      {
        v18 = 320;
        v27 = 320;
      }
      else if ( *((_BYTE *)this + 754) )
      {
        memset(v35, 0, sizeof(v35));
        v18 = 320;
        if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                    v35,
                    L"%s\\%s",
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                    *v11) >= 0
          && (int)SHRegGetDWORD(HKEY_CURRENT_USER, v35[0], L"MinWidth", v29) >= 0 )
        {
          v24 = v27;
          if ( v29[0] == 1 )
            v24 = 320;
          v27 = v24;
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v35);
      }
      else
      {
        v18 = 320;
        v28 = 320;
      }
      if ( *((_BYTE *)this + 750) )
      {
        v27 = 192;
        v28 = 48;
      }
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 55) + 208LL))(*((_QWORD *)this + 55), &v27);
      v32 = 0LL;
      v19 = *(int (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)v30 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
      if ( v19(v30, &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c, &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c, &v32) >= 0
        && (*(int (__fastcall **)(__int64, CallerIdentity *, unsigned int *))(*(_QWORD *)v32 + 56LL))(v32, *v11, v29) >= 0 )
      {
        if ( (int)v29[0] < 500 )
          v17 = v29[0];
        v27 = v17;
        if ( (int)v29[1] < 320 )
          v18 = v29[1];
        v28 = v18;
      }
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 55) + 200LL))(*((_QWORD *)this + 55), &v27);
      CImmersiveApp::_UpdateWindowTitleAndButtons(this);
      v31 = 0LL;
      v20 = *((_QWORD *)this + 55);
      v21 = *(int (__fastcall **)(__int64, struct IIAMServiceProvider **))(*(_QWORD *)v20 + 136LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
      if ( v21(v20, &v31) >= 0 && *((_BYTE *)this + 751) )
      {
        v30 = v31;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
        CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___(v29, &v30);
        v26 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
        v33 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
        *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = 0LL;
        if ( *(_QWORD *)v29 )
        {
          *(_QWORD *)v29 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release();
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
        if ( v26 )
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 55) + 232LL))(*((_QWORD *)this + 55), v26);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
      }
      LOBYTE(v22) = *((_BYTE *)a6 + 26);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 55) + 328LL))(*((_QWORD *)this + 55), v22);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
      if ( v34 )
        v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (char *)this + 640,
                v34,
                -1LL);
    }
  }
  *((_QWORD *)this + 112) = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v36, (unsigned int)v12);
  v36[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v36);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v36);
  return (unsigned int)v12;
}
