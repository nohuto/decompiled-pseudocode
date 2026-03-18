/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818
 * Callers:
 *     xxxTooltipWndProc @ 0x1C010CED0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01E2F90 (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C022FE00 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     InitializeMonitorInfo @ 0x1C0021474 (InitializeMonitorInfo.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1C002168C (GreDwmNotifySpriteMonitorChange.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C00833D0 (GreCreateSprite.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ScaleDPIRect @ 0x1C00B099C (ScaleDPIRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     DeleteFadeSprite @ 0x1C01E24C0 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v6; // r12d
  int v7; // r13d
  struct tagRECT *v8; // rbx
  __int64 v9; // rcx
  struct tagRECT v10; // xmm6
  __int32 v11; // r10d
  __int32 v12; // r8d
  LONG top; // r9d
  __int32 v14; // edx
  LONG left; // eax
  __int32 v16; // ecx
  struct tagMINIWINDOWINFO *v17; // r9
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r14d
  unsigned int v24; // r15d
  __int64 v25; // rdx
  unsigned __int16 v27[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v28[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __m128i v29; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v30; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v31[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-78h]
  _BYTE v33[80]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v34[9]; // [rsp+E8h] [rbp-20h] BYREF

  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( gfade[2] )
    return 0LL;
  if ( gfade[1] )
  {
    GreCleanDC();
    GreSetLayout(gfade[1], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    gfade[1] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), a2, a3, a4);
    v9 = gfade[1];
    if ( !v9 )
      return 0LL;
    GreSetDCOwnerEx(v9, 0LL, 0LL, 0LL);
  }
  if ( a1 )
    v8 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v27[0] = 96;
  if ( a1 )
  {
    LODWORD(gfade[6]) |= 8u;
    gfade[0] = *(_QWORD *)a1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v18 = *((_QWORD *)a1 + 5);
          v19 = *(_DWORD *)(v18 + 288);
          if ( (v19 & 0xF) == 0 && (v19 & 0x40000000) != 0 )
          {
            v20 = *(unsigned __int16 *)(v18 + 284);
            if ( (_WORD)v20 != 96 )
              v27[0] = GreGetScaledLogPixels(v20);
          }
        }
      }
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v28);
    xxxSetLayeredWindow(a1, 0, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v28, v21, v22);
  }
  else
  {
    v10 = *v8;
    v30 = 0LL;
    v29 = (__m128i)v10;
    if ( (a5 & 0xF) == 2 )
    {
      v30 = (_QWORD *)MonitorFromRect(v8, 2u, a5);
    }
    else
    {
      v31[0] = 0;
      v31[1] = 0;
      LogicalToPhysicalDPIPoint(v31, v8, a5, &v30);
      if ( *(_WORD *)(v30[5] + 60LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v32 = 0LL;
          v27[0] = GreGetScaledLogPixels(*(unsigned __int16 *)(v30[5] + 60LL));
          ScaleDPIRect(&v29, &v29, v27[0], 0x60u, 0LL, 0LL);
          v11 = v29.m128i_i32[1];
          v12 = v29.m128i_i32[0];
          top = v8->top;
          v14 = v29.m128i_i32[1] - top;
          left = v8->left;
          v16 = v29.m128i_i32[0] - v8->left;
          v29.m128i_i32[2] += v29.m128i_i32[0];
          v8->right += v16;
          v8->bottom += v14;
          v29.m128i_i32[3] += v11;
          v8->left = v16 + left;
          v8->top = top + v14;
          v29.m128i_i32[0] = 2 * v12;
          v29.m128i_i32[1] = 2 * v11;
          v10 = (struct tagRECT)v29;
        }
        else
        {
          v10 = (struct tagRECT)v29;
        }
      }
    }
    memset(v33, 0, 0x48uLL);
    InitializeMonitorInfo((__int64)v33, a5, v30, 0LL);
    LODWORD(gfade[6]) &= ~8u;
    if ( (v6 & 0x100) != 0 )
    {
      memset(v34, 0, 0x88uLL);
      v17 = (struct tagMINIWINDOWINFO *)v34;
      v6 &= ~0x100u;
      v34[0] = v10;
      v34[1] = v10;
      *(_QWORD *)&v34[3] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
    }
    else
    {
      v17 = 0LL;
    }
    gfade[0] = GreCreateSprite(*(HDEV *)(gpDispInfo + 40LL), 0LL, v8, v17, 0x9900u, 1, 1, 0, 0, 0, v27);
    if ( gfade[0] )
      GreDwmNotifySpriteMonitorChange(gfade[0], 0LL, (HSPRITE)gfade[0], (__int64)v33);
  }
  if ( !gfade[0] )
    return 0LL;
  v23 = v8->right - v8->left;
  v24 = v8->bottom - v8->top;
  gfade[2] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), v23, v24, 0, 0LL, v27);
  v25 = gfade[2];
  if ( !v25 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(gfade[1], v25);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(gfade[1], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(gfade[1], 2147483650LL, 0LL, 1LL);
  LODWORD(gfade[3]) = v8->left;
  HIDWORD(gfade[3]) = v8->top;
  LODWORD(gfade[4]) = v23;
  HIDWORD(gfade[4]) = v24;
  LODWORD(gfade[5]) = v7;
  LODWORD(gfade[6]) |= v6;
  HIDWORD(gfade[6]) = (gfade[6] & 0x40) != 0 ? 0xFF00FF : 0;
  return (HDC)gfade[1];
}
