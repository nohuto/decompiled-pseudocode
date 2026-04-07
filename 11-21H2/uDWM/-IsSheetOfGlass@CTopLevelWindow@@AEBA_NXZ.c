/*
 * XREFs of ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x1800E5294
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18002A510 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800E4638 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsSheetOfGlass(CTopLevelWindow *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 94);
  return *(_QWORD *)(v1 + 96) == 0x7FFFFFFF7FFFFFFFLL
      && *(_DWORD *)(v1 + 104) == 0x7FFFFFFF
      && *(_DWORD *)(v1 + 108) == 0x7FFFFFFF;
}
