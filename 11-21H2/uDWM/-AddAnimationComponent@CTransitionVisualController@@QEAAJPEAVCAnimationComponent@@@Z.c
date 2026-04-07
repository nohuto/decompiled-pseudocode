/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800E9DE4
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D8F98 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x1800ED0C4 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE88C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE9F0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int inserted; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // eax
  struct CAnimationComponent *v8; // rax
  struct CVisual *v9; // rdx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct CAnimationComponent *v12; // [rsp+48h] [rbp+10h] BYREF
  float v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v11 = 2282;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      inserted,
      v11);
    return v4;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v11 = 2283;
    goto LABEL_3;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v4 = -2147024362;
    v7 = 181;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v7);
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0x8EDu);
    return v4;
  }
  if ( v6 > *((_DWORD *)this + 33) )
  {
    v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 112, 8u, 1, &v12);
    if ( (v4 & 0x80000000) != 0 )
    {
      v7 = 192;
      goto LABEL_16;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * *((unsigned int *)this + 34)) = v12;
    *((_DWORD *)this + 34) = v6;
  }
  _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
  v8 = v12;
  v9 = (struct CVisual *)*((_QWORD *)v12 + 4);
  if ( v9 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v9, 0LL, 0, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v11 = 2290;
      goto LABEL_3;
    }
    v8 = v12;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
               (struct CVisual *)((*((_QWORD *)v8 + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v8
                                                                                               + 5) >> 64)),
               0LL,
               0,
               1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v11 = 2294;
    goto LABEL_3;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v12 + 16) + 72LL),
              *((_DWORD *)v12 + 7),
              &v13) >= 0 )
    *(float *)(*((_QWORD *)v12 + 5) + 936LL) = v13;
  return v4;
}
