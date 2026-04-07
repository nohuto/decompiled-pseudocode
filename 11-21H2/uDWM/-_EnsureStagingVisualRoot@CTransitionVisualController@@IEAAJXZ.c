/*
 * XREFs of ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE88C
 * Callers:
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800E9DE4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EC5BC (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800EC7CC (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800EDB00 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800EDD10 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE9F0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureStagingVisualRoot(CTransitionVisualController *this)
{
  int inserted; // edi
  int v3; // eax
  int v4; // eax
  struct tagPOINT v5; // rbx
  unsigned int v6; // eax
  struct tagPOINT *v7; // rcx
  __int64 v8; // rcx
  struct tagPOINT v10; // [rsp+40h] [rbp+8h] BYREF

  inserted = 0;
  v10 = 0LL;
  if ( *((_QWORD *)this + 18) )
    return (unsigned int)inserted;
  v3 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  inserted = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v3,
      0x295u);
    return (unsigned int)inserted;
  }
  v4 = CVisual::Create((struct CVisual **)&v10);
  v5 = v10;
  inserted = v4;
  if ( v4 < 0 )
  {
    v6 = 662;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      inserted,
      v6);
    if ( !*(_QWORD *)&v5 )
      return (unsigned int)inserted;
    v8 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(*(_QWORD *)&v5 + 24LL) == v8 )
      VisualCollection::Remove((VisualCollection *)(v8 + 32), *(struct CVisual **)&v5);
    goto LABEL_15;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 1) + 32LL),
               *(struct CVisual **)&v10,
               0LL,
               1u,
               1);
  if ( inserted < 0 )
  {
    v6 = 665;
    goto LABEL_12;
  }
  *((struct tagPOINT *)this + 18) = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&v5 + 8LL));
    v5 = v10;
  }
  v7 = (struct tagPOINT *)*((_QWORD *)this + 18);
  v10.x = -32000;
  v10.y = -32000;
  CVisual::SetOffset(v7, &v10);
  inserted = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
  if ( inserted < 0 )
  {
    v6 = 677;
    goto LABEL_12;
  }
LABEL_15:
  if ( v5 )
    CBaseObject::Release(*(CBaseObject **)&v5);
  return (unsigned int)inserted;
}
