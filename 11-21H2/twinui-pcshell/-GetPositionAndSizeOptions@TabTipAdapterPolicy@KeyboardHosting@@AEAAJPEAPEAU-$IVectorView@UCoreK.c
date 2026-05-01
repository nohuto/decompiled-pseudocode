/*
 * XREFs of ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800C0C40
 * Callers:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180078A2C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18022FC80 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180480500 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x1800C0EE4 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?MonitorInfoUsedForCreatingOptions_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foundation@Windows@@I01I01I_N2@Z @ 0x1800C0F78 (-MonitorInfoUsedForCreatingOptions_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foun.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C13E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800C14F0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x1800C2804 (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x1800C2934 (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18010B3D8 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180480BF0 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
        KeyboardHosting::TabTipAdapterPolicy *this,
        _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int128 v5; // xmm6
  __int128 v6; // xmm7
  __int128 v7; // xmm8
  unsigned __int64 v8; // rcx
  __int128 v9; // xmm9
  __int128 v10; // xmm10
  __int128 v11; // xmm11
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // rax
  int ForegroundAppRect; // eax
  __int128 v20; // xmm0
  char v21; // al
  __int128 v22; // xmm1
  __int64 v23; // rcx
  __int128 v24; // xmm0
  int PositionAndSizeOptions; // ebx
  HMONITOR v27; // rax
  __int64 v28; // rdx
  const char *v29; // r9
  int v30; // [rsp+28h] [rbp-E0h]
  unsigned int v31; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD pt[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v33; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  *a2 = 0LL;
  v3 = (__int64)a2;
  LOBYTE(a2) = 1;
  v4 = *((_BYTE *)this + 500) != 0 ? 0x30 : 0;
  v5 = *(_OWORD *)((char *)this + v4 + 232);
  v6 = *(_OWORD *)((char *)this + v4 + 248);
  v7 = *(_OWORD *)((char *)this + v4 + 264);
  v8 = -(__int64)(*((_BYTE *)this + 448) != 0) & 0xFFFFFFFFFFFFFFA0uLL;
  v9 = *(_OWORD *)((char *)this + v8 + 328);
  v10 = *(_OWORD *)((char *)this + v8 + 344);
  v11 = *(_OWORD *)((char *)this + v8 + 360);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::GetImpl'::`2'::impl,
    a2);
  v12 = *((_QWORD *)this + 35);
  v13 = *((_QWORD *)this + 41);
  v14 = *((_QWORD *)this + 29);
  v17 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
                       v15,
                       _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_)
                   + 8);
  if ( v17 && *v17 )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v17,
      _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions_(
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 288),
      v14,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 240),
      *((_DWORD *)this + 68),
      v13,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 336),
      *((_DWORD *)this + 92),
      v12,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 288),
      *((_DWORD *)this + 80),
      *((_BYTE *)this + 500),
      *((_BYTE *)this + 448));
  }
  v18 = *((_QWORD *)this + 27);
  LOBYTE(v16) = 1;
  *(_OWORD *)(v18 + 40) = v5;
  *(_OWORD *)(v18 + 88) = v9;
  *(_OWORD *)(v18 + 56) = v6;
  *(_OWORD *)(v18 + 104) = v10;
  *(_OWORD *)(v18 + 72) = v7;
  *(_OWORD *)(v18 + 120) = v11;
  *(_OWORD *)(v18 + 136) = *(_OWORD *)((char *)this + 328);
  *(_OWORD *)(v18 + 152) = *(_OWORD *)((char *)this + 344);
  *(_OWORD *)(v18 + 168) = *(_OWORD *)((char *)this + 360);
  v31 = *((_DWORD *)this + 153);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    v16);
  KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(this, v31);
  if ( !*(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                (char *)this + 464,
                                &v34,
                                &v31)
                 + 40LL) )
    goto LABEL_5;
  KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(this, (struct Windows::Foundation::Point *)&v33, v31);
  LODWORD(pt[1]) = (int)*(float *)&v33;
  HIDWORD(pt[1]) = (int)*((float *)&v33 + 1);
  v27 = MonitorFromPoint((POINT)pt[1], 2u);
  if ( !v27 )
  {
    PositionAndSizeOptions = -2147418113;
    v28 = 1155LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    return (unsigned int)PositionAndSizeOptions;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v27, &mi) )
  {
LABEL_5:
    *(_OWORD *)&pt[1] = 0LL;
    ForegroundAppRect = KeyboardHosting::ViewRectHelper::GetForegroundAppRect((struct Windows::Foundation::Rect *)&pt[1]);
    if ( ForegroundAppRect < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48A,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)ForegroundAppRect);
    v20 = *(_OWORD *)&pt[1];
    v21 = *((_BYTE *)this + 509);
    v22 = *((_OWORD *)this + 9);
    v23 = *((_QWORD *)this + 27);
    *((_OWORD *)this + 12) = *(_OWORD *)&pt[1];
    *(_OWORD *)&pt[1] = v20;
    v24 = *((_OWORD *)this + 11);
    LOBYTE(v30) = v21;
    v34 = v22;
    v33 = v24;
    PositionAndSizeOptions = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
                               v23,
                               (unsigned int)&v34,
                               (unsigned int)&v33,
                               (unsigned int)&pt[1],
                               v30,
                               v3);
    if ( PositionAndSizeOptions >= 0 )
      return 0LL;
    v28 = 1165LL;
    goto LABEL_12;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x486,
           (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
           v29);
}
