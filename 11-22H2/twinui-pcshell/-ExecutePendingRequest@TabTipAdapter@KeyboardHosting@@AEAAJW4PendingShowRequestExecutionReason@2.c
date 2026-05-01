/*
 * XREFs of ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1805224B0
 * Callers:
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802DD722 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x1805258B0 (-OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180525D5C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800AC874 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFF20 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlKeyboardLogon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011651C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlKeyboardLogon@@@details@wil@@QEAAX_NW.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DCD76 (--1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180528A64 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_180528A64.c)
 *     ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0II@Z @ 0x18052B66C (-StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeybo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecutePendingRequest(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int v5; // r12d
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  int v15; // esi
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rdx
  int v19; // edx
  int v20; // eax
  char v22; // [rsp+3Ch] [rbp-CCh]
  __int64 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v4 = (RTL_SRWLOCK *)(a1 + 400);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 400));
  v23 = *(_QWORD *)(a1 + 376);
  v5 = *(_DWORD *)(a1 + 384);
  *(_WORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 380) = 0;
  *(_DWORD *)(a1 + 384) = 11;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlKeyboardLogon>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlKeyboardLogon>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  v8 = *(_QWORD *)(a1 + 472);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v9 = -1;
  if ( BYTE4(v8) )
    v9 = v8;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"PendingRequestExecuted");
  v24[0] = (__int64)&TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::`vftable';
  LOBYTE(v10) = BYTE1(v23);
  LOBYTE(v11) = v23;
  TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity(v24, v11, v5, v10, a2, v9, v8);
  if ( (_BYTE)v23 )
  {
    if ( BYTE1(v23) )
    {
      v14 = 10LL;
      if ( a2 )
      {
        v15 = a2 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            v14 = 4LL;
        }
        else
        {
          v14 = 3LL;
        }
      }
      else
      {
        v14 = 2LL;
      }
      v16 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v5, HIDWORD(v23), v14);
      v17 = v16;
      if ( v16 < 0 )
      {
        v18 = 1565LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_22;
      }
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, HIDWORD(v23), v5);
      v17 = v16;
      if ( v16 < 0 )
      {
        v18 = 1569LL;
        goto LABEL_17;
      }
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlKeyboardLogon>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlKeyboardLogon>::GetImpl'::`2'::impl,
    1u,
    v12,
    v13);
  if ( v22 )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 640LL))(
            *(_QWORD *)(a1 + 32),
            (unsigned int)v8);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x629,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v20);
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v24, v19);
  v17 = 0;
LABEL_22:
  TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::~PendingRequestExecuted((TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted *)v24);
  return v17;
}
