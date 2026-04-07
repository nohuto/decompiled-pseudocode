/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D3E8
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000E4F0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000C620 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000D2F0 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18000D4EC (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2,
        __int64 a3)
{
  int inserted; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // esi
  struct CAnimationComponent *v11; // rax
  struct CVisual *v12; // rdx
  int v14; // r9d
  unsigned int v15; // eax
  bool v16; // [rsp+20h] [rbp-18h]
  unsigned int v17; // [rsp+20h] [rbp-18h]
  struct CAnimationComponent *v18; // [rsp+48h] [rbp+10h] BYREF
  float v19; // [rsp+50h] [rbp+18h] BYREF

  v18 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this, (__int64)a2, a3);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v17 = 2229;
LABEL_13:
    v14 = inserted;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v14,
      v17,
      0LL);
    return v7;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this, v5, v6);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v17 = 2230;
    goto LABEL_13;
  }
  v8 = *((_DWORD *)this + 34);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v7 = -2147024362;
    v15 = 181;
    v10 = -2147024362;
    goto LABEL_15;
  }
  if ( v9 > *((_DWORD *)this + 33) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v18);
    v7 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
    v15 = 192;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v15, 0LL);
    v14 = v10;
    v17 = 2232;
    goto LABEL_16;
  }
  *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * *((unsigned int *)this + 34)) = v18;
  *((_DWORD *)this + 34) = v9;
LABEL_6:
  _InterlockedIncrement((volatile signed __int32 *)v18 + 2);
  v11 = v18;
  v12 = (struct CVisual *)*((_QWORD *)v18 + 4);
  if ( v12 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v12, 0LL, 0, v16);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v17 = 2237;
      goto LABEL_13;
    }
    v11 = v18;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
               (struct CVisual *)((*((_QWORD *)v11 + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v11
                                                                                                + 5) >> 64)),
               0LL,
               0,
               v16);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v17 = 2241;
    goto LABEL_13;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v18 + 18) + 72LL),
              *((_DWORD *)v18 + 7),
              &v19) >= 0 )
    *(float *)(*((_QWORD *)v18 + 5) + 936LL) = v19;
  return v7;
}
