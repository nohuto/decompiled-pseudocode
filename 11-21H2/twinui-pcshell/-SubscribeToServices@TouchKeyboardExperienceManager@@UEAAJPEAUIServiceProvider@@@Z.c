/*
 * XREFs of ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BDAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BE054 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wi.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BEF4C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800BF020 (--1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEA.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF9E8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?StartActivity@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1800BFEC4 (-StartActivity@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C13E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEA.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@Z @ 0x18010C154 (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP8_ea_18010C154.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x18018D45C (IsQueryWin32SubsystemHostPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::SubscribeToServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, SID *, GUID *, char *); // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, SID *, GUID *, char *); // rdi
  _QWORD *v18; // r12
  __int64 v19; // rdx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v22; // rdi
  int v23; // r8d
  int v24; // r9d
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  HRESULT (__stdcall *v29)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v30; // rdx
  __int64 v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v32[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() && (unsigned int)QueryWin32SubsystemHost() == 1 )
    return 0LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v32);
  v32[0] = &TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::`vftable';
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::StartActivity((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *)v32);
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 36, (__int64)a2);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  v7 = *((_QWORD *)this + 36);
  v8 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v7 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 41);
  v9 = v8(v7, &SID_ProcessLifetimeManagerControl, &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d, (char *)this + 328);
  v10 = v9;
  if ( v9 >= 0 )
  {
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 51);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
           a2,
           &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
           &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
           (char *)this + 408);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 3338LL;
      goto LABEL_8;
    }
    v31[0] = 0LL;
    v13 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v31);
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v13)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v31);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v16 = v31[0];
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v31[0] + 72LL);
      v18 = (_QWORD *)((char *)this + 296);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 37);
      v14 = v17(v16, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c, (char *)this + 296);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 51) + 40LL))(
                *((_QWORD *)this + 51),
                ((unsigned __int64)this + 72) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                (char *)this + 216);
        v10 = v14;
        if ( v14 >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 40LL))(
                  *v18,
                  10LL,
                  ((unsigned __int64)this + 80) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                  (char *)this + 220);
          v10 = v14;
          if ( v14 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v18 + 72LL))(*v18, (char *)this + 424);
            LOBYTE(v19) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::GetImpl'::`2'::impl,
              v19);
            v20 = a2->lpVtbl->QueryService;
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 38);
            v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v20)(
                    a2,
                    &SID_InputHostLayout,
                    &GUID_260b6f30_f9bc_452d_be7e_d8bdc0ea3a0a,
                    (char *)this + 304);
            v10 = v14;
            if ( v14 >= 0 )
            {
              v21 = a2->lpVtbl->QueryService;
              v22 = (_QWORD *)((char *)this + 536);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 67);
              v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v21)(
                      a2,
                      &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                      &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                      (char *)this + 536);
              v10 = v14;
              if ( v14 >= 0 )
              {
                v14 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),TouchKeyboardExperienceManager *>(
                        (int)this + 544,
                        *v22,
                        v23,
                        v24,
                        (__int64)this - 48);
                v10 = v14;
                if ( v14 >= 0 )
                {
                  v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v22 + 24LL))(*v22, (char *)this + 528);
                  v10 = v14;
                  if ( v14 >= 0 )
                  {
                    v25 = a2->lpVtbl->QueryService;
                    v26 = (_QWORD *)((char *)this + 312);
                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 39);
                    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v25)(
                            a2,
                            &IID_IImmersiveWindowMessageService,
                            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                            (char *)this + 312);
                    v10 = v14;
                    if ( v14 >= 0 )
                    {
                      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v26 + 24LL))(
                              *v26,
                              26LL,
                              ((unsigned __int64)this + 88) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                              (char *)this + 236);
                      v10 = v14;
                      if ( v14 >= 0 )
                      {
                        LOBYTE(v27) = 1;
                        wil::details::FeatureImpl<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::ReportUsage(
                          &`wil::Feature<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::GetImpl'::`2'::impl,
                          v27);
                        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v26 + 24LL))(
                                *v26,
                                126LL,
                                ((unsigned __int64)this + 88) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                                (char *)this + 240);
                        v10 = v14;
                        if ( v14 >= 0 )
                        {
                          LOBYTE(v28) = 1;
                          wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::ReportUsage(
                            &`wil::Feature<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::GetImpl'::`2'::impl,
                            v28);
                          v29 = a2->lpVtbl->QueryService;
                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 40);
                          v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v29)(
                                  a2,
                                  &IID_IGlobalRudeWindowNotificationService,
                                  &GUID_a240bbbd_d294_480c_8d38_3786056363f1,
                                  (char *)this + 320);
                          v10 = v14;
                          if ( v14 >= 0 )
                          {
                            v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 40)
                                                                                              + 24LL))(
                                    *((_QWORD *)this + 40),
                                    -(__int64)(this != (TouchKeyboardExperienceManager *)48) & ((unsigned __int64)this
                                                                                              + 128),
                                    (char *)this + 244);
                            v10 = v14;
                            if ( v14 >= 0 )
                            {
                              LOBYTE(v30) = 1;
                              wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::ReportUsage(
                                &`wil::Feature<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::GetImpl'::`2'::impl,
                                v30);
                              wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
                                v32,
                                0LL);
                              v10 = 0;
                              goto LABEL_37;
                            }
                            v15 = 3425LL;
                          }
                          else
                          {
                            v15 = 3424LL;
                          }
                        }
                        else
                        {
                          v15 = 3409LL;
                        }
                      }
                      else
                      {
                        v15 = 3406LL;
                      }
                    }
                    else
                    {
                      v15 = 3405LL;
                    }
                  }
                  else
                  {
                    v15 = 3403LL;
                  }
                }
                else
                {
                  v15 = 3402LL;
                }
              }
              else
              {
                v15 = 3398LL;
              }
            }
            else
            {
              v15 = 3396LL;
            }
          }
          else
          {
            v15 = 3350LL;
          }
        }
        else
        {
          v15 = 3347LL;
        }
      }
      else
      {
        v15 = 3345LL;
      }
    }
    else
    {
      v15 = 3344LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_37:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v31);
    goto LABEL_38;
  }
  v11 = 3335LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_38:
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::~TouchKeyboardExperienceManagerSubscribeToServices((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *)v32);
  return v10;
}
