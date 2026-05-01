/*
 * XREFs of ?IsMinimizedWindow@CSnappedWindow@@UEAA_NXZ @ 0x1805AB5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetArrangementBasedViewState@CSnappedWindow@@AEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1805AB84C (-_GetArrangementBasedViewState@CSnappedWindow@@AEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z.c)
 */

bool __fastcall CSnappedWindow::IsMinimizedWindow(CSnappedWindow *this)
{
  char v1; // bl
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( CSnappedWindow::_GetArrangementBasedViewState(this, (enum ARRANGEMENT_BASED_VIEW_STATE *)&v3) >= 0 )
    return v3 == 1;
  return v1;
}
