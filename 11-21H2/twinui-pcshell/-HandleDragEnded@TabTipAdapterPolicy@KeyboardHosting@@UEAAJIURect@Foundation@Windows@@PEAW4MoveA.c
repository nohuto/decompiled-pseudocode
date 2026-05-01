/*
 * XREFs of ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x1804812F0
 * Callers:
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180472EA8 (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1800BE420 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ShouldSaveLastFloatingPosition @ 0x180230064 (ShouldSaveLastFloatingPosition.c)
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@11$$QEAI2@Z @ 0x18047F31C (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTe.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x180480340 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180480998 (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180482B2C (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x180482FA4 (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDragEnded(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 *a6,
        RTL_SRWLOCK *a7)
{
  struct Windows::Foundation::Rect *v9; // rsi
  RTL_SRWLOCK *v10; // r15
  RTL_SRWLOCK *v11; // rbx
  HMONITOR CurrentMonitor; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  HMONITOR v15; // rbx
  KeyboardHosting::MonitorInformation *v16; // rcx
  KeyboardHosting::MonitorInformation *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  __m128i v21; // [rsp+38h] [rbp-31h] BYREF
  _OWORD v22[2]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v23; // [rsp+68h] [rbp-1h]
  __int128 v24; // [rsp+78h] [rbp+Fh]
  unsigned int v25; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+47h]
  unsigned int v27; // [rsp+C0h] [rbp+57h] BYREF

  v27 = a2;
  v9 = (struct Windows::Foundation::Rect *)a6;
  *(_OWORD *)a6 = *a3;
  *a4 = 0;
  *a5 = 0;
  v10 = a7;
  LODWORD(a7->Ptr) = 0;
  v11 = (RTL_SRWLOCK *)(a1 + 440);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 440));
  a7 = v11;
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    (_QWORD *)(a1 + 376),
    &a6,
    (const unsigned __int8 *)&v27);
  if ( a6 == *(__int64 **)(a1 + 384) )
  {
LABEL_16:
    LODWORD(a6) = v10->Ptr;
    LODWORD(a5) = *(_DWORD *)(a1 + 272);
    TouchKeyboardExperienceTelemetryLogger::HandleDragEnded<unsigned int &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned int,unsigned int>(
      &v27,
      v9,
      (struct Windows::Foundation::Rect *)(a1 + 176),
      (struct Windows::Foundation::Rect *)(a1 + 240),
      (unsigned int *)&a5,
      (unsigned int *)&a6);
    v19 = 0;
    goto LABEL_17;
  }
  v22[0] = *(_OWORD *)((char *)a6 + 20);
  v22[1] = *(_OWORD *)((char *)a6 + 36);
  v23 = *(_OWORD *)((char *)a6 + 52);
  v24 = *(_OWORD *)((char *)a6 + 68);
  v25 = *((_DWORD *)a6 + 21);
  v21 = *(__m128i *)v9;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v25, &v21);
  v15 = CurrentMonitor;
  v16 = (KeyboardHosting::MonitorInformation *)(a1 + 232);
  if ( *(HMONITOR *)(a1 + 232) != CurrentMonitor )
  {
    *(_QWORD *)v16 = CurrentMonitor;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v16);
  }
  if ( *(_BYTE *)(a1 + 500) )
  {
    v17 = (KeyboardHosting::MonitorInformation *)(a1 + 280);
    if ( *(HMONITOR *)(a1 + 280) != v15 )
    {
      *(_QWORD *)v17 = v15;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v17);
    }
  }
  LODWORD(v10->Ptr) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v13,
    v14);
  if ( !ShouldSaveLastFloatingPosition((__int64)v22 + 4) )
  {
LABEL_12:
    if ( DWORD1(v22[0]) == 2 && WORD6(v23) )
    {
      *(_DWORD *)(a1 + 452) = *(_DWORD *)v9;
      *(_DWORD *)(a1 + 456) = *((_DWORD *)v9 + 1);
      *(_BYTE *)(a1 + 460) = 1;
      *(_DWORD *)(a1 + 496) = a2;
    }
    *(_BYTE *)(a1 + 448) = 1;
    goto LABEL_16;
  }
  a6 = *(__int64 **)v9;
  v18 = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
          (KeyboardHosting::TabTipAdapterPolicy *)a1,
          (const struct Windows::Foundation::Point *)&a6,
          a2);
  v19 = v18;
  if ( v18 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 500) )
      KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (const struct Windows::Foundation::Point *)&a6);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x160,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
    (const char *)(unsigned int)v18);
LABEL_17:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&a7);
  return v19;
}
