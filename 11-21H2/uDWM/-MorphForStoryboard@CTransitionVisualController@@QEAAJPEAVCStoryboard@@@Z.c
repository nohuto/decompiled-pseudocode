/*
 * XREFs of ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800ED6AC
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800A7968 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x18009E378 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800A5558 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 *     ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x1800EE4C8 (-_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800EFE24 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::MorphForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2)
{
  unsigned int v4; // r15d
  unsigned int v5; // ebp
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  RECT v11; // xmm1
  HMONITOR v12; // rbx
  int v13; // eax
  CTransitionVisualController *v14; // rcx
  RECT rc; // [rsp+30h] [rbp-68h] BYREF
  RECT v17; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a2 + 30) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL * v5);
      if ( CTransitionVisualController::_CanMorph((CTransitionVisualController *)v5, (struct CAnimationComponent *)v6) )
      {
        v7 = 0;
        if ( *((_DWORD *)this + 34) )
          break;
      }
LABEL_18:
      if ( ++v5 >= *((_DWORD *)a2 + 30) )
        return v4;
    }
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 14);
      v9 = *(_QWORD *)(v8 + 8LL * v7);
      if ( v6 != v9
        && CTransitionVisualController::_CanMorph(
             (CTransitionVisualController *)v7,
             *(struct CAnimationComponent **)(v8 + 8LL * v7))
        && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 975LL) || !*(_BYTE *)(*(_QWORD *)(v6 + 40) + 975LL)) )
      {
        v10 = *(_QWORD *)(v9 + 16);
        if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
          && v10 == *(_QWORD *)(v6 + 16)
          && *(_QWORD *)(v9 + 128) != *(_QWORD *)(v6 + 128)
          && *(_BYTE *)(v9 + 74) == *(_BYTE *)(v6 + 74) )
        {
          v11 = *(RECT *)(v6 + 88);
          v17 = *(RECT *)(v9 + 88);
          rc = v11;
          v12 = MonitorFromRect(&rc, 2u);
          if ( MonitorFromRect(&v17, 2u) == v12 && !*(_BYTE *)(v9 + 72) && !*(_BYTE *)(v6 + 72) )
          {
            v13 = CAnimatedTransitionVisual::CopyVisual(
                    *(CAnimatedTransitionVisual **)(v6 + 40),
                    *(struct CAnimatedTransitionVisual **)(v9 + 40));
            v4 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2LL,
                v13,
                0xA37u);
              return v4;
            }
            CTransitionVisualController::_UpdateClipping(v14, (struct CAnimationComponent *)v6);
            CAnimationComponent::Morph((CAnimationComponent *)v9);
          }
        }
      }
      if ( ++v7 >= *((_DWORD *)this + 34) )
        goto LABEL_18;
    }
  }
  return v4;
}
