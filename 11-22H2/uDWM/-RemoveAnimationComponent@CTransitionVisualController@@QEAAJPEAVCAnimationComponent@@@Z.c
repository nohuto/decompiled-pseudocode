/*
 * XREFs of ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D1DC
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000CF48 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DE4AC (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000C620 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x18000D2A4 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000D2F0 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveAnimationComponent(
        CTransitionVisualController *this,
        struct CVisual **a2,
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  bool v8; // bp
  struct CVisual *v9; // rdx
  struct CVisual *v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v14; // eax
  struct CAnimationComponent *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = (struct CAnimationComponent *)a2;
  v5 = CTransitionVisualController::_EnsureTransitionVisualRoot(this, (__int64)a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v5,
      0x8D9u,
      0LL);
  }
  else
  {
    v7 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v7,
        0x8DAu,
        0LL);
    }
    else
    {
      v8 = (unsigned int)DynArray<CAnimationComponent *,0>::Remove((char *)this + 112, &v15) != 0;
      if ( !*((_DWORD *)this + 34) )
        *((_QWORD *)this + 12) = -1LL;
      v9 = a2[4];
      if ( v9
        && (v14 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v9), v6 = v14, v14 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v14,
          0x8E6u,
          0LL);
      }
      else
      {
        v10 = a2[5];
        v11 = *((_QWORD *)v10 + 4);
        if ( v11 )
        {
          v12 = VisualCollection::Remove(
                  (VisualCollection *)(v11 + 32),
                  (struct CVisual *)(((unsigned __int64)v10 + 8) & -(__int64)(v10 != 0LL)));
          v6 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2u,
              v12,
              0x8ECu,
              0LL);
        }
      }
      if ( v8 )
        CBaseObject::Release((CBaseObject *)a2);
    }
  }
  return v6;
}
