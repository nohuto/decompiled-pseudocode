/*
 * XREFs of ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4FA0
 * Callers:
 *     ?HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F56D8 (-HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 *     ?PostTransition@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F5A80 (-PostTransition@-$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5E18 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F68E8 (-UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180048C20 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004A8AC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B688 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x1800B8FA0 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE48C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800F474C (--$as@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementatio.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6890 (-UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tr.c)
 *     ?log@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6DF8 (-log@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F718C (-unconditional_release_ref@-$com_ptr@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$les.c)
 *     ?SetTransitionHandlerResponsive@CGlobalTimeTrackVisual@@QEAAXUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@Z @ 0x1801055FC (-SetTransitionHandlerResponsive@CGlobalTimeTrackVisual@@QEAAXUScreenRotationResponsiveTransition.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DelayNextAnimation(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this,
        const enum winrt::Udwm::Transitions::Private::implementation::ResponsiveRotationTimelineReason *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // ebp
  __int64 v7; // r14
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rax
  _QWORD *v11; // r8
  int v12; // eax
  int v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *v19; // [rsp+80h] [rbp+18h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    *(_QWORD *)&v14 = L"Create delay for first animation";
    *((_QWORD *)&v14 + 1) = 32LL;
    v16 = v14;
    tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::log(
      (char *)this + 104,
      &v16);
    v6 = 300;
    *((_BYTE *)this + 82) = 1;
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x149,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
        a4);
    *(_QWORD *)&v15 = L"Create delay for second animation";
    *((_QWORD *)&v15 + 1) = 33LL;
    v16 = v15;
    tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::log(
      (char *)this + 104,
      &v16);
    v6 = 240;
  }
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UnregisterGlobalTimeChanged(this);
  v7 = *((_QWORD *)this + 7);
  v19 = this;
  v8 = *((_QWORD *)this + 1);
  while ( v8 >= 0 )
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v8 + 1, v8);
    if ( v9 == v8 )
      goto LABEL_10;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u);
LABEL_10:
  winrt::impl::as<winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,0>(
    &v18,
    (__int64)this);
  CGlobalTimeTrackVisual::SetTransitionHandlerResponsive(v7, &v18);
  winrt::com_ptr<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v19);
  v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          120LL);
  v18 = v10;
  if ( v10 )
  {
    CTimelineBase::CTimelineBase(v10, (float)((float)v6 / 1000.0), 0.0, 1.0, 0);
    *v11 = &CTimeline<float>::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=((__int64 *)this + 11, (__int64)v11);
  v12 = CDesktopManager::RegisterForGlobalTimeChangeNotification(*((struct CVisual **)this + 7));
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      342LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
      (const char *)(unsigned int)v12,
      v13);
  *((_DWORD *)this + 21) = *(_DWORD *)a2;
}
