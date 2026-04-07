/*
 * XREFs of ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000DFFC
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000DF6C (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18000F8BC (-_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000FDD4 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A68C4 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800AA9D8 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::MorphForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2)
{
  unsigned int v4; // r15d
  unsigned int i; // ebp
  __int64 v6; // rsi
  unsigned int j; // r14d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rcx
  RECT v12; // xmm1
  HMONITOR v13; // rbx
  int v14; // eax
  CTransitionVisualController *v15; // rcx
  RECT rc; // [rsp+30h] [rbp-68h] BYREF
  RECT v17; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 30); ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL * i);
    if ( CTransitionVisualController::_CanMorph((CTransitionVisualController *)i, (struct CAnimationComponent *)v6) )
    {
      for ( j = 0; j < *((_DWORD *)this + 34); ++j )
      {
        v8 = *((_QWORD *)this + 14);
        v9 = *(_QWORD *)(v8 + 8LL * j);
        if ( v6 != v9
          && CTransitionVisualController::_CanMorph(
               (CTransitionVisualController *)j,
               *(struct CAnimationComponent **)(v8 + 8LL * j))
          && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 975LL) || !*(_BYTE *)(*(_QWORD *)(v6 + 40) + 975LL)) )
        {
          v11 = *(_QWORD *)(v9 + 16);
          if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
            && v11 == *(_QWORD *)(v6 + 16)
            && *(_QWORD *)(v9 + 144) != *(_QWORD *)(v6 + 144)
            && *(_BYTE *)(v9 + 74) == *(_BYTE *)(v6 + 74) )
          {
            v12 = *(RECT *)(v6 + 88);
            v17 = *(RECT *)(v9 + 88);
            rc = v12;
            v13 = MonitorFromRect(&rc, 2u);
            if ( MonitorFromRect(&v17, 2u) == v13 && !*(_BYTE *)(v9 + 72) && !*(_BYTE *)(v6 + 72) )
            {
              v14 = CAnimatedTransitionVisual::CopyVisual(
                      *(CAnimatedTransitionVisual **)(v6 + 40),
                      *(struct CAnimatedTransitionVisual **)(v9 + 40));
              v4 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2u,
                  v14,
                  0xA02u,
                  0LL);
                return v4;
              }
              CTransitionVisualController::_UpdateClipping(v15, (struct CAnimationComponent *)v6);
              CAnimationComponent::Morph((CAnimationComponent *)v9);
            }
          }
        }
      }
    }
  }
  return v4;
}
