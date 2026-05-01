/*
 * XREFs of _lambda_259a1410ba958232e2f70f54c5d031d1_::operator() @ 0x180207090
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___::Run @ 0x18020B8E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801D8F2C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802DB10E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB2A6 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1802DBDAE (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x1805133E8 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180513744 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180514044 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180518298 (-Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051B7D8 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18051BD7C (-UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_259a1410ba958232e2f70f54c5d031d1_::operator()(_QWORD *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *v2; // r14
  int v3; // eax
  TouchKeyboardExperienceManager *v4; // rcx
  const unsigned __int16 *v5; // rdx
  int FrameWrapper; // edi
  struct IApplicationFrameWrapper *v7; // rbx
  int ViewInfo; // eax
  __int64 v9; // rdx
  bool v10; // r8
  std::_Ref_count_base *v12; // r15
  std::_Ref_count_base *v13[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IApplicationFrameWrapper *v16; // [rsp+B0h] [rbp+30h] BYREF
  struct IInspectable *v17; // [rsp+B8h] [rbp+38h] BYREF

  v2 = (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 5);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 5),
    (wil::ActivityThreadWatcher *)v14);
  v17 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 3), &v17);
  v4 = retaddr;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDE7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( v17 )
  {
    if ( !TouchKeyboardExperienceManager::IsFrameReady(v4, (struct IApplicationFrame *)*a1) )
    {
      v5 = L"FrameNotReady";
      goto LABEL_7;
    }
    v16 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[4], *a1, &v16);
    if ( FrameWrapper < 0 )
    {
LABEL_23:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v16);
      goto LABEL_24;
    }
    *(_OWORD *)v13 = 0LL;
    v7 = v16;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(a1[4], v16, v13);
    FrameWrapper = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v9 = 3577LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
LABEL_21:
      if ( v13[1] )
        std::_Ref_count_base::_Decref(v13[1]);
      goto LABEL_23;
    }
    if ( a1[1] == ApplicationFrameCloseCommand && a1[2] == 0x575B26E93947F081LL )
    {
      ViewInfo = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v7 + 40LL))(v7, 1LL);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v9 = 3582LL;
        goto LABEL_31;
      }
      TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
        (TouchKeyboardExperienceManager *)a1[4],
        v13[0],
        1);
      ViewInfo = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
                   (TouchKeyboardExperienceManager *)a1[4],
                   *(_DWORD *)(a1[4] + 612LL),
                   v10,
                   1);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v9 = 3584LL;
        goto LABEL_31;
      }
    }
    else if ( a1[1] == ApplicationFrameEnteredSizeMoveCommand && a1[2] == 0xE7CB35A4FECBF2AEuLL )
    {
      TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        (TouchKeyboardExperienceManager *)a1[4],
        *((_DWORD *)v13[0] + 26),
        1);
    }
    else if ( a1[1] == ApplicationFrameExitedSizeMoveCommand && a1[2] == 0x789E03E893229A8ALL )
    {
      v12 = v13[0];
      ViewInfo = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
                   (struct IApplicationFrame *)*a1,
                   v7,
                   *((_BYTE *)v13[0] + 155));
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v9 = 3592LL;
        goto LABEL_31;
      }
      TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        (TouchKeyboardExperienceManager *)a1[4],
        *((_DWORD *)v12 + 26),
        0);
      ViewInfo = TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
                   (TouchKeyboardExperienceManager *)a1[4],
                   (struct IApplicationFrame *)*a1);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v9 = 3594LL;
        goto LABEL_31;
      }
    }
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(v2, L"Success");
    FrameWrapper = 0;
    goto LABEL_21;
  }
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
  v5 = L"TouchKeyboardExperienceManagerDestroyed";
LABEL_7:
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(v2, v5);
  FrameWrapper = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v14);
  return (unsigned int)FrameWrapper;
}
