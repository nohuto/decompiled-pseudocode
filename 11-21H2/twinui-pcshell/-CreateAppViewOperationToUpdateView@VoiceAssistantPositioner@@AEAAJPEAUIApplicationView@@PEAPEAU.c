/*
 * XREFs of ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804F3E08
 * Callers:
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x1804F960C (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$call@P6A?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@?$factory_cache_entry@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UITaskbarLayoutStatics@2345@@impl@winrt@@QEAA?AUTaskbarLayout@Shell@UI@WindowsUdk@2@$$QEAP6A?AU34562@AEBUITaskbarLayoutStatics@4562@@Z@Z @ 0x180067794 (--$call@P6A-AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@-$facto.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800F2578 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F363C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarAlignment@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarAlignment@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA?AW4TaskbarAlignment@Shell@UI@WindowsUdk@3@XZ @ 0x1800F9994 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4TaskbarAlignment@Shell@UI@Windows.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUTaskbarLayout@Shell@UI@WindowsUdk@3@XZ @ 0x1800F9A1C (-Current@-$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@Win.c)
 *     ?GetAlignment@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$IReference@W4TaskbarAlignment@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@3@_K@Z @ 0x1800F9AD8 (-GetAlignment@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@w.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x1804F260C (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 *     ?ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1111H@Z @ 0x1804F36E0 (-ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLA.c)
 *     ?GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1804F4ADC (-GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VoiceAssistantPositioner::CreateAppViewOperationToUpdateView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  struct IApplicationViewOperation **v3; // r13
  VoiceAssistantPositioner *v5; // r15
  ApplicationViewOperation **v6; // rax
  __int64 v7; // r14
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 (__fastcall *v12)(char *, struct IApplicationView *, _BYTE *, __int64 *); // rbx
  int MonitorInformation; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  HMONITOR v17; // r14
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // r9
  LANGID ThreadUILanguage; // ax
  int v22; // eax
  LONG left; // ecx
  int v24; // eax
  HMONITOR v25; // r8
  RECT v26; // xmm6
  int v27; // ebx
  HMONITOR v28; // r8
  int v29; // edi
  HMONITOR v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rbx
  char v35; // [rsp+60h] [rbp-148h] BYREF
  __int64 v36; // [rsp+68h] [rbp-140h] BYREF
  void *v37; // [rsp+70h] [rbp-138h] BYREF
  void (__fastcall *v38)(__int64, __int64 *); // [rsp+78h] [rbp-130h] BYREF
  __int64 v39; // [rsp+80h] [rbp-128h] BYREF
  __int64 v40; // [rsp+88h] [rbp-120h] BYREF
  struct tagRECT v41; // [rsp+90h] [rbp-118h] BYREF
  int v42; // [rsp+A0h] [rbp-108h] BYREF
  HMONITOR v43; // [rsp+A8h] [rbp-100h] BYREF
  _DWORD v44[2]; // [rsp+B0h] [rbp-F8h] BYREF
  ApplicationViewOperation *v45; // [rsp+B8h] [rbp-F0h] BYREF
  _BYTE v46[4]; // [rsp+C0h] [rbp-E8h] BYREF
  _BYTE v47[12]; // [rsp+C4h] [rbp-E4h] BYREF
  RECT v48; // [rsp+D0h] [rbp-D8h] BYREF
  RECT v49; // [rsp+E0h] [rbp-C8h] BYREF
  struct IApplicationView *v50; // [rsp+F0h] [rbp-B8h] BYREF
  struct tagRECT v51; // [rsp+100h] [rbp-A8h] BYREF
  struct tagRECT v52; // [rsp+110h] [rbp-98h] BYREF
  __int64 *v53; // [rsp+120h] [rbp-88h]
  RECT rc; // [rsp+130h] [rbp-78h] BYREF
  RECT v55; // [rsp+140h] [rbp-68h] BYREF
  struct tagRECT v56; // [rsp+150h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v3 = a3;
  v5 = this;
  *(_QWORD *)&v49.left = this;
  v50 = a2;
  *(_QWORD *)&v48.left = a3;
  v6 = Microsoft::WRL::Details::Make<ApplicationViewOperation,>((ApplicationViewOperation **)&v38);
  v45 = *v6;
  v7 = (__int64)v45;
  *v6 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v38);
  if ( v7 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 112LL))(v7, 255LL, 288LL);
    v8 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 713LL;
      goto LABEL_5;
    }
    v36 = 0LL;
    v12 = *(__int64 (__fastcall **)(char *, struct IApplicationView *, _BYTE *, __int64 *))(*((_QWORD *)v5 + 13) + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    MonitorInformation = v12((char *)v5 + 104, a2, v46, &v36);
    v8 = MonitorInformation;
    if ( MonitorInformation >= 0 )
    {
      MonitorInformation = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 176LL))(v7, v36);
      v8 = MonitorInformation;
      if ( MonitorInformation >= 0 )
      {
        MonitorInformation = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 128LL))(v7, 0LL);
        v8 = MonitorInformation;
        if ( MonitorInformation >= 0 )
        {
          rc = 0LL;
          v35 = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSV>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSV>::GetImpl'::`2'::impl,
            1u,
            v15,
            v16);
          v17 = MonitorFromRect(&rc, 1u);
          v43 = v17;
          MonitorInformation = VoiceAssistantPositioner::GetMonitorInformation(
                                 v5,
                                 v17,
                                 (enum EDGEUI_TRAYSTUCKPLACE *)&v42,
                                 &v41,
                                 &v52,
                                 &v51);
          v8 = MonitorInformation;
          if ( MonitorInformation >= 0 )
          {
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSV>::ReportUsage(
              `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSV>::GetImpl'::`2'::impl,
              1u,
              v18,
              v19);
            rc.top = v41.bottom / 2;
            rc.bottom = v41.bottom / 2;
            rc.left = v41.right / 2;
            rc.right = v41.right / 2;
            try
            {
              v53 = &qword_1807B3F18;
              _InterlockedIncrement64(&qword_1807B3F18);
              if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics> )
              {
                winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::Current(
                  &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>,
                  &v40);
                _InterlockedDecrement64(&qword_1807B3F18);
              }
              else
              {
                _InterlockedDecrement64(&qword_1807B3F18);
                v38 = (void (__fastcall *)(__int64, __int64 *))_lambda_a9de7e7a0851adce5db2c194794b7096_::_lambda_invoker_cdecl_;
                winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::call<winrt::WindowsUdk::UI::Shell::TaskbarLayout (*)(winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics const &)>(
                  (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))2,
                  (__int64)&v40,
                  &v38);
              }
              winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetAlignment(
                &v40,
                &v39,
                (__int64)v17);
              if ( v39
                && !(unsigned int)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>,enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>::Value(&v39) )
              {
                ThreadUILanguage = GetThreadUILanguage();
                v22 = IsBiDiLocale(ThreadUILanguage);
                left = v41.left;
                if ( v22 )
                  left = v41.right;
                rc.left = left;
                rc.right = left;
                rc.top = v41.top;
                rc.bottom = v41.top;
              }
              if ( v39 )
                winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
              if ( v40 )
                winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v40);
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0x319,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
                v20);
              LODWORD(v17) = (_DWORD)v43;
              v3 = *(struct IApplicationViewOperation ***)&v48.left;
              v5 = *(VoiceAssistantPositioner **)&v49.left;
            }
            v55 = 0LL;
            v24 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _BYTE *))(**((_QWORD **)v5 + 25) + 40LL))(
                    *((_QWORD *)v5 + 25),
                    &v55,
                    v47);
            if ( v24 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x31F,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
                (const char *)(unsigned int)v24);
            v26 = v55;
            v27 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (int)v17, v25);
            v29 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                    (ExperienceManagerUtils *)*((unsigned int *)v5 + 96),
                    (int)v17,
                    v28);
            LODWORD(v38) = v29;
            LODWORD(v43) = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                             (ExperienceManagerUtils *)*((unsigned int *)v5 + 97),
                             (int)v17,
                             v30);
            v49 = v26;
            v48 = rc;
            VoiceAssistantPositioner::ComputeVoiceAssistantWindowRect(
              (__int64)&v41,
              &v56,
              v42,
              v29,
              (int)v43,
              (__int64)&v41,
              &v52,
              &v51,
              (__int128 *)&v48.left,
              &v49,
              v27);
            v37 = 0LL;
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
            v31 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                    &v37,
                    &v56);
            v8 = v31;
            if ( v31 >= 0 )
            {
              v33 = (__int64)v45;
              v31 = (*(__int64 (__fastcall **)(ApplicationViewOperation *, void *))(*(_QWORD *)v45 + 80LL))(v45, v37);
              v8 = v31;
              if ( v31 >= 0 )
              {
                v31 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 160LL))(v33, 13LL);
                v8 = v31;
                if ( v31 >= 0 )
                {
                  v44[0] = 1;
                  v44[1] = 1;
                  v31 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v33 + 224LL))(v33, v44, 0LL);
                  v8 = v31;
                  if ( v31 >= 0 )
                  {
                    v31 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v33 + 208LL))(v33, v44, 0LL);
                    v8 = v31;
                    if ( v31 >= 0 )
                    {
                      v31 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 96LL))(v33, 1LL);
                      v8 = v31;
                      if ( v31 >= 0 )
                      {
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
                        *v3 = (struct IApplicationViewOperation *)v33;
                        VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView<IApplicationView * &,bool &,tagRECT &,int &,int &,tagSIZE &>(
                          &v50,
                          (bool *)&v35,
                          &v56,
                          (int *)&v38,
                          (int *)&v43,
                          (struct tagSIZE *)v5 + 48);
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
                        v8 = 0;
                        goto LABEL_46;
                      }
                      v32 = 823LL;
                    }
                    else
                    {
                      v32 = 818LL;
                    }
                  }
                  else
                  {
                    v32 = 817LL;
                  }
                }
                else
                {
                  v32 = 813LL;
                }
              }
              else
              {
                v32 = 810LL;
              }
            }
            else
            {
              v32 = 809LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v32,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
              (const char *)(unsigned int)v31);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
            goto LABEL_9;
          }
          v14 = 761LL;
        }
        else
        {
          v14 = 719LL;
        }
      }
      else
      {
        v14 = 717LL;
      }
    }
    else
    {
      v14 = 716LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)MonitorInformation);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    goto LABEL_46;
  }
  v8 = -2147024882;
  v9 = 2147942414LL;
  v10 = 710LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v9);
LABEL_46:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
  return v8;
}
