/*
 * XREFs of ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18047045C
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1800BC010 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 *     ?TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x18047D6F0 (-TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x1800C0EE4 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18022FC80 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x1803C1F94 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18045A67C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18045EA30 (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??$DeferredRequestExecuted@IAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N0@Z @ 0x18046BDF4 (--$DeferredRequestExecuted@IAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N0@Z.c)
 *     ??$PreviousDeferredRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY08$$CBD@Z @ 0x18046C3E0 (--$PreviousDeferredRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QE.c)
 *     ??$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_N_N@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAI$$QEAPEBGAEA_N3$$QEA_N@Z @ 0x18046C888 (--$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEA_NAEA_N_N@OnShellReque.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F330 (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F35C (--1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180477F4C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 *     ?ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReason@1@@Z @ 0x180479F9C (-ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReaso.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18047A704 (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18047ABCC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@45678@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180481E40 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1805F4A0C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(__int64 a1, int a2)
{
  __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  _DWORD *v9; // r14
  KeyboardHosting::TabTipAdapterPolicy *v10; // rbx
  int ShellState; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  bool v15; // r8
  char v17[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v18[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  RTL_SRWLOCK *v22; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[24]; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+A8h] [rbp-58h]
  _QWORD v26[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v4 = wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
         a1,
         _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
  wil::ActivityThreadWatcher::ActivityThreadWatcher(
    (wil::ActivityThreadWatcher *)v23,
    (struct wil::details::IFailureCallback *)v4,
    "TabTipAdapter::ExecuteDeferredRequest");
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 96LL))(*(_QWORD *)(a1 + 96));
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_25;
  }
  wil::AcquireSRWLockExclusive(&v22, (RTL_SRWLOCK *)(a1 + 424));
  if ( !*(_BYTE *)(a1 + 400) )
    goto LABEL_23;
  LODWORD(v19) = a2;
  v18[0] = *(_DWORD *)(a1 + 408);
  TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted<unsigned int,bool &,unsigned int>(
    v18,
    (char *)(a1 + 401),
    (int *)&v19);
  v7 = KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(
         *(_QWORD *)(a1 + 112) + 16LL,
         *(unsigned int *)(a1 + 404),
         *(unsigned int *)(a1 + 408),
         v18);
  v6 = v7;
  if ( v7 >= 0 )
  {
    v9 = (_DWORD *)(a1 + 408);
    if ( v18[0] == 1 )
    {
      v19 = 0LL;
      v10 = *(KeyboardHosting::TabTipAdapterPolicy **)(a1 + 112);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      ShellState = KeyboardHosting::TabTipAdapterPolicy::GetShellState(
                     v10,
                     (unsigned int)*v9,
                     v20,
                     (__int64)v17,
                     v18,
                     &v19);
      v6 = ShellState;
      if ( ShellState < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6BB,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)ShellState);
LABEL_19:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
        goto LABEL_24;
      }
      if ( *(_BYTE *)(a1 + 401) )
      {
        v12 = 9LL;
        if ( a2 )
        {
          if ( a2 == 1 )
            v12 = 8LL;
        }
        else
        {
          v12 = 7LL;
        }
        v17[0] = 1;
        v21 = KeyboardHosting::ShellRequestedStateChangeReasonToString(v12);
        v18[0] = TouchKeyboardExperienceManager::GetInputAppState(*(RTL_SRWLOCK **)(a1 + 64));
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::Start<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int,unsigned short const *,bool &,bool &,bool>(
          (struct wil::details::IFailureCallback *)v26,
          (unsigned int *)(a1 + 408),
          (unsigned int *)v18,
          &v21,
          (char *)(a1 + 384),
          (char *)(a1 + 388),
          v17);
        *(_QWORD *)v18 = v19;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v18);
        v13 = KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData((KeyboardHosting::TabTipAdapter *)a1);
        v6 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6D6,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v13);
          TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v26);
          goto LABEL_19;
        }
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v26);
      }
      else
      {
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v26,
          (__int64)"OnShellRequestedShowActivity");
        v26[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::`vftable';
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v26);
        *(_QWORD *)v18 = v19;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v18);
        v14 = KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData((KeyboardHosting::TabTipAdapter *)a1);
        v6 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6DC,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v14);
          TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v26);
          goto LABEL_19;
        }
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v26);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    }
    else
    {
      v18[0] = *(_DWORD *)(a1 + 404);
      LODWORD(v19) = *v9;
      TouchKeyboardExperienceTelemetryLogger::PreviousDeferredRequestCanceled<unsigned int,unsigned int,char const (&)[9]>(
        &v19,
        v18,
        v8);
      IhmNotification::SendKeyboardSetVisible(0LL, 0, v15);
    }
LABEL_23:
    *(_WORD *)(a1 + 400) = 0;
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 11;
    v6 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B3,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
LABEL_24:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v22);
LABEL_25:
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v23);
  return v6;
}
