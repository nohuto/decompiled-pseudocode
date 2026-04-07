/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD050
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800EBA84 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CSSCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CSSCrossFade *this,
        struct CWindowData *a2,
        char a3,
        struct CAnimationComponent **a4)
{
  char v7; // di
  int v8; // eax

  if ( a3 )
  {
    *((_DWORD *)a2 + 170) |= 0x200000u;
  }
  else if ( ((*((_DWORD *)a2 + 170) & 0x10000000) == 0
          || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0)
         && (*((_DWORD *)a2 + 170) & 0x20000000) == 0 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  v7 = 0;
LABEL_4:
  v8 = (*(__int64 (__fastcall **)(CSSCrossFade *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 170));
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v8, 0LL, 0LL, 0xFFFFFFFF, v7, a4);
}
