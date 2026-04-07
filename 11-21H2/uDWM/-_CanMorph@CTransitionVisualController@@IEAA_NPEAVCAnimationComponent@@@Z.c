/*
 * XREFs of ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x1800EE4C8
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800ED6AC (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTransitionVisualController::_CanMorph(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  char v2; // cl

  v2 = 0;
  if ( !*((_BYTE *)a2 + 65) && *(_DWORD *)(*((_QWORD *)a2 + 16) + 24LL) != 4 )
    return *((_BYTE *)a2 + 73) != 0;
  return v2;
}
