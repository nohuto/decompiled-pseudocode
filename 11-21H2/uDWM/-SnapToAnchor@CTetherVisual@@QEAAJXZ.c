/*
 * XREFs of ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800E2610
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AC744 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACD7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800E27C0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800E9150 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::SnapToAnchor(CTetherVisual *this)
{
  __int64 v1; // rax
  bool v3; // zf
  char v4; // al
  __int64 v5; // rax
  _QWORD *v6; // r8
  int v7; // edi
  unsigned int v8; // eax

  v1 = *((_QWORD *)this + 50);
  if ( v1 )
  {
    v3 = (*(_DWORD *)(v1 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  if ( !v5 )
  {
    *((_QWORD *)this + 50) = 0LL;
    goto LABEL_10;
  }
  CTimelineBase::CTimelineBase(v5, *((float *)this + 104), 1.0, 0.0, 2);
  *v6 = &CTimeline<float>::`vftable';
  *((_QWORD *)this + 50) = v6;
  if ( !v6 )
  {
LABEL_10:
    v7 = -2147024882;
    v8 = 322;
    goto LABEL_11;
  }
  v7 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v7 < 0 )
  {
    v8 = 324;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8);
    CTetherVisual::Stop(this);
  }
  return (unsigned int)v7;
}
