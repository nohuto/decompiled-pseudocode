/*
 * XREFs of ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x1802DB392
 * Callers:
 *     wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x1802DAC30 (wistd--__function--__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(un_ea_1802DAC30.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x1802DA11E (--$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1802DD7D6 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPEAKPEA_N5@Z @ 0x1802EC166 (-s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPE.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleTouchEvent(
        TouchKeyboardExperienceManager *this,
        const unsigned __int8 (*a2)[32])
{
  unsigned int v3; // edi
  __int64 v4; // r8
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  int v13; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  bool v15; // [rsp+90h] [rbp+20h] BYREF
  bool v16; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+38h] BYREF

  CNotificationData::s_UnpackTouchEvent(a2, (enum IhmNotification::TouchEventSource *)&v17, &v8, &v10, &v9, &v16, &v15);
  v3 = v17;
  TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>((int *)&v17, &v16, (char *)&v15);
  v4 = *((_QWORD *)this + 73);
  if ( v4 )
  {
    v5 = 0;
    if ( v3 <= 1 )
    {
      v5 = v15 ? 16 : 2;
    }
    else if ( v3 == 4 )
    {
      if ( v8 - 256 > 9 )
      {
        if ( v8 == 514 || v8 == 517 )
          v5 = 1;
      }
      else
      {
        v5 = 4;
      }
    }
    LODWORD(v10) = v5;
    v12 = v10;
    v13 = v11;
    v6 = KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(v4, &v12);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1800,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    {
      v7 = *((_QWORD *)this + 277);
      if ( v7 )
      {
        AcquireSRWLockExclusive(*((PSRWLOCK *)this + 277));
        *(_BYTE *)(v7 + 8) = v5 == 16;
        *(_BYTE *)(v7 + 16) |= v5 == 2;
        ReleaseSRWLockExclusive((PSRWLOCK)v7);
      }
    }
  }
}
