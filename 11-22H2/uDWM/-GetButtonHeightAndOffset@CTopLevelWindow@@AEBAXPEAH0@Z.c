/*
 * XREFs of ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x1800E5C58
 * Callers:
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180052010 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z @ 0x180013E98 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z.c)
 */

void __fastcall CTopLevelWindow::GetButtonHeightAndOffset(CTopLevelWindow *this, int *a2, int *a3)
{
  char v3; // al
  bool v7; // zf
  __int128 v8; // xmm0
  CWindowData *v9; // rcx
  int v10; // edx
  int v11; // ecx
  int MetricsForCaptionBar; // eax
  int v13; // eax

  v3 = *((_BYTE *)this + 248);
  *a3 = 0;
  *a2 = 0;
  v7 = (*((_BYTE *)this + 624) & 2) == 0;
  v8 = *(_OWORD *)((char *)this + ((v3 & 4) != 0 ? 0x10 : 0) + 660);
  v9 = (CWindowData *)*((_QWORD *)this + 94);
  if ( v7 )
  {
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v9, 0x1Fu, 0);
    v11 = DWORD2(v8);
    v10 = MetricsForCaptionBar + *(_DWORD *)(*((_QWORD *)this + 94) + 112LL);
    if ( v10 >= *((_DWORD *)this + 163) - DWORD2(v8) )
      v10 = *((_DWORD *)this + 163) - DWORD2(v8);
    if ( v10 < 0 )
      v10 = 0;
    if ( (*((_BYTE *)this + 248) & 4) != 0 && *((_DWORD *)this + 171) > *((_DWORD *)this + 167) )
    {
      v13 = v10 - 1;
      v10 = 0;
      if ( v13 >= 0 )
        v10 = v13;
    }
    else
    {
      v11 = DWORD2(v8) + 1;
    }
  }
  else
  {
    v10 = CWindowData::GetMetricsForCaptionBar(v9, 0x35u, 0);
    v11 = *((_DWORD *)this + 159) - v10 - 2;
    if ( v11 <= SDWORD2(v8) )
      v11 = DWORD2(v8);
  }
  *a2 = v10;
  *a3 = v11;
}
