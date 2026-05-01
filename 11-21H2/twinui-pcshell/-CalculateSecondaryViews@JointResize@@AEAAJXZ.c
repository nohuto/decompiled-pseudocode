/*
 * XREFs of ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x180528084
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180529764 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x18004FE34 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C5B9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AdjacentView@_KAEAH@CalculateSecondaryViews@JointResizeTelemetry@@QEAAX$$QEA_KAEAH@Z @ 0x180527584 (--$AdjacentView@_KAEAH@CalculateSecondaryViews@JointResizeTelemetry@@QEAAX$$QEA_KAEAH@Z.c)
 *     ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAAEAUSecondaryViewInfo@JointResize@@$$QEAU23@@Z @ 0x180527AFC (--$emplace_back@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@@V-$all.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180527B80 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ @ 0x180527C8C (--1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CalculateSecondaryViews@JointResizeTelemetry@@QEAAXXZ @ 0x18052A618 (-StartActivity@CalculateSecondaryViews@JointResizeTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18052A7AC (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall JointResize::CalculateSecondaryViews(JointResize *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall ***v10)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  int v11; // eax
  struct IApplicationView *v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rdi
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 (__fastcall ***v17)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  int v18; // edi
  int v19; // eax
  struct IApplicationView *v20; // rdx
  unsigned int v21; // r14d
  __int64 WindowForView; // r14
  int v23; // [rsp+30h] [rbp-248h] BYREF
  int v24; // [rsp+34h] [rbp-244h] BYREF
  int v25[2]; // [rsp+38h] [rbp-240h] BYREF
  __int64 v26; // [rsp+40h] [rbp-238h] BYREF
  ApplicationViewHelpers *v27; // [rsp+48h] [rbp-230h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-228h] BYREF
  ApplicationViewHelpers *v29; // [rsp+58h] [rbp-220h] BYREF
  __int64 *v30; // [rsp+60h] [rbp-218h]
  int v31; // [rsp+68h] [rbp-210h] BYREF
  __int64 v32; // [rsp+70h] [rbp-208h] BYREF
  unsigned int v33; // [rsp+78h] [rbp-200h]
  unsigned int v34; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v35; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 *v36; // [rsp+90h] [rbp-1E8h]
  __int64 v37; // [rsp+98h] [rbp-1E0h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-1D8h] BYREF
  int v39; // [rsp+A8h] [rbp-1D0h]
  __int64 v40; // [rsp+B0h] [rbp-1C8h]
  __int128 v41; // [rsp+B8h] [rbp-1C0h]
  char v42; // [rsp+C8h] [rbp-1B0h]
  char v43; // [rsp+D4h] [rbp-1A4h]
  char v44; // [rsp+E0h] [rbp-198h]
  __int128 v45; // [rsp+E4h] [rbp-194h]
  int v46; // [rsp+F4h] [rbp-184h]
  __int128 v47; // [rsp+100h] [rbp-178h] BYREF
  _QWORD v48[40]; // [rsp+110h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v48);
  v48[0] = &JointResizeTelemetry::CalculateSecondaryViews::`vftable';
  JointResizeTelemetry::CalculateSecondaryViews::StartActivity((JointResizeTelemetry::CalculateSecondaryViews *)v48);
  v26 = 0LL;
  *(_QWORD *)v25 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 18);
  v6 = *v5;
  *(_QWORD *)v25 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v6 + 48))(
         v5,
         *((_QWORD *)this + 25),
         *((unsigned int *)this + 80),
         &v26);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v31 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 24LL))(v26, &v31);
    v24 = 0;
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)v25 + 24LL))(*(_QWORD *)v25, &v24);
    if ( v31 || v24 )
    {
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64)&v32,
        v26);
      v28 = 0;
      v29 = 0LL;
      v30 = &v32;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v28);
      v34 = v33;
      v35 = 0LL;
      v36 = &v32;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v34);
      while ( v28 != v34 || v30 != v36 )
      {
        v17 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v29;
        v27 = v29;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
        switch ( *((_DWORD *)this + 80) )
        {
          case 0xA:
            v18 = 11;
            break;
          case 0xB:
            v18 = 10;
            break;
          case 0xC:
            v18 = 15;
            break;
          case 0xF:
            v18 = 12;
            break;
          default:
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              938LL,
              (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
              (const char *)0x80070057LL,
              (int)v25);
        }
        v23 = v18;
        v47 = 0LL;
        v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int128 *))(*v17)[16])(
                v17,
                &v47);
        v21 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3AD,
            (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v25);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
          JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v48);
          return v21;
        }
        WindowForView = ApplicationViewHelpers::GetWindowForView(v17, v20);
        wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
          &v38,
          (__int64)v17);
        v39 = v18;
        v40 = WindowForView;
        v41 = v47;
        v42 = 1;
        v45 = 0LL;
        v46 = 0;
        v43 = 0;
        v44 = 0;
        std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
          (__int64 *)this + 27,
          (__int64)&v38);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v38);
        v37 = WindowForView;
        JointResizeTelemetry::CalculateSecondaryViews::AdjacentView<unsigned __int64,int &>((__int64)v48, &v37, &v23);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
        ++v28;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v28);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64)&v32,
        *(__int64 *)v25);
      v28 = 0;
      v29 = 0LL;
      v30 = &v32;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v28);
      v34 = v33;
      v35 = 0LL;
      v36 = &v32;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v34);
      while ( 1 )
      {
        if ( v28 == v34 && v30 == v36 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
          wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v48);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v25);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
          JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v48);
          return 0LL;
        }
        v10 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v29;
        v27 = v29;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
        v47 = 0LL;
        v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int128 *))(*v10)[16])(
                v10,
                &v47);
        v13 = v11;
        if ( v11 < 0 )
          break;
        v14 = ApplicationViewHelpers::GetWindowForView(v10, v12);
        wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
          &v38,
          (__int64)v10);
        v39 = *((_DWORD *)this + 80);
        v40 = v14;
        v41 = v47;
        v42 = 0;
        v45 = 0LL;
        v46 = 0;
        v43 = 0;
        v44 = 0;
        std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
          (__int64 *)this + 27,
          (__int64)&v38);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v38);
        v16 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                          v15,
                          _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
        if ( *v16 > 5u )
        {
          v23 = *((_DWORD *)this + 80);
          v37 = v14;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (__int64)v16,
            byte_1806C44FF,
            (const GUID *)(v48[6] + 8LL),
            0LL,
            (__int64)&v37,
            (__int64)&v23);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
        ++v28;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v28);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B6,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v25);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
      JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v48);
      return v13;
    }
    else
    {
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v25);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
      JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v48);
      return 2147500037LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v25);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
    JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v48);
    return v8;
  }
}
