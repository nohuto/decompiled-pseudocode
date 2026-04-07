/*
 * XREFs of ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800E4638
 * Callers:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x18001B810 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180003768 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800067F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x1800E5294 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 */

void __fastcall CTopLevelWindow::ComputeWindowFrameMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  int v17; // edx
  int v18; // ebp

  *a2 = 0LL;
  v4 = 0;
  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 152)) || (*((_DWORD *)this + 152) & 0x200000) != 0 )
  {
    v5 = *((_QWORD *)this + 94);
    v6 = *((_BYTE *)this + 248) & 4 | 0xA1LL;
    if ( !v5 || (*(_BYTE *)(v5 + 664) & 8) != 0 )
    {
      v7 = 0;
      v8 = 0;
      if ( !CTopLevelWindow::IsSheetOfGlass(this) )
      {
        v7 = *((_DWORD *)this + 157) - *((_DWORD *)this + v6);
        v8 = *((_DWORD *)this + 158) - *((_DWORD *)this + v6 + 1);
        v11 = *((_DWORD *)this + 160) - *((_DWORD *)this + v6 + 3);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
          1u,
          v9,
          v10);
        if ( CDesktopManager::IsHighContrastMode(v13, v12, v14, v15) )
        {
          v16 = v7 - *(_DWORD *)(*((_QWORD *)this + 43) + 24LL);
          v7 = 0;
          v17 = v8 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
          v8 = 0;
          v18 = v11 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
          if ( v16 >= 0 )
            v7 = v16;
          if ( v17 >= 0 )
            v8 = v17;
          if ( v18 >= 0 )
            v4 = v18;
        }
        else
        {
          v4 = v11;
        }
      }
      a2->cxLeftWidth = v7 + *((_DWORD *)this + v6);
      a2->cyTopHeight = *((_DWORD *)this + v6 + 2);
      a2->cxRightWidth = v8 + *((_DWORD *)this + v6 + 1);
      a2->cyBottomHeight = v4 + *((_DWORD *)this + v6 + 3);
    }
    else
    {
      a2->cxLeftWidth = *((_DWORD *)this + v6);
      a2->cyTopHeight = *((_DWORD *)this + v6 + 2);
      a2->cxRightWidth = *((_DWORD *)this + v6 + 1);
      a2->cyBottomHeight = *((_DWORD *)this + v6 + 3);
    }
  }
}
