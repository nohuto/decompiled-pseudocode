/*
 * XREFs of ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180053FC4
 * Callers:
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180011E9C (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023F14 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800E5424 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
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
