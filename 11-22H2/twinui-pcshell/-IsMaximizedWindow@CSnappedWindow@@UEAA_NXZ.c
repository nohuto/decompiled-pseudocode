/*
 * XREFs of ?IsMaximizedWindow@CSnappedWindow@@UEAA_NXZ @ 0x180686C70
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetArrangementBasedViewState@CSnappedWindow@@AEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x180686F0C (-_GetArrangementBasedViewState@CSnappedWindow@@AEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z.c)
 */

bool __fastcall CSnappedWindow::IsMaximizedWindow(CSnappedWindow *this)
{
  char v1; // bl
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( CSnappedWindow::_GetArrangementBasedViewState(this, (enum ARRANGEMENT_BASED_VIEW_STATE *)&v3) >= 0 )
    return v3 == 3;
  return v1;
}
