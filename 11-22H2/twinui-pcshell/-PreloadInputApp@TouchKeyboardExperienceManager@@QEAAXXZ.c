/*
 * XREFs of ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1805154A0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z @ 0x1800AD5D0 (-OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputPro.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_825306615c33696f43f5a813d6c29089___ @ 0x180205B70 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_825306615c33696f43f5a813d6c29089___.c)
 *     _lambda_825306615c33696f43f5a813d6c29089_::_lambda_825306615c33696f43f5a813d6c29089_ @ 0x1802064E0 (_lambda_825306615c33696f43f5a813d6c29089_--_lambda_825306615c33696f43f5a813d6c29089_.c)
 *     _lambda_825306615c33696f43f5a813d6c29089_::__lambda_825306615c33696f43f5a813d6c29089_ @ 0x180206764 (_lambda_825306615c33696f43f5a813d6c29089_--__lambda_825306615c33696f43f5a813d6c29089_.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DAA0A (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??$?0$$V@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180507FF4 (--$-0$$V@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integral_cons.c)
 */

void __fastcall TouchKeyboardExperienceManager::PreloadInputApp(TouchKeyboardExperienceManager *this, char a2)
{
  __int64 *v3; // rax
  int v4; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // r8
  int v11; // ebx
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v14[320]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15[42]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::OnPreloadInputAppActivity((__int64)v14, a2);
  if ( *((_QWORD *)this + 73) )
  {
    v12 = 0LL;
    v13 = &v12;
    v3 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v13);
    v4 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v3);
    if ( v4 >= 0 )
    {
      v13 = (__int64 *)this;
      v7 = lambda_825306615c33696f43f5a813d6c29089_::_lambda_825306615c33696f43f5a813d6c29089_(
             v15,
             &v12,
             (__int64 *)&v13,
             (__int64)v14);
      v11 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_825306615c33696f43f5a813d6c29089___(
              v9,
              v8,
              v10,
              v7);
      lambda_825306615c33696f43f5a813d6c29089_::__lambda_825306615c33696f43f5a813d6c29089_(v15);
      if ( v11 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
        goto LABEL_8;
      }
      v5 = (unsigned int)v11;
      v6 = 1612LL;
    }
    else
    {
      v5 = (unsigned int)v4;
      v6 = 1581LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v5);
    goto LABEL_7;
  }
LABEL_8:
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v14);
}
