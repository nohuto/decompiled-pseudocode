/*
 * XREFs of ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x1800E5210
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180068896 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CBitmapSource *__fastcall CTopLevelWindow::GetWindowFramePart(
        struct CTopLevelWindow::WindowFrame *a1,
        unsigned int a2)
{
  struct CBitmapSource *result; // rax

  result = (struct CBitmapSource *)*((_QWORD *)a1 + 2 * a2 + 185);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) )
  {
    if ( *((_QWORD *)a1 + 2 * a2 + 186) )
      return (struct CBitmapSource *)*((_QWORD *)a1 + 2 * a2 + 186);
  }
  return result;
}
