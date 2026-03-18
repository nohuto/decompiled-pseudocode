/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C02210E4
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0221478 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     FillRect @ 0x1C0028BEC (FillRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1C01572D2 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C0220810 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C0220C88 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0220DE4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C02DE52C (GreCreateDIBitmapReal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C02DE5D0 (GreDecBitmapExclusiveRefCnt.c)
 */

__int64 __fastcall GenerateWindowShadow(struct tagWND *a1, HDC a2)
{
  __int64 v2; // rax
  int v3; // r12d
  __m128i v6; // xmm0
  int v7; // ecx
  int v8; // r13d
  signed int v9; // r14d
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  LONG right; // esi
  LONG bottom; // edi
  __int64 DIBitmapReal; // rax
  __int64 v26; // rbx
  HBRUSH StockObject; // rax
  __int64 ScaledWindowShadowFromDIB; // rax
  __int64 v29; // rdi
  RECT v31; // [rsp+70h] [rbp-49h] BYREF
  int v32; // [rsp+80h] [rbp-39h] BYREF
  int v33; // [rsp+84h] [rbp-35h]
  void *v34; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v35; // [rsp+90h] [rbp-29h]
  __int64 v36; // [rsp+98h] [rbp-21h]
  _DWORD v37[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v38; // [rsp+ACh] [rbp-Dh]
  __int128 v39; // [rsp+B4h] [rbp-5h]
  __int64 v40; // [rsp+C4h] [rbp+Bh]

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v35 = a1;
  v40 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v6 = *(__m128i *)(v2 + 88);
  v7 = *(_BYTE *)(v2 + 26) & 0x40;
  v32 = 0;
  v8 = 0;
  v9 = 1;
  v33 = v7;
  v31.top = 0;
  v31.left = 0;
  v31.right = v6.m128i_i32[2] - _mm_cvtsi128_si32(v6);
  v31.bottom = v6.m128i_i32[3] - v6.m128i_i32[1];
  if ( !IsRectEmptyInl(&v31) )
  {
    v31.right = v10 + 5;
    v31.bottom = v11 + 5;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *((_QWORD *)PtiCurrentShared(v13, v12, v14, v15) + 57)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v17, v16, v18, v19) + 57) + 8LL) + 64LL) & 1) != 0
      && (v20 = *((_QWORD *)a1 + 5), v21 = *(_DWORD *)(v20 + 288), (v21 & 0xF) == 0)
      && (v21 & 0x40000000) != 0
      && (v22 = *(unsigned __int16 *)(v20 + 284), (_WORD)v22 != 96) )
    {
      v9 = (unsigned __int16)GreGetScaledLogPixels(v22) / 0x60u;
      right = v9 * v31.right;
      bottom = v9 * v31.bottom;
      v31.right *= v9;
      v31.bottom *= v9;
    }
    else
    {
      bottom = v31.bottom;
      right = v31.right;
    }
    v40 = 0LL;
    v39 = 0LL;
    v37[0] = 40;
    v37[1] = right;
    v37[2] = bottom;
    v38 = 2097153LL;
    DIBitmapReal = GreCreateDIBitmapReal(
                     (_DWORD)a2,
                     0,
                     0,
                     (unsigned int)v37,
                     0,
                     44,
                     0,
                     0LL,
                     0,
                     0LL,
                     0,
                     0LL,
                     (__int64)&v34);
    v26 = DIBitmapReal;
    if ( DIBitmapReal )
    {
      v36 = GreSelectBitmap(a2, DIBitmapReal);
      StockObject = (HBRUSH)GreGetStockObject(4LL);
      FillRect(a2, &v31, StockObject);
      if ( right < 15 || bottom < 15 )
        v8 = 1;
      if ( (unsigned int)DrawWindowShadow(v35, a2, v33, v8, &v32) )
      {
        if ( !v32 || v8 )
          DrawRegionalShadow((char *)v34, right, bottom);
        else
          DrawRoundedRectangularShadow(v34, right, bottom, v33, v9);
        v3 = 1;
      }
      GreDecBitmapExclusiveRefCnt(v26);
      if ( v3 )
      {
        if ( v9 <= 1 )
          return v26;
        ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v35, a2, v9);
        v29 = ScaledWindowShadowFromDIB;
        if ( ScaledWindowShadowFromDIB )
        {
          GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
          GreDeleteObject(v26);
          return v29;
        }
      }
      GreSelectBitmap(a2, v36);
      GreDeleteObject(v26);
      return 0LL;
    }
  }
  return 0LL;
}
