/*
 * XREFs of ?PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4688
 * Callers:
 *     ?PostTransition@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F4630 (-PostTransition@-$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitio.c)
 * Callees:
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z @ 0x180005754 (-Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z.c)
 *     ?reset@?$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800134C8 (-reset@-$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ?Captured@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180042064 (-Captured@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RejuvRotationTimelineReason@23456@@Z @ 0x1800F3D88 (-CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::PostTransition(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *v2; // rcx
  __int64 v3; // r8
  const char *v4; // r9
  __int64 v5; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::Captured(this) )
  {
    *((_BYTE *)v2 + 76) = 1;
    v6 = 1;
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::CreateTimeline(
      v2,
      (const enum winrt::Udwm::Transitions::Private::implementation::RejuvRotationTimelineReason *)&v6,
      v3,
      v4);
    if ( !*((_QWORD *)this + 12)
      && (unsigned int)dword_180141868 > 4
      && tlgKeywordOn((__int64)&dword_180141868, 0x200000000000LL) )
    {
      wil::com_ptr_t<IAnimationFrameStats,wil::err_returncode_policy>::reset((__int64 *)this + 12);
      if ( (int)CAnimationFrameStats::Create((struct IAnimationFrameStats **)this + 12) >= 0 )
      {
        v5 = *((_QWORD *)this + 12);
        *((_DWORD *)this + 26) = 0;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      }
    }
  }
}
