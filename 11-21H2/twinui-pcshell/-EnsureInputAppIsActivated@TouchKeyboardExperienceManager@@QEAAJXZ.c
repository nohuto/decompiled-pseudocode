/*
 * XREFs of ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18022E232
 * Callers:
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180177394 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18022F360 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1804793DC (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18009EB10 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180321274 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4PLM_APPLICATION_STATE@@0@Z @ 0x180457D08 (--$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelem.c)
 *     ??$SuspendedInputAppRestart@AEAI@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEAI@Z @ 0x1804585D8 (--$SuspendedInputAppRestart@AEAI@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18045A67C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045ADF0 (--1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18045D1B0 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18045D6AC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1804654D8 (-StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N@Z @ 0x1804661F0 (-Stop@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N@Z.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1804696A8 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchKeyboardExperienceManager::EnsureInputAppIsActivated(
        RTL_SRWLOCK *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const char *v5; // r9
  PVOID Ptr; // rcx
  unsigned __int16 **v7; // rdx
  unsigned int v8; // ebx
  bool v9; // si
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  const unsigned __int16 *v16; // rdx
  int ModalExperienceAsync; // eax
  __int64 v18; // rdx
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v21; // [rsp+28h] [rbp-D8h] BYREF
  std::_Ref_count_base *v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v23[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-A8h]
  _QWORD v25[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  TouchKeyboardExperienceManager::GetCurrentInputAppId((__int64)this, (__int64)v23);
  wil::AcquireSRWLockExclusive(&v21, this + 91);
  if ( ((__int64)this[90].Ptr & 0xFFFFFFFA) == 0 )
  {
    if ( !BYTE4(this[90].Ptr) )
    {
      Ptr = this[47].Ptr;
      if ( Ptr
        || (wil::details::in1diag3::_Log_NullAlloc(
              retaddr,
              (void *)0x77D,
              (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              v5),
            (Ptr = this[47].Ptr) != 0LL) )
      {
        v7 = v23;
        if ( v24 >= 8 )
          v7 = (unsigned __int16 **)v23[0];
        if ( (*(int (__fastcall **)(PVOID, unsigned __int16 **, int *))(*(_QWORD *)Ptr + 56LL))(Ptr, v7, &v20) >= 0
          && v20 != LODWORD(this[90].Ptr) )
        {
          TouchKeyboardExperienceTelemetryLogger::InconsistentAppStateDetected<enum PLM_APPLICATION_STATE &,enum PLM_APPLICATION_STATE &>(
            &this[90],
            &v20);
          LODWORD(this[90].Ptr) = v20;
        }
      }
    }
    if ( ((__int64)this[90].Ptr & 0xFFFFFFFA) == 0 )
      goto LABEL_31;
  }
  if ( BYTE4(this[90].Ptr) )
  {
LABEL_31:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
    std::wstring::_Tidy_deallocate((__int64)v23);
    return 0LL;
  }
  BYTE4(this[90].Ptr) = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
  std::wstring::_Tidy_deallocate((__int64)v23);
  v8 = (unsigned int)this[90].Ptr;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v25);
  v25[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v25,
    v8);
  *(_OWORD *)v22 = 0LL;
  v9 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    1u,
    v10,
    v11);
  if ( (int)TouchKeyboardExperienceManager::FindViewInfo(this, HIDWORD(this[95].Ptr), v22) < 0
    || *((_BYTE *)v22[0] + 32) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
      1u,
      v12,
      v13);
    wil::AcquireSRWLockExclusive(&v21, this + 91);
    BYTE4(this[90].Ptr) = 0;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
    TouchKeyboardExperienceManager::GetCurrentInputAppId((__int64)this, (__int64)v23);
    if ( LODWORD(this[90].Ptr) == 3 && v23[2] )
    {
      TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::SuspendedInputAppRestart<unsigned int &>(
        v25,
        (char *)&this[95].Ptr + 4);
      v16 = (const unsigned __int16 *)v23;
      if ( v24 >= 8 )
        v16 = v23[0];
      ModalExperienceAsync = TouchKeyboardExperienceManager::TerminateInputApp(
                               (TouchKeyboardExperienceManager *)this,
                               v16);
      v15 = ModalExperienceAsync;
      if ( ModalExperienceAsync < 0 )
      {
        v18 = 1986LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)ModalExperienceAsync);
        std::wstring::_Tidy_deallocate((__int64)v23);
        goto LABEL_28;
      }
      ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync((TouchKeyboardExperienceManager *)this);
      v15 = ModalExperienceAsync;
      if ( ModalExperienceAsync < 0 )
      {
        v18 = 1987LL;
        goto LABEL_25;
      }
    }
    std::wstring::_Tidy_deallocate((__int64)v23);
    goto LABEL_27;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v22[0] + 344LL))(*(_QWORD *)v22[0], 3LL);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v9 = 1;
LABEL_27:
    TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::Stop(
      (TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v25,
      v9);
    v15 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7AE,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_28:
  if ( v22[1] )
    std::_Ref_count_base::_Decref(v22[1]);
  TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::~InputAppResumeRequested((TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v25);
  return v15;
}
