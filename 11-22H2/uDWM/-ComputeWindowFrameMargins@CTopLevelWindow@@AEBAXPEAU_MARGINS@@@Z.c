/*
 * XREFs of ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800E5424
 * Callers:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180007928 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18001C860 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180053FC4 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 */

void __fastcall CTopLevelWindow::ComputeWindowFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v3; // ecx
  int v5; // edi
  __int64 v6; // rax
  int *v7; // rbx
  int v8; // r15d
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebp
  int v13; // ecx
  int v14; // edx
  int v15; // ebp
  int v16; // eax
  int v17; // ecx

  v3 = *((_DWORD *)this + 156);
  *a2 = 0LL;
  v5 = 0;
  if ( CTopLevelWindow::HasRenderedBorder(v3) || (*((_DWORD *)this + 156) & 0x200000) != 0 )
  {
    v6 = *((_QWORD *)this + 94);
    v7 = (int *)((char *)this + ((*((_BYTE *)this + 248) & 4) != 0 ? 676LL : 660LL));
    if ( !v6 || (*(_BYTE *)(v6 + 672) & 8) != 0 )
    {
      v8 = 0;
      v9 = 0;
      if ( !CTopLevelWindow::IsSheetOfGlass(this) )
      {
        v8 = *((_DWORD *)this + 161) - *v7;
        v9 = *((_DWORD *)this + 162) - v7[1];
        v12 = *((_DWORD *)this + 164) - v7[3];
        if ( (unsigned __int8)CDesktopManager::IsHighContrastMode(v11, v10) )
        {
          v13 = v8 - *(_DWORD *)(*((_QWORD *)this + 46) + 24LL);
          v8 = 0;
          v14 = v9 - *(_DWORD *)(*((_QWORD *)this + 47) + 24LL);
          v9 = 0;
          v15 = v12 - *(_DWORD *)(*((_QWORD *)this + 49) + 28LL);
          if ( v13 >= 0 )
            v8 = v13;
          if ( v14 >= 0 )
            v9 = v14;
          if ( v15 >= 0 )
            v5 = v15;
        }
        else
        {
          v5 = v12;
        }
      }
      v16 = v7[2];
      a2->cxLeftWidth = v8 + *v7;
      v17 = v9 + v7[1];
      a2->cyTopHeight = v16;
      a2->cxRightWidth = v17;
      a2->cyBottomHeight = v5 + v7[3];
    }
    else
    {
      a2->cxLeftWidth = *v7;
      a2->cyTopHeight = v7[2];
      a2->cxRightWidth = v7[1];
      a2->cyBottomHeight = v7[3];
    }
  }
}
