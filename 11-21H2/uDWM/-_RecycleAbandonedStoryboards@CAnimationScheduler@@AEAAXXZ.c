/*
 * XREFs of ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18003FC04
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18003FAC4 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800A6CD0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800A72C4 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationScheduler::_RecycleAbandonedStoryboards(CAnimationScheduler *this)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  _DWORD *v4; // rsi
  unsigned int v5; // ecx
  unsigned int i; // r9d
  __int64 v7; // rcx

  v1 = 0LL;
  while ( (unsigned int)v1 < *((_DWORD *)this + 10) )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = *(_DWORD **)(v3 + 8 * v1);
    if ( v4[6] == 4 )
    {
      v5 = *((_DWORD *)this + 10);
      if ( (unsigned int)v1 < v5 )
      {
        for ( i = v1; i < v5 - 1; v5 = *((_DWORD *)this + 10) )
        {
          v7 = i++;
          *(_QWORD *)(v3 + 8 * v7) = *(_QWORD *)(v3 + 8LL * i);
        }
        *((_DWORD *)this + 10) = v5 - 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
      }
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 80LL))(v4);
    }
    else
    {
      v1 = (unsigned int)(v1 + 1);
    }
  }
}
