/*
 * XREFs of ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800EDB00
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DB778 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x180069BD4 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE88C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE9F0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveAnimationComponent(
        CTransitionVisualController *this,
        struct CVisual **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  bool v7; // bp
  struct CVisual *v8; // rdx
  int v9; // eax
  struct CVisual *v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  struct CAnimationComponent *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = (struct CAnimationComponent *)a2;
  v4 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = (unsigned int)DynArray<CAnimationComponent *,0>::Remove((__int64 *)this + 14, &v14) != 0;
      if ( !*((_DWORD *)this + 34) )
        *((_QWORD *)this + 12) = -1LL;
      v8 = a2[4];
      if ( v8
        && (v9 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v8), v5 = v9, v9 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v9,
          0x91Bu);
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
          v5 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v12,
              0x921u);
        }
      }
      if ( v7 )
        CBaseObject::Release((CBaseObject *)a2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v6,
        0x90Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0x90Eu);
  }
  return v5;
}
