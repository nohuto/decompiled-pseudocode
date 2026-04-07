/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800E5810
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x1800E621C (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z @ 0x180013E98 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x18006EE30 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x1800E5DA4 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(LONG *this, const struct tagPOINT *a2, LONG **a3, unsigned int *a4)
{
  __int64 v7; // rcx
  POINT v8; // rbx
  float CorrectionScaleForUniformSpaceWindow; // xmm4_4
  int x; // edi
  int y; // esi
  LONG *v12; // r13
  unsigned int v13; // r15d
  LONG v14; // eax
  LONG v15; // eax
  LONG v16; // eax
  LONG **v17; // rdi
  __int64 v18; // rsi
  LONG *v19; // rbx
  CWindowData *v20; // rdi
  int MetricsForCaptionBar; // esi
  int v22; // esi
  int v23; // eax
  int v24; // edx
  LONG *v25; // rcx
  unsigned int *v26; // rax
  POINT pt; // [rsp+20h] [rbp-59h]
  unsigned int v29; // [rsp+28h] [rbp-51h] BYREF
  unsigned int *v30; // [rsp+30h] [rbp-49h]
  RECT v31; // [rsp+38h] [rbp-41h] BYREF
  RECT rc; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v33[5]; // [rsp+58h] [rbp-21h] BYREF

  v30 = a4;
  CVisual::DoHitTest((CVisual *)this, a2, (struct CVisual **)&v31, &v29);
  v7 = *((_QWORD *)this + 94);
  v8 = *a2;
  if ( (*(_BYTE *)(v7 + 372) & 1) == 0
    || (CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow((struct CWindowData *)v7),
        CorrectionScaleForUniformSpaceWindow == 1.0) )
  {
    y = v8.y;
    x = v8.x;
  }
  else
  {
    x = (int)((float)((float)v8.x / CorrectionScaleForUniformSpaceWindow) + 0.5);
    y = (int)((float)((float)v8.y / CorrectionScaleForUniformSpaceWindow) + 0.5);
    v8 = (POINT)__PAIR64__(y, x);
  }
  v12 = *(LONG **)&v31.left;
  v13 = v29;
  if ( *(_QWORD *)&v31.left && v29 == -2 && !*((_QWORD *)this + 103) )
  {
    if ( x >= this[157] && x < this[32] - this[158] && y >= *(_DWORD *)(v7 + 112) && y < this[159] )
      v13 = 2;
    *(_QWORD *)&rc.left = 0LL;
    v14 = *(_DWORD *)(v7 + 56) - *(_DWORD *)(v7 + 48);
    if ( v14 < 0 )
      v14 = 0;
    rc.right = v14;
    v15 = *(_DWORD *)(v7 + 60) - *(_DWORD *)(v7 + 52);
    if ( v15 < 0 )
      v15 = 0;
    rc.bottom = v15;
    if ( !PtInRect(&rc, v8) )
    {
      v13 = 18;
      if ( y < 0 )
        v13 = 2;
    }
    v16 = this[156];
    if ( (v16 & 0x20) != 0 )
    {
      if ( (v16 & 0x20000) != 0 )
        pt.x = this[32] - x - 1;
      else
        pt.x = x;
      v17 = (LONG **)v33;
      v33[0] = *((_QWORD *)this + 72);
      v33[1] = *((_QWORD *)this + 66);
      v33[2] = *((_QWORD *)this + 67);
      v33[3] = *((_QWORD *)this + 68);
      pt.y = y;
      v18 = 5LL;
      v33[4] = *((_QWORD *)this + 69);
      do
      {
        v19 = *v17;
        if ( *v17 )
        {
          v31.left = v19[30];
          v31.top = this[171];
          v31.right = v19[30] + v19[32];
          v31.bottom = v19[31] + v19[33];
          if ( v19 == *((LONG **)this + 72) )
          {
            v31.left = this[169];
          }
          else if ( v19 == *((LONG **)this + 69) )
          {
            v31.right = this[32] - this[170];
          }
          if ( PtInRect(&v31, pt) )
          {
            v13 = v19[50];
            v12 = v19;
          }
        }
        ++v17;
        --v18;
      }
      while ( v18 );
    }
    else if ( *((_QWORD *)this + 72) )
    {
      v20 = (CWindowData *)*((_QWORD *)this + 94);
      MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v20, 0x1Fu, 0);
      v22 = MetricsForCaptionBar - GetSystemMetrics(46);
      v23 = (int)(v22 - CWindowData::GetMetricsForCaptionBar(v20, 0x32u, 0)) / 2;
      v24 = 0;
      if ( v23 >= 0 )
        v24 = v23;
      if ( v24 > 0 )
      {
        v25 = (LONG *)*((_QWORD *)this + 72);
        v31.left = v25[30];
        v31.top = v25[31] - v24;
        v31.right = v25[30] + v25[32];
        v31.bottom = v25[31] + v24 + v25[33];
        if ( PtInRect(&v31, v8) )
        {
          v12 = (LONG *)*((_QWORD *)this + 72);
          v13 = v12[50];
        }
      }
    }
  }
  v26 = v30;
  *a3 = v12;
  *v26 = v13;
  return v12 != 0LL;
}
