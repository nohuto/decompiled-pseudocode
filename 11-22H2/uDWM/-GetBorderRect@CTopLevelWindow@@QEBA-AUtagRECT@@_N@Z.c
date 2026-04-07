/*
 * XREFs of ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18001B450
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001AA44 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D852 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800A3520 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetBorderRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3)
{
  bool IsHighContrastMode; // al
  LONG v7; // r11d
  unsigned int v8; // edx
  LONG v9; // ecx
  int v10; // r10d
  int v11; // r9d
  _DWORD *v12; // rax
  int v13; // ecx
  int v14; // r8d
  struct tagRECT *result; // rax
  _DWORD *v16; // rdx

  if ( (*((_BYTE *)this + 624) & 0x20) != 0 )
  {
    v11 = HIDWORD(*(_OWORD *)((char *)this + 676));
    v7 = *(_QWORD *)((char *)this + 684);
    v10 = HIDWORD(*(_QWORD *)((char *)this + 676));
    v9 = *(_OWORD *)((char *)this + 676);
  }
  else
  {
    IsHighContrastMode = CDesktopManager::IsHighContrastMode();
    v7 = 0;
    if ( IsHighContrastMode )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
    }
    else
    {
      v8 = (*(_DWORD *)(*((_QWORD *)this + 94) + 348LL) + 48) / 0x60u;
      v9 = *((_DWORD *)this + 157) - v8;
      if ( v9 < 0 )
        v9 = 0;
      v10 = *((_DWORD *)this + 158) - v8;
      if ( v10 < 0 )
        v10 = 0;
      v11 = *((_DWORD *)this + 160) - v8;
      if ( v11 < 0 )
        v11 = 0;
    }
  }
  if ( a3 )
  {
    v16 = (_DWORD *)*((_QWORD *)this + 94);
    v14 = v16[14];
    retstr->left = v16[12] + v9;
    retstr->top = v7 + v16[13];
    v13 = v16[15];
  }
  else
  {
    v12 = (_DWORD *)*((_QWORD *)this + 94);
    retstr->left = v9;
    retstr->top = v7;
    v13 = v12[15] - v12[13];
    v14 = v12[14] - v12[12];
  }
  result = retstr;
  retstr->right = v14 - v10;
  retstr->bottom = v13 - v11;
  return result;
}
