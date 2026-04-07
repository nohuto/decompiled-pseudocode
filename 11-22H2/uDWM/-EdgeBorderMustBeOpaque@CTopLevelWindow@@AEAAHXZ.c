/*
 * XREFs of ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x1800E5B54
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001ACB4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::EdgeBorderMustBeOpaque(CTopLevelWindow *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 508)
    || (unsigned int)IsWindowArranged(*(_QWORD *)(*((_QWORD *)this + 94) + 40LL))
    || (*((_BYTE *)this + 624) & 0x20) != 0 )
  {
    return 1;
  }
  return v1;
}
