/*
 * XREFs of ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x1800E4AB0
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::EdgeBorderMustBeOpaque(CTopLevelWindow *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 492)
    || (unsigned int)IsWindowArranged(*(_QWORD *)(*((_QWORD *)this + 94) + 40LL))
    || (*((_BYTE *)this + 608) & 0x20) != 0 )
  {
    return 1;
  }
  return v1;
}
