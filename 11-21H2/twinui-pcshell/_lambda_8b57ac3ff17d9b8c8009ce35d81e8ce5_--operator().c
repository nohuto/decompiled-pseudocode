/*
 * XREFs of _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::operator() @ 0x1801B0638
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___::Run @ 0x1801B1200 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18022E59E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x180460E24 (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18046645C (-Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180469948 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

__int64 __fastcall lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::operator()(_QWORD *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *v2; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  TouchKeyboardExperienceManager *v5; // rcx
  const unsigned __int16 *v6; // rdx
  int FrameWrapper; // edi
  int v8; // eax
  _BYTE v10[80]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  v2 = (TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)(a1 + 3);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 3),
    (wil::ActivityThreadWatcher *)v10);
  v3 = 0;
  v13 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), (__int64)&v13);
  v5 = retaddr;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF2B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
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
        TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::Stop(v2, L"Success");
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF3C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
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
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::Stop(v2, v6);
LABEL_14:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v10);
  return v3;
}
