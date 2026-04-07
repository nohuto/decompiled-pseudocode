/*
 * XREFs of ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x18009F554
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::StealStagedVisual(CAnimatedTransitionVisual *this, struct CVisual *a2)
{
  unsigned int v2; // esi
  int v5; // eax
  unsigned int v6; // ebp
  int inserted; // eax
  int v8; // eax
  struct tagPOINT v9; // rbx
  LONG y; // r15d
  struct tagPOINT *v11; // rcx
  struct tagPOINT v13; // [rsp+58h] [rbp+10h] BYREF

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
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 91) + 32LL), a2, 0LL, 0, 1);
    v6 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x387u);
      goto LABEL_15;
    }
  }
  else
  {
    v8 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), a2, 0LL, 0, 1);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x38Bu);
      goto LABEL_15;
    }
  }
  v9 = *(struct tagPOINT *)(**((_QWORD **)a2 + 6) + 120LL);
  v13 = v9;
  if ( *((_DWORD *)a2 + 18) )
  {
    y = v13.y;
    do
    {
      v11 = *(struct tagPOINT **)(*((_QWORD *)a2 + 6) + 8LL * v2);
      v13 = v11[15];
      v13.x -= v9.x;
      v13.y -= y;
      CVisual::SetOffset(v11, &v13);
      ++v2;
    }
    while ( v2 < *((_DWORD *)a2 + 18) );
  }
  *((_BYTE *)this + 975) = 1;
LABEL_15:
  CBaseObject::Release(a2);
  return v6;
}
