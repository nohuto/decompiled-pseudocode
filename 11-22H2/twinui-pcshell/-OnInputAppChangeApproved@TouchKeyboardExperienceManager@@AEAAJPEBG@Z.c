/*
 * XREFs of ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180514850
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18020A408 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802DA566 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C3A8 (--1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXPEA_N@Z @ 0x18050EADC (-ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXPEA_N@Z.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18050EFD4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z @ 0x180515EFC (-SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180517254 (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N00@Z @ 0x180517D70 (-Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N00@Z.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18051B528 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2)
{
  bool v4; // r14
  bool v5; // r15
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  int ModalExperienceAsync; // eax
  unsigned int v11; // esi
  const char *v12; // r9
  __int64 result; // rax
  bool v14[4]; // [rsp+20h] [rbp-198h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-194h]
  struct _RTL_CRITICAL_SECTION v16; // [rsp+28h] [rbp-190h] BYREF
  _QWORD v17[40]; // [rsp+50h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"InputAppActivationRequested");
  v17[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17,
    a2);
  try
  {
    v4 = 0;
    v14[0] = 0;
    v5 = 0;
    TouchKeyboardExperienceManager::GetCurrentInputAppId(this, &v16);
    if ( v16.OwningThread )
    {
      v4 = 1;
      DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&v16;
      if ( v16.LockSemaphore >= (HANDLE)8 )
        DebugInfo = v16.DebugInfo;
      if ( (unsigned int)_o__wcsicmp(DebugInfo, a2) )
      {
        TouchKeyboardExperienceManager::ClearViewInfos((RTL_SRWLOCK *)this, v14);
        v5 = 1;
        v7 = (PRTL_CRITICAL_SECTION_DEBUG)&v16;
        if ( v16.LockSemaphore >= (HANDLE)8 )
          v7 = v16.DebugInfo;
        v8 = TouchKeyboardExperienceManager::TerminateInputApp((TouchKeyboardExperienceManager *)this, &v7->Type);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2F9,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
      }
    }
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    if ( v9
      && (TouchKeyboardExperienceManager::SetCurrentInputAppId((TouchKeyboardExperienceManager *)this, a2),
          ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync(this),
          v11 = ModalExperienceAsync,
          ModalExperienceAsync < 0) )
    {
      LOBYTE(this[25].RecursionCount) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x302,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ModalExperienceAsync);
      std::wstring::_Tidy_deallocate((__int64)&v16);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17);
      result = v11;
    }
    else
    {
      std::wstring::_Tidy_deallocate((__int64)&v16);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::Stop(
        (TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17,
        v4,
        v14[0],
        v5);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    v15 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x305,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            v12);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v17);
    return v15;
  }
  return result;
}
