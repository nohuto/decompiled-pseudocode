/*
 * XREFs of _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::operator() @ 0x1801B09E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___::Run @ 0x1801B1240 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18022E59E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x18022F068 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18045D75C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x180460E24 (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x180460F6C (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180461AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1804666CC (-Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180469948 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x180469E3C (-UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::operator()(_QWORD *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *v2; // r14
  int v3; // eax
  TouchKeyboardExperienceManager *v4; // rcx
  const unsigned __int16 *v5; // rdx
  int FrameWrapper; // edi
  struct IApplicationFrameWrapper *v7; // rbx
  int ViewInfo; // eax
  __int64 v9; // rdx
  std::_Ref_count_base *v11; // r15
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v13[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IApplicationFrameWrapper *v15; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF

  v2 = (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 5);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 5),
    (wil::ActivityThreadWatcher *)v13);
  v16 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 3), (__int64)&v16);
  v4 = retaddr;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE7C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( v16 )
  {
    if ( !TouchKeyboardExperienceManager::IsFrameReady(v4, (struct IApplicationFrame *)*a1) )
    {
      v5 = L"FrameNotReady";
      goto LABEL_7;
    }
    v15 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[4], *a1, &v15);
    if ( FrameWrapper < 0 )
    {
LABEL_23:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
      goto LABEL_24;
    }
    *(_OWORD *)v12 = 0LL;
    v7 = v15;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(a1[4], v15, v12);
    FrameWrapper = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v9 = 3726LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
LABEL_21:
      if ( v12[1] )
        std::_Ref_count_base::_Decref(v12[1]);
      goto LABEL_23;
    }
    if ( a1[1] == ApplicationFrameCloseCommand && a1[2] == 0x575B26E93947F081LL )
    {
      ViewInfo = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v7 + 40LL))(v7, 1LL);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v9 = 3731LL;
        goto LABEL_31;
      }
      *((_BYTE *)v12[0] + 34) = 1;
      ViewInfo = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
                   (TouchKeyboardExperienceManager *)a1[4],
                   *(_DWORD *)(a1[4] + 764LL),
                   0,
                   1);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v9 = 3733LL;
        goto LABEL_31;
      }
    }
    else if ( a1[1] == ApplicationFrameEnteredSizeMoveCommand && a1[2] == 0xE7CB35A4FECBF2AEuLL )
    {
      TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        (TouchKeyboardExperienceManager *)a1[4],
        *((_DWORD *)v12[0] + 26),
        1);
    }
    else if ( a1[1] == ApplicationFrameExitedSizeMoveCommand && a1[2] == 0x789E03E893229A8ALL )
    {
      v11 = v12[0];
      ViewInfo = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
                   (struct IApplicationFrame *)*a1,
                   v7,
                   *((_BYTE *)v12[0] + 155));
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v9 = 3741LL;
        goto LABEL_31;
      }
      TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        (TouchKeyboardExperienceManager *)a1[4],
        *((_DWORD *)v11 + 26),
        0);
      ViewInfo = TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
                   (TouchKeyboardExperienceManager *)a1[4],
                   (struct IApplicationFrame *)*a1);
      FrameWrapper = ViewInfo;
      if ( ViewInfo < 0 )
      {
        v9 = 3743LL;
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
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v13);
  return (unsigned int)FrameWrapper;
}
