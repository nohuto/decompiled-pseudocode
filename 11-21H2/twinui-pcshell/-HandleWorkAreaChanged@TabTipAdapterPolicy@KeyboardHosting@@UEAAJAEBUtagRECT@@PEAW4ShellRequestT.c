/*
 * XREFs of ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BE2F0
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x1800BC0B0 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1800BE260 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1800BE420 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ??$HandleWorkAreaChanged@AEBJAEBJAEBJAEBJAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEBJ000AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800C0230 (--$HandleWorkAreaChanged@AEBJAEBJAEBJAEBJAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Tou.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C13E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEA.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __m128i *a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __m128i *v3; // rbx
  int updated; // eax
  unsigned int v7; // edi
  unsigned __int64 v8; // xmm1_8
  unsigned __int64 v9; // r8
  int v10; // eax
  HMONITOR CurrentMonitorWithRect; // rax
  HMONITOR v12; // rdi
  __m128i v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  v3 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::GetImpl'::`2'::impl,
    a2);
  updated = UpdateScalingInfoCache();
  v7 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A1,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
    return v7;
  }
  else
  {
    v8 = _mm_srli_si128(*v3, 8).m128i_u64[0];
    v9 = HIDWORD(v3->m128i_i64[0]);
    v10 = v8 - v3->m128i_i64[0] + 1;
    *(float *)v14.m128i_i32 = (float)(int)v3->m128i_i64[0];
    *(float *)&v14.m128i_i32[1] = (float)(int)v9;
    *(float *)&v14.m128i_i32[2] = (float)v10;
    *(float *)&v14.m128i_i32[3] = (float)(HIDWORD(v8) - (int)v9 + 1);
    CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v14);
    v12 = CurrentMonitorWithRect;
    if ( CurrentMonitorWithRect )
    {
      *((_QWORD *)this + 27) = CurrentMonitorWithRect;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 216));
      if ( v12 == *((HMONITOR *)this + 39) )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 312));
      if ( v12 == *((HMONITOR *)this + 33) )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 264));
    }
    *(_DWORD *)a3 = 3;
    TouchKeyboardExperienceTelemetryLogger::HandleWorkAreaChanged<long const &,long const &,long const &,long const &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      (_DWORD)v3,
      (_DWORD)v3 + 4,
      (_DWORD)v3 + 8,
      (_DWORD)v3 + 12,
      (__int64)a3);
    return 0LL;
  }
}
