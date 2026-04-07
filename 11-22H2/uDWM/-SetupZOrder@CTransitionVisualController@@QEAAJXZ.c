/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000CCB0
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000CF48 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000D950 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000C620 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x18000CDFC (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000EF34 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000FDD4 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180041634 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800AAA24 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // ecx
  _QWORD *v6; // r14
  unsigned int i; // ebx
  signed int v8; // ebp
  char v9; // r11
  unsigned int k; // ebp
  __int64 v11; // r15
  CTransitionVisualController *v12; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int j; // r15d
  CAnimationComponent *v17; // r13
  CAnimationComponent *v18; // r12
  int WindowZOrder; // ebx
  unsigned int v20; // eax
  bool v21; // cc
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // [rsp+80h] [rbp+18h]

  v4 = CTransitionVisualController::_EnsureTransitionVisualRoot(this, a2, a3);
  if ( v4 < 0 )
  {
    v14 = 1712;
    goto LABEL_38;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = (_QWORD *)((char *)this + 112);
  for ( i = 0; i < v5; ++i )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*v6 + 8LL * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*v6 + 8LL * i));
    v5 = *((_DWORD *)this + 34);
  }
  v8 = 0;
  if ( (int)(v5 - 1) > 0 )
  {
    v15 = v5;
    do
    {
      v5 = v15;
      for ( j = 0; (int)j < (int)(v5 - v8 - 1); v5 = *((_DWORD *)this + 34) )
      {
        v27 = j;
        v17 = *(CAnimationComponent **)(*v6 + 8LL * j++);
        if ( !*((_BYTE *)v17 + 65) )
        {
          v18 = *(CAnimationComponent **)(*v6 + 8LL * j);
          if ( !*((_BYTE *)v18 + 65) )
          {
            WindowZOrder = CAnimationComponent::GetWindowZOrder(v18);
            if ( (int)CAnimationComponent::GetWindowZOrder(v17) > WindowZOrder )
            {
              *(_QWORD *)(*v6 + 8LL * j) = v17;
              *(_QWORD *)(*v6 + 8 * v27) = v18;
            }
          }
        }
      }
      ++v8;
      v15 = v5;
    }
    while ( v8 < (int)(v5 - 1) );
  }
  v9 = 1;
  while ( v5 > 1 && v9 )
  {
    v20 = v5 - 1;
    v21 = v5-- <= 1;
    v9 = 0;
    if ( !v21 )
    {
      v22 = 8LL;
      v23 = v20;
      v24 = 0LL;
      do
      {
        v25 = *(_QWORD *)(v24 + *v6);
        v26 = *(_QWORD *)(v22 + *v6);
        if ( !*(_BYTE *)(v25 + 65)
          && !*(_BYTE *)(v26 + 65)
          && *(_QWORD *)(v25 + 144) == *(_QWORD *)(v26 + 144)
          && *(_DWORD *)(v25 + 56) > *(_DWORD *)(v26 + 56) )
        {
          *(_QWORD *)(v24 + *v6) = v26;
          v9 = 1;
          *(_QWORD *)(v22 + *v6) = v25;
        }
        v24 += 8LL;
        v22 += 8LL;
        --v23;
      }
      while ( v23 );
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 34); ++k )
  {
    v11 = *(_QWORD *)(*v6 + 8LL * k);
    if ( !*(_BYTE *)(v11 + 65) )
    {
      v4 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v11 + 40) + 8LL), 0);
      if ( v4 < 0 )
      {
        v14 = 1766;
        goto LABEL_38;
      }
      CTransitionVisualController::_UpdateClipping(v12, (struct CAnimationComponent *)v11);
    }
  }
  v4 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  if ( v4 < 0 )
  {
    v14 = 1774;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v4,
      v14,
      0LL);
    CTransitionVisualController::CleanupTransition(this);
  }
  return (unsigned int)v4;
}
