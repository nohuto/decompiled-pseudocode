/*
 * XREFs of ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8624
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800AB8F0 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800E8260 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800E877C (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800E882C (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800E8FF8 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800E9150 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartRightTap(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r8
  int v8; // eax
  unsigned int v9; // r9d
  __int64 v10; // rax
  CTouchPressHoldVisual *v11; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *(_DWORD *)(v5 + 332) = 0;
  *(_QWORD *)(v5 + 308) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v5);
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  if ( v6 )
  {
    CTimelineBase::CTimelineBase(v6, 0.1500000059604645, 1.0, 0.0, 0);
    *v7 = &CTimeline<float>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 43) = v7;
  if ( v7 )
  {
    v8 = CTouchVisual::RegisterGlobalTimer(this);
    if ( v8 >= 0 )
    {
      CTouchPressHoldVisual::SetETWAnimation((__int64)this, 2);
      return 0LL;
    }
    v9 = 101;
  }
  else
  {
    v8 = -2147024882;
    v9 = 99;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9);
  CTouchPressHoldVisual::StopAllTimelines(this);
  v10 = *(_QWORD *)((char *)this + 316);
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 83) = 0;
  *(_QWORD *)((char *)this + 324) = v10;
  CTouchPressHoldVisual::UpdateOpacityAndLocation(v11);
  return 0LL;
}
