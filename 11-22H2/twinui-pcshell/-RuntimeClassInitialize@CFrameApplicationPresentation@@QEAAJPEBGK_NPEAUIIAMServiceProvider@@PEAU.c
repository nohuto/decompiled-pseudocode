/*
 * XREFs of ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180027168
 * Callers:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180029CD8 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800227B4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800227B4.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___ @ 0x180056498 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___.c)
 *     ??1Initialization@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180057BE0 (--1Initialization@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x180057C0C (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x1803A4B80 (WPP_SF_Sdd.c)
 *     WPP_SF_Sd @ 0x1803C6008 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CFrameApplicationPresentation::RuntimeClassInitialize(
        CFrameApplicationPresentation *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        char a4,
        struct IIAMServiceProvider *a5,
        struct IImmersiveApplicationInternal *a6)
{
  __int64 (__fastcall *v10)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *); // rbx
  int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, const unsigned __int16 *, _QWORD, __int64 *); // rdi
  __int64 v14; // rbx
  HWND v15; // rcx
  bool v16; // r12
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v19)(struct IIAMServiceProvider *, SID *, GUID *, char *); // rdi
  __int64 pvAttribute; // [rsp+30h] [rbp-D0h] BYREF
  struct IIAMServiceProvider *v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  HWND hwnd; // [rsp+50h] [rbp-B0h] BYREF
  struct IIAMServiceProvider *v26; // [rsp+58h] [rbp-A8h] BYREF
  CFrameApplicationPresentation *v27; // [rsp+60h] [rbp-A0h] BYREF
  struct IIAMServiceProvider *v28; // [rsp+68h] [rbp-98h] BYREF
  bool v29; // [rsp+70h] [rbp-90h]
  _QWORD v30[40]; // [rsp+80h] [rbp-80h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v30,
    (__int64)"Initialization");
  v30[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)v30, a2);
  *((_BYTE *)this + 53) = a4;
  v26 = a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
  v24 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)a5 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  v11 = v10(a5, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035, &v24);
  if ( v11 >= 0 )
  {
    v23 = 0LL;
    v12 = v24;
    v13 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)v24 + 72LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    v11 = v13(v12, a2, a3, &v23);
    if ( v11 < 0 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
          (_DWORD)a2,
          a3);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v23 + 24LL))(v23, &hwnd);
      if ( v11 >= 0 )
      {
        if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr)
          && DwmGetWindowAttribute(hwnd, 0xEu, &pvAttribute, 4u) >= 0 )
        {
          *((_BYTE *)this + 52) = (pvAttribute & 2) == 0;
        }
        v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize((char *)this + 608);
        if ( v11 >= 0 )
        {
          v14 = v23;
          if ( *((_QWORD *)this + 15) != v23 )
          {
            v22 = (struct IIAMServiceProvider *)v23;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
            v22 = (struct IIAMServiceProvider *)*((_QWORD *)this + 15);
            *((_QWORD *)this + 15) = v14;
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
          }
          v15 = hwnd;
          *((_QWORD *)this + 16) = hwnd;
          *((_QWORD *)this + 79) = a6;
          GetWindowBand(v15, (char *)this + 216);
          v22 = a5;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
          v16 = 0;
          pvAttribute = 0LL;
          v17 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 79);
          v18 = **v17;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&pvAttribute);
          if ( v18(v17, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &pvAttribute) >= 0 )
            v16 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)pvAttribute + 328LL))(pvAttribute, 6LL) == 0;
          v27 = this;
          v28 = a5;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
          v29 = v16;
          v11 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___(this, &v27);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&pvAttribute);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
        }
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    if ( v11 >= 0 )
    {
      v19 = *(__int64 (__fastcall **)(struct IIAMServiceProvider *, SID *, GUID *, char *))(*(_QWORD *)a5 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 640);
      v11 = v19(
              a5,
              &SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              (char *)this + 640);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      (_DWORD)a2,
      a3,
      *((_DWORD *)this + 12));
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v30, (unsigned int)v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  CImmersiveAppTelemetry::Initialization::~Initialization((CImmersiveAppTelemetry::Initialization *)v30);
  return (unsigned int)v11;
}
