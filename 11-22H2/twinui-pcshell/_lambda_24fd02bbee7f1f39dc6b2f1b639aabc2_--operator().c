/*
 * XREFs of _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::operator() @ 0x180206E60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___::Run @ 0x18020B8A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801D8F2C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802DB10E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1802DBDAE (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180518500 (-Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051B7D8 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::operator()(_QWORD *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *v2; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  TouchKeyboardExperienceManager *v5; // rcx
  const unsigned __int16 *v6; // rdx
  int FrameWrapper; // edi
  int v8; // eax
  _BYTE v10[80]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  struct IInspectable *v13; // [rsp+88h] [rbp+10h] BYREF

  v2 = (TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)(a1 + 3);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 3),
    (wil::ActivityThreadWatcher *)v10);
  v3 = 0;
  v13 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), &v13);
  v5 = retaddr;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( v13 )
  {
    if ( !TouchKeyboardExperienceManager::IsFrameReady(v5, (struct IApplicationFrame *)*a1) )
    {
      v6 = L"FrameNotReady";
      goto LABEL_7;
    }
    v12 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[2], *a1, &v12);
    if ( FrameWrapper >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12);
      FrameWrapper = v8;
      if ( v8 >= 0 )
      {
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(v2, L"Success");
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    v3 = FrameWrapper;
LABEL_13:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
    goto LABEL_14;
  }
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
  v6 = L"TouchKeyboardExperienceManagerDestroyed";
LABEL_7:
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(v2, v6);
LABEL_14:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v10);
  return v3;
}
