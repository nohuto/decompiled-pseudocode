/*
 * XREFs of ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800E6948
 * Callers:
 *     ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x1800E4D3C (-GetCornerRadius@CTopLevelWindow@@QEBAHXZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800E5124 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180003768 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::s_ChooseWindowFrameFromStyle(
        char a1,
        char a2,
        char a3)
{
  __int64 v3; // rbx
  int v4; // edi
  bool HasRenderedBorder; // al
  __int64 v9; // r9

  v3 = 2LL;
  v4 = a1 & 2;
  HasRenderedBorder = CTopLevelWindow::HasRenderedBorder(a1);
  v9 = 0LL;
  if ( HasRenderedBorder || a2 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      if ( !a3 && (a1 & 0x40) == 0 )
        v3 = 3LL;
    }
    else if ( a3 || (a1 & 0x40) != 0 )
    {
      v3 = v4 != 0 ? 4 : 0;
    }
    else
    {
      v3 = v4 != 0 ? 5LL : 1LL;
    }
    return *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v3);
  }
  return (struct CTopLevelWindow::WindowFrame *)v9;
}
