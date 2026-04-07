/*
 * XREFs of ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800EEE90
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800EF294 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x1800EEE50 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CTransitionVisualController::_IsOwnedByVisibleAC(
        CTransitionVisualController *this,
        const struct CWindowData *a2)
{
  CTransitionVisualController *v3; // rbp
  char v4; // si
  __int64 v5; // rdi
  struct CAnimationComponent *v6; // rdx

  v3 = this;
  v4 = 0;
  do
  {
    v5 = 0LL;
    if ( *((_DWORD *)v3 + 34) )
    {
      while ( 1 )
      {
        v6 = *(struct CAnimationComponent **)(*((_QWORD *)v3 + 14) + 8 * v5);
        if ( *((_QWORD *)v6 + 2) == *((_QWORD *)a2 + 5) )
        {
          if ( CTransitionVisualController::_IsAnimationComponentVisible(this, v6) )
            break;
        }
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)v3 + 34) )
          goto LABEL_8;
      }
      v4 = 1;
    }
LABEL_8:
    a2 = (const struct CWindowData *)*((_QWORD *)a2 + 75);
    if ( !a2 )
      break;
    this = (CTransitionVisualController *)(*((_DWORD *)a2 + 168) & 0xFFF);
    if ( (_DWORD)this != 4095 && (*((_DWORD *)a2 + 168) & 0x10000000) == 0 )
      break;
  }
  while ( *((_QWORD *)a2 + 5) );
  return v4;
}
