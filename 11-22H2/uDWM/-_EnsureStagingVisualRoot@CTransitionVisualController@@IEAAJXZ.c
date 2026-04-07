/*
 * XREFs of ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000D2F0
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000B844 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000BB60 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D1DC (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D3E8 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E58C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EB818 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 * Callees:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000C620 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureStagingVisualRoot(
        CTransitionVisualController *this,
        __int64 a2,
        __int64 a3)
{
  struct tagPOINT v3; // rbx
  int inserted; // edi
  int v7; // eax
  CVisual *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  bool v11; // [rsp+20h] [rbp-18h]
  struct tagPOINT v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  inserted = 0;
  v12 = 0LL;
  if ( *((_QWORD *)this + 18) )
    return (unsigned int)inserted;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this, a2, a3);
  if ( inserted < 0 )
  {
    v9 = 661;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      inserted,
      v9,
      0LL);
    if ( !*(_QWORD *)&v3 )
      return (unsigned int)inserted;
    v10 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(*(_QWORD *)&v3 + 24LL) == v10 )
      VisualCollection::Remove((VisualCollection *)(v10 + 32), *(struct CVisual **)&v3);
    goto LABEL_9;
  }
  v7 = CVisual::Create((struct CVisual **)&v12);
  v3 = v12;
  inserted = v7;
  if ( v7 < 0 )
  {
    v9 = 662;
    goto LABEL_15;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 1) + 32LL),
               *(struct CVisual **)&v12,
               0LL,
               1,
               v11);
  if ( inserted < 0 )
  {
    v9 = 665;
    goto LABEL_15;
  }
  *((struct tagPOINT *)this + 18) = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&v3 + 8LL));
    v3 = v12;
  }
  v8 = (CVisual *)*((_QWORD *)this + 18);
  v12.x = -32000;
  v12.y = -32000;
  CVisual::SetOffset(v8, &v12);
  inserted = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
  if ( inserted < 0 )
  {
    v9 = 677;
    goto LABEL_15;
  }
LABEL_9:
  if ( v3 )
    CBaseObject::Release(*(CBaseObject **)&v3);
  return (unsigned int)inserted;
}
