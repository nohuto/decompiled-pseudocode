/*
 * XREFs of ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x1800A7B14
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000BB60 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::StealStagedVisual(CAnimatedTransitionVisual *this, struct CVisual *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  unsigned int v6; // ebp
  int inserted; // eax
  int v8; // eax
  struct tagPOINT v9; // rbx
  LONG y; // r15d
  struct tagPOINT *v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  struct tagPOINT v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)a2 + 3) + 32LL), a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x381u);
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 976) )
  {
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 91) + 32LL),
                 (unsigned __int64)a2,
                 0LL,
                 0,
                 v13);
    v6 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x387u);
      goto LABEL_15;
    }
  }
  else
  {
    v8 = VisualCollection::InsertRelative(
           (CAnimatedTransitionVisual *)((char *)this + 40),
           (unsigned __int64)a2,
           0LL,
           0,
           v13);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x38Bu);
      goto LABEL_15;
    }
  }
  v9 = *(struct tagPOINT *)(**((_QWORD **)a2 + 6) + 120LL);
  v14 = v9;
  if ( *((_DWORD *)a2 + 18) )
  {
    y = v14.y;
    do
    {
      v11 = *(struct tagPOINT **)(*((_QWORD *)a2 + 6) + 8LL * v2);
      v14 = v11[15];
      v14.x -= v9.x;
      v14.y -= y;
      CVisual::SetOffset(v11, &v14);
      ++v2;
    }
    while ( v2 < *((_DWORD *)a2 + 18) );
  }
  *((_BYTE *)this + 975) = 1;
LABEL_15:
  CBaseObject::Release(a2);
  return v6;
}
