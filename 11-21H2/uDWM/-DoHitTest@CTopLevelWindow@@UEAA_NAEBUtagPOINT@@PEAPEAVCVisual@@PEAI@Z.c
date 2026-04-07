/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18000AAD0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180003554 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180018570 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x1800E4D88 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180107E58 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(
        CTopLevelWindow *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  LONG v5; // r8d
  CTopLevelWindow *v8; // r14
  int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  POINT v13; // r12
  LONG x; // edx
  LONG left; // edi
  int top; // ebx
  int v17; // eax
  __int64 v18; // rbx
  int SystemMetricsForDpi; // edi
  int v20; // eax
  LONG *v21; // r8
  _DWORD *v22; // rax
  float *v24; // rdx
  LONG y; // eax
  float CorrectionScaleForUniformSpaceWindow; // xmm3_4
  LONG **v27; // rdi
  __int64 v28; // r12
  LONG *v29; // rbx
  int v30; // [rsp+30h] [rbp-79h] BYREF
  unsigned int *v31; // [rsp+38h] [rbp-71h]
  RECT v32; // [rsp+40h] [rbp-69h] BYREF
  RECT v33; // [rsp+50h] [rbp-59h] BYREF
  RECT rc; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v35[8]; // [rsp+70h] [rbp-39h] BYREF

  v31 = a4;
  v5 = 0;
  v8 = 0LL;
  v9 = 0;
  *(_QWORD *)&rc.left = 0LL;
  v30 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 92) & 4) == 0 || *((_DWORD *)this + 50) == -1) )
    goto LABEL_13;
  LODWORD(v10) = -1;
  while ( 1 )
  {
    if ( !(_BYTE)v8 )
    {
      LODWORD(v10) = *((_DWORD *)this + 18);
      LOBYTE(v8) = 1;
    }
    v10 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v10 == -1 )
      break;
    v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v10);
    *(struct tagPOINT *)&v32.left = *a2;
    v32.left -= *(_DWORD *)(v11 + 120);
    v32.top -= *(_DWORD *)(v11 + 124);
    if ( (*(_BYTE *)(v11 + 92) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v11, (struct D2DMatrix *)v35);
      if ( D2DMatrixInverse((struct D2DMatrix *)v35, v24, (const struct D2DMatrix *)v35) )
      {
        *(float *)&v33.left = (float)v32.left;
        *(float *)&v33.top = (float)v32.top;
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v33,
          (const struct D2DVector2 *)&v33,
          (const struct D2DMatrix *)v35);
        v32.top = (int)*(float *)&v33.top;
        v32.left = (int)*(float *)&v33.left;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( (*(unsigned __int8 (__fastcall **)(__int64, RECT *, RECT *, int *))(*(_QWORD *)v11 + 136LL))(
             v11,
             &v32,
             &rc,
             &v30) )
      {
        break;
      }
    }
  }
  v8 = *(CTopLevelWindow **)&rc.left;
  if ( *(_QWORD *)&rc.left
    || a2->x < 0
    || a2->x >= *((_DWORD *)this + 32)
    || (y = a2->y, y < 0)
    || y >= *((_DWORD *)this + 33) )
  {
    v9 = v30;
  }
  else
  {
    v9 = *((_DWORD *)this + 50);
    v8 = this;
  }
  v5 = 0;
LABEL_13:
  v12 = *((_QWORD *)this + 94);
  v13 = *a2;
  *(POINT *)&v32.left = v13;
  if ( (*(_BYTE *)(v12 + 372) & 1) == 0 )
  {
    x = v13.x;
    goto LABEL_15;
  }
  CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow((struct CWindowData *)v12);
  x = v13.x;
  if ( CorrectionScaleForUniformSpaceWindow == 1.0 )
  {
LABEL_15:
    left = v32.left;
    top = v32.top;
  }
  else
  {
    x = (int)((float)((float)v13.x / CorrectionScaleForUniformSpaceWindow) + 0.5);
    v32.left = x;
    left = x;
    top = (int)((float)((float)v32.top / CorrectionScaleForUniformSpaceWindow) + 0.5);
    v32.top = top;
    v13 = *(POINT *)&v32.left;
  }
  if ( v8 && v9 == -2 && !*((_QWORD *)this + 105) )
  {
    if ( x >= *((_DWORD *)this + 153)
      && x < *((_DWORD *)this + 32) - *((_DWORD *)this + 154)
      && top >= *(_DWORD *)(v12 + 112)
      && top < *((_DWORD *)this + 155) )
    {
      v9 = 2;
    }
    *(_QWORD *)&rc.left = 0LL;
    if ( *(_DWORD *)(v12 + 56) - *(_DWORD *)(v12 + 48) < 0 )
      rc.right = v5;
    else
      rc.right = *(_DWORD *)(v12 + 56) - *(_DWORD *)(v12 + 48);
    if ( *(_DWORD *)(v12 + 60) - *(_DWORD *)(v12 + 52) < 0 )
      rc.bottom = v5;
    else
      rc.bottom = *(_DWORD *)(v12 + 60) - *(_DWORD *)(v12 + 52);
    if ( !PtInRect(&rc, v13) )
    {
      v9 = 18;
      if ( top < 0 )
        v9 = 2;
    }
    v17 = *((_DWORD *)this + 152);
    if ( (v17 & 0x20) != 0 )
    {
      if ( (v17 & 0x20000) != 0 )
        v33.left = *((_DWORD *)this + 32) - left - 1;
      else
        v33.left = left;
      v27 = (LONG **)v35;
      v35[0] = *((_QWORD *)this + 68);
      v28 = 5LL;
      v35[1] = *((_QWORD *)this + 63);
      v35[2] = *((_QWORD *)this + 64);
      v35[3] = *((_QWORD *)this + 65);
      v35[4] = *((_QWORD *)this + 66);
      v33.top = top;
      do
      {
        v29 = *v27;
        if ( *v27 )
        {
          v32.left = v29[30];
          v32.top = *((_DWORD *)this + 167);
          v32.right = v29[30] + v29[32];
          v32.bottom = v29[31] + v29[33];
          if ( v29 == *((LONG **)this + 68) )
          {
            v32.left = *((_DWORD *)this + 165);
          }
          else if ( v29 == *((LONG **)this + 66) )
          {
            v32.right = *((_DWORD *)this + 32) - *((_DWORD *)this + 166);
          }
          if ( PtInRect(&v32, *(POINT *)&v33.left) )
          {
            v9 = v29[50];
            v8 = (CTopLevelWindow *)v29;
          }
        }
        ++v27;
        --v28;
      }
      while ( v28 );
    }
    else if ( *((_QWORD *)this + 68) )
    {
      v18 = *((_QWORD *)this + 94);
      SystemMetricsForDpi = GetSystemMetricsForDpi(50LL, *(unsigned int *)(v18 + 348));
      LODWORD(v18) = GetSystemMetricsForDpi(31LL, *(unsigned int *)(v18 + 348));
      v20 = ((int)v18 - SystemMetricsForDpi - GetSystemMetrics(46)) / 2;
      if ( v20 >= 1 )
      {
        v21 = (LONG *)*((_QWORD *)this + 68);
        v33.left = v21[30];
        v33.top = v21[31] - v20;
        v33.right = v21[30] + v21[32];
        v33.bottom = v21[31] + v20 + v21[33];
        if ( PtInRect(&v33, v13) )
        {
          v8 = (CTopLevelWindow *)*((_QWORD *)this + 68);
          v9 = *((_DWORD *)v8 + 50);
        }
      }
    }
  }
  v22 = v31;
  *a3 = v8;
  *v22 = v9;
  return v8 != 0LL;
}
