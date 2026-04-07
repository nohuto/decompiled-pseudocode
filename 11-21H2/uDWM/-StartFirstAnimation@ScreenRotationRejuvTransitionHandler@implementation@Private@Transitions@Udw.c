/*
 * XREFs of ?StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4CE8
 * Callers:
 *     ?OnGlobalTimeUpdated@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationRejuvTransitionHandler@3456@@impl@winrt@@UEAAHXZ @ 0x1800F4590 (-OnGlobalTimeUpdated@-$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Tran.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireAnimationEngine@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEBA?AV?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800F3940 (-AcquireAnimationEngine@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 *     ?PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4938 (-PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transition.c)
 *     ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208 (-log@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartFirstAnimation(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rcx
  int started; // eax
  int v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-40h]
  _QWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]
  int v12; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  CAnimationEngine *v14; // [rsp+70h] [rbp+10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+18h] BYREF

  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::PrepareForFirstAnimation(this);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::AcquireAnimationEngine(
    (__int64)this,
    &v14);
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v15 = *((_QWORD *)this + 7);
  v2 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v9, 8u, 1, &v15);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xC0u);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      305LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)v3,
      v7);
  v4 = *((_QWORD *)this + 7);
  *(_DWORD *)(v4 + 736) = *((_DWORD *)this + 23);
  *(_DWORD *)(v4 + 740) = 1;
  started = CAnimationEngine::ScheduleStartAnimation(
              v14,
              *((_DWORD *)this + 23),
              (__int64)&v9,
              (unsigned int *)this + 16);
  if ( started < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      310LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)started,
      v7);
  v6 = CAnimationEngine::RegisterForAnimationCompleteNotification(
         v14,
         (winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)((char *)this + 32));
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      311LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)v6,
      v7);
  v8[0] = L"Start first animation";
  v8[1] = 21LL;
  tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::log((char *)this + 136, v8);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v9);
  if ( v14 )
    CAnimationEngine::Release(v14);
}
