/*
 * XREFs of ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800318A0
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EC08 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ @ 0x180062F14 (-UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18009A5FC (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetBorderRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3)
{
  bool IsHighContrastMode; // al
  _DWORD *v7; // r10
  LONG v8; // r9d
  LONG v9; // r11d
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  LONG v15; // ecx
  int v16; // edx
  LONG v17; // edx
  struct tagRECT *result; // rax

  IsHighContrastMode = CDesktopManager::IsHighContrastMode();
  v7 = (_DWORD *)*((_QWORD *)this + 94);
  v8 = 0;
  v9 = 0;
  if ( IsHighContrastMode )
  {
    v13 = 0;
    v14 = 0;
  }
  else
  {
    v10 = (v7[87] + 48) / 0x60u;
    v11 = *((_DWORD *)this + 156) - v10;
    if ( (int)(*((_DWORD *)this + 153) - v10) >= 0 )
      v9 = *((_DWORD *)this + 153) - v10;
    v12 = *((_DWORD *)this + 154) - v10;
    v13 = 0;
    v14 = 0;
    if ( v12 >= 0 )
      v13 = v12;
    if ( v11 >= 0 )
      v14 = v11;
  }
  v15 = v7[15] - v14;
  v16 = v7[14];
  if ( a3 )
  {
    v8 = v7[13];
    v17 = v16 - v13;
    v9 += v7[12];
  }
  else
  {
    v15 -= v7[13];
    v17 = v16 - v7[12] - v13;
  }
  retstr->left = v9;
  result = retstr;
  retstr->top = v8;
  retstr->right = v17;
  retstr->bottom = v15;
  return result;
}
