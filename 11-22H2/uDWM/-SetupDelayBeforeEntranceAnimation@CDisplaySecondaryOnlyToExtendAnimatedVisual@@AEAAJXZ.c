/*
 * XREFs of ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF520
 * Callers:
 *     ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z @ 0x1800BEEF0 (-OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z.c)
 * Callees:
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180047CA4 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004A8AC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x1800B8FA0 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         120LL);
  if ( v2 )
  {
    CTimelineBase::CTimelineBase(v2, 1.5, 0.0, 1.0, 0);
    *v3 = &CTimeline<float>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=((__int64 *)this + 58, (__int64)v3);
  if ( !*v4 )
  {
    v5 = -2147024882;
    v6 = 338LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  *((_BYTE *)this + 434) = 1;
  v5 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  if ( v5 < 0 )
  {
    v6 = 339LL;
    goto LABEL_6;
  }
  return 0LL;
}
