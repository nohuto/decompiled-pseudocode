/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180020330
 * Callers:
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180020020 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x1800201D0 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z @ 0x180100410 (-UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::DoCanvasLayout(
        const struct tagSIZE *a1,
        const struct _MARGINS *a2,
        const struct tagSIZE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5)
{
  int cxLeftWidth; // r10d
  int cxRightWidth; // edi
  int cyBottomHeight; // ebx
  int cyTopHeight; // r11d
  LONG cx; // eax
  LONG cy; // eax
  bool result; // al
  int v12; // eax
  struct tagPOINT v13; // [rsp+0h] [rbp-18h]
  unsigned __int64 v14; // [rsp+28h] [rbp+10h]

  cxLeftWidth = a2->cxLeftWidth;
  cxRightWidth = a2->cxRightWidth;
  cyBottomHeight = a2->cyBottomHeight;
  cyTopHeight = a2->cyTopHeight;
  if ( *(_QWORD *)&a2->cxLeftWidth == 0x7FFFFFFF7FFFFFFFLL && cyTopHeight == 0x7FFFFFFF && cyBottomHeight == 0x7FFFFFFF )
    return 0;
  v14 = (unsigned __int64)*a3;
  v13.y = 0;
  if ( cxRightWidth == 0x7FFFFFFF )
  {
    v12 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v12 = a2->cxLeftWidth;
  }
  else
  {
    cx = a1->cx;
    if ( cxLeftWidth != 0x7FFFFFFF )
    {
      v13.x = a2->cxLeftWidth;
      LODWORD(v14) = cx - cxRightWidth - cxLeftWidth;
      goto LABEL_5;
    }
    v12 = cx - *(_QWORD *)a3 - cxRightWidth;
  }
  v13.x = v12;
LABEL_5:
  if ( cyBottomHeight == 0x7FFFFFFF )
  {
    if ( cyTopHeight == 0x7FFFFFFF )
      goto LABEL_9;
  }
  else
  {
    cy = a1->cy;
    if ( cyTopHeight == 0x7FFFFFFF )
    {
      v13.y = cy - HIDWORD(*(unsigned __int64 *)a3) - cyBottomHeight;
      goto LABEL_9;
    }
    HIDWORD(v14) = cy - cyTopHeight - cyBottomHeight;
  }
  v13.y = a2->cyTopHeight;
LABEL_9:
  if ( (int)v14 <= 0 )
    LODWORD(v14) = 0;
  if ( SHIDWORD(v14) <= 0 )
    HIDWORD(v14) = 0;
  result = 1;
  *a5 = (struct tagSIZE)v14;
  *a4 = v13;
  return result;
}
