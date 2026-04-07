/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D9DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800ECD98 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CSSCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CSSCrossFade *this,
        struct CWindowData *a2,
        char a3,
        struct CAnimationComponent **a4)
{
  __int64 v7; // rdx
  bool v8; // di
  int v9; // eax

  if ( a3 )
  {
    *((_DWORD *)a2 + 168) |= 0x200000u;
  }
  else if ( (*((_DWORD *)a2 + 168) & 0x10000000) == 0
         || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
  {
    v7 = *((unsigned int *)a2 + 168);
    if ( (v7 & 0x20000000) == 0 )
    {
      v8 = 1;
      goto LABEL_4;
    }
  }
  v7 = *((unsigned int *)a2 + 168);
  v8 = 0;
LABEL_4:
  v9 = (*(__int64 (__fastcall **)(CSSCrossFade *, __int64))(*(_QWORD *)this + 112LL))(this, v7);
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v9, 0LL, 0LL, -1, v8, a4);
}
