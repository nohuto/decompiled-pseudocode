/*
 * XREFs of ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1805E1DA8
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1805E374C (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B7174 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ @ 0x1802E6A84 (--1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@CalculateSecondaryViews@JointResizeTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805DFF28 (--$-0$$V@CalculateSecondaryViews@JointResizeTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$AdjacentView@_KAEAH@CalculateSecondaryViews@JointResizeTelemetry@@QEAAX$$QEA_KAEAH@Z @ 0x1805E02FC (--$AdjacentView@_KAEAH@CalculateSecondaryViews@JointResizeTelemetry@@QEAAX$$QEA_KAEAH@Z.c)
 *     ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA?A_T$$QEAUSecondaryViewInfo@JointResize@@@Z @ 0x1805E0FE0 (--$emplace_back@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@@V-$all.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805E4658 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall JointResize::CalculateSecondaryViews(JointResize *this, char a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v8)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  int v9; // eax
  struct IApplicationView *v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rsi
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 (__fastcall ***v15)(ApplicationViewHelpers *, GUID *, __int64); // rsi
  int v16; // ebx
  int v17; // eax
  struct IApplicationView *v18; // rdx
  unsigned int v19; // r14d
  __int64 WindowForView; // r14
  int v21; // [rsp+30h] [rbp-248h] BYREF
  int v22; // [rsp+34h] [rbp-244h] BYREF
  int v23[2]; // [rsp+38h] [rbp-240h] BYREF
  __int64 v24; // [rsp+40h] [rbp-238h] BYREF
  ApplicationViewHelpers *v25; // [rsp+48h] [rbp-230h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-228h] BYREF
  ApplicationViewHelpers *v27; // [rsp+58h] [rbp-220h] BYREF
  __int64 *v28; // [rsp+60h] [rbp-218h]
  int v29; // [rsp+68h] [rbp-210h] BYREF
  __int64 v30; // [rsp+70h] [rbp-208h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-200h]
  unsigned int v32; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v33; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 *v34; // [rsp+90h] [rbp-1E8h]
  __int64 v35; // [rsp+98h] [rbp-1E0h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-1D8h] BYREF
  int v37; // [rsp+A8h] [rbp-1D0h]
  __int64 v38; // [rsp+B0h] [rbp-1C8h]
  __int128 v39; // [rsp+B8h] [rbp-1C0h]
  char v40; // [rsp+C8h] [rbp-1B0h]
  _QWORD v41[2]; // [rsp+D0h] [rbp-1A8h] BYREF
  char v42; // [rsp+E0h] [rbp-198h]
  char v43; // [rsp+ECh] [rbp-18Ch]
  __int128 v44; // [rsp+F0h] [rbp-188h]
  __int128 v45; // [rsp+100h] [rbp-178h] BYREF
  _BYTE v46[48]; // [rsp+110h] [rbp-168h] BYREF
  __int64 v47; // [rsp+140h] [rbp-138h]
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  JointResizeTelemetry::CalculateSecondaryViews::CalculateSecondaryViews((__int64)v46, a2);
  v24 = 0LL;
  *(_QWORD *)v23 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 18);
  v4 = *v3;
  *(_QWORD *)v23 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v4 + 40))(
         v3,
         *((_QWORD *)this + 24),
         *((unsigned int *)this + 74),
         &v24);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v29 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 24LL))(v24, &v29);
    v22 = 0;
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)v23 + 24LL))(*(_QWORD *)v23, &v22);
    if ( v29 || v22 )
    {
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64)&v30,
        v24);
      v26 = 0;
      v27 = 0LL;
      v28 = &v30;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
      v32 = v31;
      v33 = 0LL;
      v34 = &v30;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v32);
      while ( v26 != v32 || v28 != v34 )
      {
        v15 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v27;
        v25 = v27;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
        switch ( *((_DWORD *)this + 74) )
        {
          case 0xA:
            v16 = 11;
            break;
          case 0xB:
            v16 = 10;
            break;
          case 0xC:
            v16 = 15;
            break;
          case 0xF:
            v16 = 12;
            break;
          default:
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2B3,
              (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
              (const char *)0x80070057LL,
              (int)v23);
        }
        v21 = v16;
        v45 = 0LL;
        v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int128 *))(*v15)[16])(
                v15,
                &v45);
        v19 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B6,
            (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v17);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
          JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v46);
          return v19;
        }
        WindowForView = ApplicationViewHelpers::GetWindowForView(v15, v18);
        wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
          &v36,
          (__int64)v15);
        v37 = v16;
        v38 = WindowForView;
        v39 = v45;
        v40 = 1;
        v44 = 0LL;
        v41[0] = 0LL;
        v42 = 0;
        v43 = 0;
        std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
          (__int64 *)this + 25,
          (__int64)&v36);
        if ( v41[0] )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v41);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
        v35 = WindowForView;
        JointResizeTelemetry::CalculateSecondaryViews::AdjacentView<unsigned __int64,int &>((__int64)v46, &v35, &v21);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
        ++v26;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64)&v30,
        *(__int64 *)v23);
      v26 = 0;
      v27 = 0LL;
      v28 = &v30;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
      v32 = v31;
      v33 = 0LL;
      v34 = &v30;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v32);
      while ( 1 )
      {
        if ( v26 == v32 && v28 == v34 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
          wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v46);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
          JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v46);
          return 0LL;
        }
        v8 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v27;
        v25 = v27;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
        v45 = 0LL;
        v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int128 *))(*v8)[16])(
               v8,
               &v45);
        v11 = v9;
        if ( v9 < 0 )
          break;
        v12 = ApplicationViewHelpers::GetWindowForView(v8, v10);
        wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
          &v36,
          (__int64)v8);
        v37 = *((_DWORD *)this + 74);
        v38 = v12;
        v39 = v45;
        v40 = 0;
        v44 = 0LL;
        v41[0] = 0LL;
        v42 = 0;
        v43 = 0;
        std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
          (__int64 *)this + 25,
          (__int64)&v36);
        if ( v41[0] )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v41);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
        v14 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                          v13,
                          (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
        if ( *v14 > 5u )
        {
          v21 = *((_DWORD *)this + 74);
          v35 = v12;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (__int64)v14,
            byte_18086C7EE,
            (const GUID *)(v47 + 8),
            0LL,
            (__int64)&v35,
            (__int64)&v21);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
        ++v26;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BF,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v46);
      return v11;
    }
    else
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v46);
      return 2147500037LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A1,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)v46);
    return v6;
  }
}
