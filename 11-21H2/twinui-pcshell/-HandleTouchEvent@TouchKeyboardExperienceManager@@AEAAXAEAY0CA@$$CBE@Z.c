/*
 * XREFs of ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x18022E902
 * Callers:
 *     wistd::__function::__func__lambda_f51ee66792c40547a3e17f36c2d0d877__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x18022E1B0 (wistd--__function--__func__lambda_f51ee66792c40547a3e17f36c2d0d877__void___cdecl(un_ea_18022E1B0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BE054 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wi.c)
 *     ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x18022DCAE (--$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18022F548 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPEAKPEA_N5@Z @ 0x18023A51C (-s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPE.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleTouchEvent(
        TouchKeyboardExperienceManager *this,
        const unsigned __int8 (*a2)[32],
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned int v12; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  int v16; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  bool v18; // [rsp+90h] [rbp+20h] BYREF
  bool v19; // [rsp+98h] [rbp+28h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  CNotificationData::s_UnpackTouchEvent(
    a2,
    (enum IhmNotification::TouchEventSource *)&v10,
    &v11,
    &v13,
    &v12,
    &v19,
    &v18);
  v6 = v10;
  TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>(&v10, &v19, (char *)&v18);
  v7 = *((_QWORD *)this + 92);
  if ( v7 )
  {
    v8 = 0;
    if ( v6 <= 1 )
    {
      v8 = v18 ? 16 : 2;
    }
    else if ( v6 == 4 )
    {
      if ( v11 - 256 > 9 )
      {
        if ( v11 == 514 || v11 == 517 )
          v8 = 1;
      }
      else
      {
        v8 = 4;
      }
    }
    LODWORD(v13) = v8;
    v15 = v13;
    v16 = v14;
    v9 = KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(v7, &v15);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18CE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
}
