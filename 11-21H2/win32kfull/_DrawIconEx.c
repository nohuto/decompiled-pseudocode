/*
 * XREFs of _DrawIconEx @ 0x1C00BDD48
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C00B967C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     NtUserDrawIconEx @ 0x1C00BDC50 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01EDC90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025DC8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0073978 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     BltIcon @ 0x1C00BE16C (BltIcon.c)
 *     GreSetBrushOrg @ 0x1C00C1C04 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 *     GreGetBrushOrg @ 0x1C014F5CC (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(
        HDC a1,
        LONG a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        int a9)
{
  char v9; // r12
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // edi
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int DpiDependentMetric; // r15d
  int v20; // eax
  unsigned int v21; // r14d
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // eax
  int v27; // r12d
  int v28; // ecx
  int v30; // eax
  HDC v31; // r12
  __int64 CompatibleBitmapInternal; // rax
  int v33; // ecx
  int v34; // eax
  unsigned int DpiForSystem; // eax
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // [rsp+68h] [rbp-41h]
  __int64 v39; // [rsp+78h] [rbp-31h]
  __int64 v40; // [rsp+80h] [rbp-29h]
  __int64 v41; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v42; // [rsp+90h] [rbp-19h]
  unsigned int v43; // [rsp+94h] [rbp-15h]
  __int64 v44; // [rsp+98h] [rbp-11h]
  __int64 CompatibleDC; // [rsp+110h] [rbp+67h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = *(_DWORD *)(a4 + 80);
  v12 = a9 & 0x10;
  v38 = 0;
  a9 = 0;
  AnimatedCursorFrame = (struct tagCURSOR *)a4;
  LODWORD(CompatibleDC) = 0;
  v14 = 0;
  if ( (v11 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame((struct tagACON *const)a4, a7)) != 0LL )
  {
    if ( *((_QWORD *)AnimatedCursorFrame + 16) )
    {
      if ( (v9 & 3) == 3 )
        v14 = 1;
      v38 = v14;
    }
    GetVirtualizedCursorSize(AnimatedCursorFrame, &a9, (int *)&CompatibleDC);
    DpiDependentMetric = a5;
    v20 = v9 & 8;
    if ( !a5 )
    {
      if ( (v9 & 8) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v16, v15);
        DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
        v20 = v9 & 8;
      }
      else
      {
        DpiDependentMetric = a9;
      }
    }
    v21 = a6;
    if ( !a6 )
    {
      if ( v20 )
      {
        v36 = GetDpiForSystem(2LL, v15);
        v22 = GetDpiDependentMetric(6LL, v36);
      }
      else
      {
        v15 = (unsigned int)((int)CompatibleDC >> 31);
        LODWORD(v15) = (int)CompatibleDC % 2;
        v22 = (int)CompatibleDC / 2;
      }
      v21 = v22;
    }
    CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), v15, v17, v18);
    v25 = CompatibleDC;
    if ( CompatibleDC )
    {
      if ( a8 )
      {
        v31 = (HDC)GreCreateCompatibleDC(a1, CompatibleDC, v23, v24);
        if ( v31 )
        {
          CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, DpiDependentMetric, v21, 0, 0LL, 0LL);
          v40 = CompatibleBitmapInternal;
          if ( CompatibleBitmapInternal )
          {
            v39 = GreSelectBitmap(v31, CompatibleBitmapInternal);
            GreGetBrushOrg(a1);
            GreSetBrushOrg(v31);
            v44 = a8;
            v41 = 0LL;
            v42 = DpiDependentMetric;
            v43 = v21;
            GrePolyPatBlt(v31, 0xF00021u, (struct _POLYPATBLT *)&v41, 1u);
            if ( v38 )
            {
              v33 = 3;
              v34 = v12 != 0 ? -2134114272 : 13369376;
            }
            else
            {
              BltIcon(v31, v21, CompatibleDC, (__int64)AnimatedCursorFrame, 1, v12 != 0 ? -2138570554 : 8913094);
              v33 = 2;
              v34 = v12 != 0 ? -2140798906 : 6684742;
            }
            BltIcon(v31, v21, CompatibleDC, (__int64)AnimatedCursorFrame, v33, v34);
            NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v21, v31, 0, 0, 13369376, -1, 0);
            GreSelectBitmap(v31, v39);
            GreDeleteObject(v40);
            v10 = 1;
          }
          GreDeleteDC(v31);
        }
      }
      else
      {
        if ( v14 )
        {
          BltIcon(a1, v21, CompatibleDC, (__int64)AnimatedCursorFrame, 3, v12 != 0 ? -2134114272 : 13369376);
        }
        else
        {
          v26 = v9 & 1;
          v27 = v9 & 2;
          a9 = v26;
          if ( v26 )
          {
            if ( v27 )
              v28 = v12 != 0 ? -2138570554 : 8913094;
            else
              v28 = v12 != 0 ? -2134114272 : 13369376;
            BltIcon(a1, v21, CompatibleDC, (__int64)AnimatedCursorFrame, 1, v28);
            v25 = CompatibleDC;
            v26 = a9;
          }
          if ( v27 )
          {
            if ( v26 )
              v30 = v12 != 0 ? -2140798906 : 6684742;
            else
              v30 = v12 != 0 ? -2134114272 : 13369376;
            BltIcon(a1, v21, v25, (__int64)AnimatedCursorFrame, 2, v30);
          }
        }
        v10 = 1;
      }
      GreDeleteDC(CompatibleDC);
    }
  }
  else
  {
    UserSetLastError(87LL, v37);
  }
  return v10;
}
