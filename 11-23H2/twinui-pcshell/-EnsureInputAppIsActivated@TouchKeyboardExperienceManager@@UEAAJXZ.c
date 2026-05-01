/*
 * XREFs of ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802DAD90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?9UIRemoteTabTipPolicy@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIRemoteTabTipPolicy@@@01@$$T@Z @ 0x180168DBC (--$-9UIRemoteTabTipPolicy@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIRemoteTabTipPolicy@@@01@$$T@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9808 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18020A408 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ??$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4PLM_APPLICATION_STATE@@0@Z @ 0x1805086BC (--$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelem.c)
 *     ??$InputAppResumeRequested@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z @ 0x1805087D4 (--$InputAppResumeRequested@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z.c)
 *     ??$SuspendedInputAppRestart@AEAII_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI$$QEA_N@Z @ 0x1805091A8 (--$SuspendedInputAppRestart@AEAII_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI$$QEA_N.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@44@Z @ 0x180509524 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18050EFD4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18051B528 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::EnsureInputAppIsActivated(TouchKeyboardExperienceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v3; // rcx
  const char *v4; // r9
  char *v5; // rsi
  _DWORD *v6; // rbx
  int v7; // ecx
  int v8; // ecx
  _QWORD *v9; // rax
  int (__fastcall *v10)(__int64, _QWORD *, __int64 *); // r9
  __int64 v11; // r11
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  const unsigned __int16 *v16; // rax
  int ModalExperienceAsync; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  char v23; // [rsp+40h] [rbp-29h] BYREF
  char v24; // [rsp+41h] [rbp-28h] BYREF
  char v25; // [rsp+42h] [rbp-27h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  RTL_SRWLOCK *v27; // [rsp+50h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION v28; // [rsp+58h] [rbp-11h] BYREF
  __int64 v29; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 200);
  TouchKeyboardExperienceManager::GetCurrentInputAppId((struct _RTL_CRITICAL_SECTION *)this - 5, &v28);
  AcquireSRWLockExclusive((PSRWLOCK)this + 47);
  v27 = (RTL_SRWLOCK *)((char *)this + 376);
  v5 = (char *)this + 368;
  if ( *((_BYTE *)this + 812) || *v5 )
  {
    v21 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v3,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v21 > 5u )
    {
      v24 = *((_BYTE *)this + 813);
      v23 = *v5;
      v25 = *((_BYTE *)this + 812);
      v26 = (__int64)"EnsureInputAppIsActivated omitted";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (int)v21,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v23,
        (__int64)&v24);
    }
  }
  else
  {
    v6 = (_DWORD *)((char *)this + 364);
    v7 = *((_DWORD *)this + 91);
    if ( !v7 || (v8 = v7 - 1) == 0 || (unsigned int)(v8 - 3) <= 1 )
    {
      if ( !*((_QWORD *)this + 22) )
        wil::details::in1diag3::_Log_NullAlloc(
          retaddr,
          (void *)0x69B,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          v4);
      if ( Microsoft::WRL::operator!=<IRemoteTabTipPolicy>((_QWORD *)this + 22) )
      {
        v9 = std::wstring::c_str(&v28);
        if ( v10(v11, v9, &v26) >= 0 && (_DWORD)v26 != *v6 )
        {
          TouchKeyboardExperienceTelemetryLogger::InconsistentAppStateDetected<enum PLM_APPLICATION_STATE &,enum PLM_APPLICATION_STATE &>(
            (char *)this + 364,
            &v26);
          *v6 = v26;
        }
      }
    }
    if ( *v6 >= 2u && (unsigned int)(*v6 - 4) >= 2 )
    {
      *v5 = 1;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v27);
      wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(&v28, v12);
      *(_OWORD *)&v28.DebugInfo = 0LL;
      v23 = 0;
      if ( (int)TouchKeyboardExperienceManager::FindViewInfo(v2, *((unsigned int *)this + 103), &v28) >= 0
        && !LOBYTE(v28.DebugInfo->EntryCount) )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&v28.DebugInfo->Type + 344LL))(
                *(_QWORD *)v28.DebugInfo,
                3LL);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6BB,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v13);
LABEL_28:
          tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v28);
          return v14;
        }
        v23 = 1;
LABEL_27:
        TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested<bool &>(&v23);
        v14 = 0;
        goto LABEL_28;
      }
      AcquireSRWLockExclusive((PSRWLOCK)this + 47);
      v27 = (RTL_SRWLOCK *)((char *)this + 376);
      *v5 = 0;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v27);
      TouchKeyboardExperienceManager::GetCurrentInputAppId(v2, (struct _RTL_CRITICAL_SECTION *)&v28.SpinCount);
      if ( *v6 == 3 && v29 )
      {
        v24 = *((_BYTE *)this + 813);
        LODWORD(v26) = *((_DWORD *)this + 201);
        TouchKeyboardExperienceTelemetryLogger::SuspendedInputAppRestart<unsigned int &,unsigned int,bool>(
          (char *)this + 412,
          &v26,
          &v24);
        v16 = (const unsigned __int16 *)std::wstring::c_str(&v28.SpinCount);
        ModalExperienceAsync = TouchKeyboardExperienceManager::TerminateInputApp(
                                 (TouchKeyboardExperienceManager *)v2,
                                 v16);
        v14 = ModalExperienceAsync;
        if ( ModalExperienceAsync < 0 )
        {
          v18 = 1742LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)ModalExperienceAsync);
          wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(&v28.SpinCount, v19);
          goto LABEL_28;
        }
        ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync((TouchKeyboardExperienceManager *)v2);
        v14 = ModalExperienceAsync;
        if ( ModalExperienceAsync < 0 )
        {
          v18 = 1743LL;
          goto LABEL_25;
        }
      }
      wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(&v28.SpinCount, v15);
      goto LABEL_27;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v27);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(&v28, v22);
  return 0LL;
}
