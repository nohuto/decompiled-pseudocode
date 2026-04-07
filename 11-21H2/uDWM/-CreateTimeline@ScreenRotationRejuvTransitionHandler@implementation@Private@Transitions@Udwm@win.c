/*
 * XREFs of ?CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RejuvRotationTimelineReason@23456@@Z @ 0x1800F3D88
 * Callers:
 *     ?OnAnimationComplete@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800F44A0 (-OnAnimationComplete@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4688 (-PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x18005CD98 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180094560 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800F26D4 (--$as@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementation@234.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5680 (-UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transit.c)
 *     ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208 (-log@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV-$basic_strin.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F6D68 (-unconditional_release_ref@-$com_ptr@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$les.c)
 *     ?SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@Z @ 0x1801002B4 (-SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationRejuvTransitionHandler@Private.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::CreateTimeline(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this,
        const enum winrt::Udwm::Transitions::Private::implementation::RejuvRotationTimelineReason *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // ebp
  const wchar_t *v7; // rax
  __int64 v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rax
  _QWORD *v12; // r8
  int v13; // eax
  int v14; // [rsp+20h] [rbp-48h]
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *v19; // [rsp+80h] [rbp+18h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    v6 = 400;
    v7 = L"Create first timeline delay";
    *((_QWORD *)&v15 + 1) = 27LL;
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        121LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
        a4);
    v6 = 100;
    v7 = L"Create second timeline delay";
    *((_QWORD *)&v15 + 1) = 28LL;
  }
  *(_QWORD *)&v15 = v7;
  v16 = v15;
  tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::log((char *)this + 136, &v16);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UnregisterGlobalTimeChanged(this);
  v8 = *((_QWORD *)this + 6);
  v19 = this;
  v9 = *((_QWORD *)this + 1);
  while ( v9 >= 0 )
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v9 + 1, v9);
    if ( v10 == v9 )
      goto LABEL_10;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v9 + 24), 1u);
LABEL_10:
  winrt::impl::as<winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,0>(
    &v18,
    (__int64)this);
  CGlobalTimeTrackVisual::SetTransitionHandler(v8, &v18);
  winrt::com_ptr<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v19);
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  v18 = v11;
  if ( v11 )
  {
    CTimelineBase::CTimelineBase(v11, (float)((float)v6 / 1000.0), 0.0, 1.0, 0);
    *v12 = &CTimeline<float>::`vftable';
  }
  else
  {
    v12 = 0LL;
  }
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=((__int64 *)this + 10, (__int64)v12);
  v13 = CDesktopManager::RegisterForGlobalTimeChangeNotification(*((struct CVisual **)this + 6));
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      133LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)v13,
      v14);
  *((_DWORD *)this + 22) = *(_DWORD *)a2;
}
