/*
 * XREFs of ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046308
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180046280 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180035D7C (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x180035D9C (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180035DBC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800463E8 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x180046424 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180046464 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046748 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

__int64 __fastcall CText::InitializeVisualTreeClone(__int64 a1, __int64 a2)
{
  int v4; // esi
  char v5; // al
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CRenderDataVisual::InitializeVisualTreeClone();
  if ( v4 < 0 )
  {
    v7 = 525LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\text.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CText::SetText((CText *)a2, *(const unsigned __int16 **)(a1 + 296));
  if ( v4 < 0 )
  {
    v7 = 526LL;
    goto LABEL_8;
  }
  CText::SetFont((CText *)a2, (const struct tagLOGFONTW *)(a1 + 304));
  CText::SetColor((CText *)a2, *(_DWORD *)(a1 + 416));
  CText::SetBackgroundColor((CText *)a2, *(_DWORD *)(a1 + 420));
  CText::SetRTLReading((CText *)a2, (*(_BYTE *)(a1 + 288) & 2) != 0);
  CText::SetReverseAlignment((CText *)a2, (*(_BYTE *)(a1 + 288) & 4) != 0);
  if ( (*(_DWORD *)(a1 + 88) & 0x9000) == 0 )
  {
    v5 = *(_BYTE *)(a2 + 288);
    *(_DWORD *)(a2 + 88) &= 0xFFFF6FFF;
    *(_BYTE *)(a2 + 288) ^= (*(_BYTE *)(a1 + 288) ^ v5) & 1;
    *(_QWORD *)(a2 + 408) = *(_QWORD *)(a1 + 408);
  }
  return 0LL;
}
