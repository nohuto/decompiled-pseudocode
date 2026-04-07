/*
 * XREFs of ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8480
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

__int64 __fastcall CTouchPressHoldVisual::StartHold(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  _QWORD *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // r8
  int v7; // eax
  unsigned int v8; // r9d
  __int64 v9; // rax
  _QWORD *v10; // r8
  CTouchPressHoldVisual *v11; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  *(_QWORD *)(v4 + 308) = *v3;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v4);
  *(_QWORD *)((char *)this + 324) = *(_QWORD *)((char *)this + 316);
  *((_DWORD *)this + 83) = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  if ( v5 )
  {
    CTimelineBase::CTimelineBase(v5, 0.1500000059604645, 0.0, 1.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 43) = v6;
  if ( v6 )
  {
    v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           112LL);
    if ( v9 )
    {
      CTimelineBase::CTimelineBase(v9, 0.1500000059604645, 0.25, 1.0, 0);
      *v10 = &CTimeline<float>::`vftable';
    }
    else
    {
      v10 = 0LL;
    }
    *((_QWORD *)this + 44) = v10;
    if ( v10 )
    {
      v7 = CTouchVisual::RegisterGlobalTimer(this);
      if ( v7 >= 0 )
      {
        CTouchPressHoldVisual::SetETWAnimation((__int64)this, 1);
        return 0LL;
      }
      v8 = 73;
    }
    else
    {
      v7 = -2147024882;
      v8 = 71;
    }
  }
  else
  {
    v7 = -2147024882;
    v8 = 69;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8);
  CTouchPressHoldVisual::StopAllTimelines(this);
  *(_QWORD *)((char *)this + 324) = *(_QWORD *)((char *)this + 316);
  *((_DWORD *)this + 84) = 1065353216;
  CTouchPressHoldVisual::UpdateOpacityAndLocation(v11);
  return 0LL;
}
