/*
 * XREFs of ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800D1A38
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x180100BCC (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@AEBUt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013228 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001EE50 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18004C890 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18004F3EC (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x1800D19D8 (-RegisterGlobalTimer@CRippleEffect@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800D1C50 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::Start(CRippleEffect *this, const struct tagPOINT *a2, float a3)
{
  int v5; // ebp
  unsigned int v6; // eax
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  CVisual *v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  char v15; // al
  __int64 v16; // rax
  _QWORD *v17; // r8
  int v18; // r9d
  POINT v19; // rcx
  __int64 v20; // kr00_8
  int v21; // ebx
  int v22; // ebx

  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 103;
LABEL_14:
    v18 = v5;
    goto LABEL_15;
  }
  v7 = CDesktopManager::MonitorDpiFromPoint(*a2);
  v8 = *(_QWORD *)(*((_QWORD *)this + 37) + 24LL);
  *((_QWORD *)this + 32) = v8;
  v9 = MulDiv(v8, v7, 96);
  v10 = *((_DWORD *)this + 65);
  *((_DWORD *)this + 64) = v9;
  v11 = MulDiv(v10, v7, 96);
  v12 = (CVisual *)*((_QWORD *)this + 36);
  *((_DWORD *)this + 65) = v11;
  CVisual::SetSize(v12, (const struct tagSIZE *)this + 32);
  v13 = *((_QWORD *)this + 34);
  if ( v13 )
  {
    v14 = (*(_DWORD *)(v13 + 8))-- == 1;
    v15 = CDesktopManager::s_fTimelineDirty;
    if ( v14 )
      v15 = 1;
    CDesktopManager::s_fTimelineDirty = v15;
  }
  v16 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  if ( !v16 )
  {
    *((_QWORD *)this + 34) = 0LL;
    goto LABEL_13;
  }
  CTimelineBase::CTimelineBase(v16, a3, 0.0, 1.0, 0);
  *v17 = &CTimeline<float>::`vftable';
  *((_QWORD *)this + 34) = v17;
  if ( !v17 )
  {
LABEL_13:
    v5 = -2147024882;
    v6 = 117;
    goto LABEL_14;
  }
  v5 = CRippleEffect::RegisterGlobalTimer(this);
  v18 = v5;
  if ( v5 < 0 )
  {
    v6 = 119;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v6);
    CRippleEffect::Stop(this);
    return (unsigned int)v5;
  }
  v19 = *a2;
  v20 = *((int *)this + 64);
  *((struct tagPOINT *)this + 31) = *a2;
  v21 = *((_DWORD *)this + 63);
  *((float *)this + 66) = a3;
  v22 = v21 - *((_DWORD *)this + 65) / 2;
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 36), v19.x - v20 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 36), v22);
  (*(void (__fastcall **)(CRippleEffect *))(*(_QWORD *)this + 104LL))(this);
  return (unsigned int)v5;
}
