/*
 * XREFs of ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180435E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180433FE0 (--$-0$$V@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@.c)
 *     ??1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435498 (--1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RepositioningView@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18043969C (-RepositioningView@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  _DWORD v10[4]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v11[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::EM_DisplaySettingsChangeActivity((__int64)v11, a2);
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 56LL))(a2, v10);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 775LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_8;
  }
  if ( v10[0] )
  {
    if ( (a3 & 0x3F) != 0 )
    {
      ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::RepositioningView((ToastCenterTelemetry::EM_DisplaySettingsChangeActivity *)v11);
      v6 = CToastCenterExperienceManager::PositionView((CToastCenterExperienceManager *)(a1 - 40));
      v7 = retaddr;
      if ( v6 < 0 )
      {
        v8 = 786LL;
        goto LABEL_7;
      }
    }
  }
LABEL_8:
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v11, 0);
  ToastCenterTelemetry::EM_DisplaySettingsChangeActivity::~EM_DisplaySettingsChangeActivity((ToastCenterTelemetry::EM_DisplaySettingsChangeActivity *)v11);
  return 0LL;
}
