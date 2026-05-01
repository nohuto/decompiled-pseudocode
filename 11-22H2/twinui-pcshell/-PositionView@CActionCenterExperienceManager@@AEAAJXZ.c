/*
 * XREFs of ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180019278
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800195D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1804183E0 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180419818 (-OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800194EC (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180019518 (--$-0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019F64 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x180019FD4 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18001A074 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ??$CurrentWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAM000@Z @ 0x18001A4F0 (--$CurrentWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@Notification.c)
 *     ??$NewWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAM000@Z @ 0x18001A5A4 (--$NewWindowRegionRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCent.c)
 *     ??$ViewExperienceRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAM000@Z @ 0x18001A658 (--$ViewExperienceRect@MMMM@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCente.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5C74 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::PositionView(CActionCenterExperienceManager *this)
{
  int ViewPosition; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  float v6; // xmm9_4
  double v7; // xmm1_8
  float v8; // xmm8_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  __int64 v12; // rdx
  int v13; // [rsp+28h] [rbp-E0h] BYREF
  float right; // [rsp+2Ch] [rbp-DCh] BYREF
  float top; // [rsp+30h] [rbp-D8h] BYREF
  float left; // [rsp+34h] [rbp-D4h] BYREF
  struct tagRECT v17; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v18[320]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::EM_PositionViewActivity(v18);
  if ( *((_QWORD *)this + 19) )
  {
    ViewPosition = CActionCenterExperienceManager::GetViewPosition(this, &v17);
    v3 = ViewPosition;
    if ( ViewPosition < 0 )
    {
      v12 = 1428LL;
    }
    else
    {
      *(float *)&v13 = (float)v17.bottom;
      right = (float)v17.right;
      top = (float)v17.top;
      left = (float)v17.left;
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::ViewExperienceRect<float,float,float,float>(
        &left,
        &top,
        &right,
        &v13);
      ViewPosition = CSingleViewShellExperience::SetPosition(
                       (CActionCenterExperienceManager *)((char *)this + 128),
                       &v17);
      v3 = ViewPosition;
      if ( ViewPosition < 0 )
      {
        v12 = 1430LL;
      }
      else
      {
        LOBYTE(v5) = 3;
        LOBYTE(v4) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
          v4,
          v5);
        v6 = (float)v17.left;
        v7 = *((double *)this + 90);
        v8 = (double)(v17.bottom - v17.top) - v7;
        v9 = (float)(v17.right - v17.left);
        v10 = v7;
        left = v10;
        top = v9;
        right = v8;
        *(float *)&v13 = (float)v17.left;
        ((void (__fastcall *)(int *, float *, float *, float *))NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::NewWindowRegionRect<float,float,float,float>)(
          &v13,
          &right,
          &top,
          &left);
        left = *((float *)this + 179);
        top = *((float *)this + 178);
        right = *((float *)this + 177);
        v13 = *((int *)this + 176);
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::CurrentWindowRegionRect<float,float,float,float>(
          &v13,
          &right,
          &top,
          &left);
        if ( v6 == *((float *)this + 176)
          && v8 == *((float *)this + 177)
          && v9 == *((float *)this + 178)
          && v10 == *((float *)this + 179) )
        {
          goto LABEL_7;
        }
        *((float *)this + 176) = v6;
        *((float *)this + 177) = v8;
        *((float *)this + 178) = v9;
        *((float *)this + 179) = v10;
        if ( *((_DWORD *)this + 42) != 2 )
          goto LABEL_7;
        ViewPosition = CActionCenterExperienceManager::SetWindowRegion(this);
        v3 = ViewPosition;
        if ( ViewPosition >= 0 )
          goto LABEL_7;
        v12 = 1447LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ViewPosition,
      v13);
    goto LABEL_8;
  }
LABEL_7:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v18, 0LL);
  v3 = 0;
LABEL_8:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v18);
  return v3;
}
