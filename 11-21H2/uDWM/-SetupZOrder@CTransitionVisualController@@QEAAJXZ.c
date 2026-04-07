/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800EE154
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18003FB48 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x1800A54B8 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800A55E0 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE9F0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800EF294 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800EFE24 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int i; // ebx
  signed int v6; // esi
  unsigned int v7; // edx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r13
  CAnimationComponent *v11; // r15
  CAnimationComponent *v12; // r14
  int WindowZOrder; // ebx
  char v14; // r11
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned int j; // esi
  __int64 v22; // rbp
  CTransitionVisualController *v23; // rcx

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( v2 < 0 )
  {
    v3 = 1765;
    goto LABEL_34;
  }
  v4 = *((_DWORD *)this + 34);
  for ( i = 0; i < v4; ++i )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * i));
    v4 = *((_DWORD *)this + 34);
  }
  v6 = 0;
  if ( (int)(v4 - 1) > 0 )
  {
    v7 = v4;
    do
    {
      v4 = v7;
      LODWORD(v8) = 0;
      if ( (int)(v7 - v6 - 1) > 0 )
      {
        do
        {
          v9 = *((_QWORD *)this + 14);
          v10 = (unsigned int)v8;
          v8 = (unsigned int)(v8 + 1);
          v11 = *(CAnimationComponent **)(v9 + 8 * v10);
          if ( !*((_BYTE *)v11 + 65) )
          {
            v12 = *(CAnimationComponent **)(v9 + 8 * v8);
            if ( !*((_BYTE *)v12 + 65) )
            {
              WindowZOrder = CAnimationComponent::GetWindowZOrder(v12);
              if ( (int)CAnimationComponent::GetWindowZOrder(v11) > WindowZOrder )
              {
                *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8) = v11;
                *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v10) = v12;
              }
            }
          }
          v4 = *((_DWORD *)this + 34);
        }
        while ( (int)v8 < (int)(v4 - v6 - 1) );
      }
      ++v6;
      v7 = v4;
    }
    while ( v6 < (int)(v4 - 1) );
  }
  v14 = 1;
  while ( v4 > 1 && v14 )
  {
    v14 = 0;
    v15 = v4 - 1;
    v16 = 8LL;
    v17 = 0LL;
    do
    {
      v18 = *((_QWORD *)this + 14);
      v19 = *(_QWORD *)(v17 + v18);
      if ( !*(_BYTE *)(v19 + 65) )
      {
        v20 = *(_QWORD *)(v16 + v18);
        if ( !*(_BYTE *)(v20 + 65)
          && *(_QWORD *)(v19 + 128) == *(_QWORD *)(v20 + 128)
          && *(_DWORD *)(v19 + 56) > *(_DWORD *)(v20 + 56) )
        {
          *(_QWORD *)(v17 + v18) = v20;
          v14 = 1;
          *(_QWORD *)(v16 + *((_QWORD *)this + 14)) = v19;
        }
      }
      v17 += 8LL;
      v16 += 8LL;
      --v15;
    }
    while ( v15 );
    --v4;
  }
  for ( j = 0; j < *((_DWORD *)this + 34); ++j )
  {
    v22 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * j);
    if ( !*(_BYTE *)(v22 + 65) )
    {
      v2 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v22 + 40) + 8LL), 0);
      if ( v2 < 0 )
      {
        v3 = 1819;
LABEL_34:
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v2,
          v3);
        CTransitionVisualController::CleanupTransition(this);
        return (unsigned int)v2;
      }
      CTransitionVisualController::_UpdateClipping(v23, (struct CAnimationComponent *)v22);
    }
  }
  v2 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  if ( v2 < 0 )
  {
    v3 = 1827;
    goto LABEL_34;
  }
  return (unsigned int)v2;
}
