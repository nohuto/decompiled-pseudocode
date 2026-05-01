/*
 * XREFs of ?GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z @ 0x18061B470
 * Callers:
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x18061B670 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x180189A5F (CoTaskMemFree_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x180189A6B (__Platform_CoTaskMemAlloc.c)
 */

__int64 __fastcall GetInfoFor32BitHBITMAP(HBITMAP hbm, int *a2, int *a3, struct tagRGBQUAD **a4, int *a5)
{
  unsigned int v9; // esi
  struct tagBITMAPINFO *lpbmi; // rbx
  HDC CompatibleDC; // rax
  HDC v12; // rbp
  struct tagRGBQUAD *lpvBits; // rax
  struct tagRGBQUAD *v14; // rdi
  int biHeight; // r9d
  char v16; // cl
  int v17; // eax
  int v18; // r10d
  unsigned int v19; // r8d
  int v20; // edx
  __int64 v21; // rax
  BYTE *v22; // r9
  LONG v23; // ecx
  LONG v24; // edx
  BYTE *v25; // rax

  v9 = -2147024882;
  lpbmi = (struct tagBITMAPINFO *)LocalAlloc(0x40u, 0x42CuLL);
  if ( lpbmi )
  {
    CompatibleDC = CreateCompatibleDC(0LL);
    v12 = CompatibleDC;
    if ( CompatibleDC )
    {
      lpbmi->bmiHeader.biSize = 40;
      if ( GetDIBits(CompatibleDC, hbm, 0, 0, 0LL, lpbmi, 0) )
      {
        lpvBits = (struct tagRGBQUAD *)_Platform_CoTaskMemAlloc(lpbmi->bmiHeader.biSizeImage);
        v14 = lpvBits;
        if ( lpvBits )
        {
          biHeight = lpbmi->bmiHeader.biHeight;
          if ( biHeight > 0 )
          {
            biHeight = -biHeight;
            lpbmi->bmiHeader.biHeight = biHeight;
          }
          if ( GetDIBits(v12, hbm, 0, -biHeight, lpvBits, lpbmi, 0) )
          {
            v16 = 0;
            v17 = lpbmi->bmiHeader.biWidth * lpbmi->bmiHeader.biBitCount;
            v18 = -lpbmi->bmiHeader.biHeight;
            lpbmi->bmiHeader.biHeight = v18;
            v19 = ((v17 + 7) / 8 + 3) & 0xFFFFFFFC;
            v20 = 0;
            while ( v20 < v18 )
            {
              v21 = 0LL;
              v22 = &v14->rgbReserved + v19 * v20;
              do
              {
                if ( v21 >= lpbmi->bmiHeader.biWidth )
                  break;
                if ( *v22 )
                  v16 = 1;
                ++v21;
                v22 += 4;
              }
              while ( !v16 );
              ++v20;
              if ( v16 )
                goto LABEL_23;
            }
            v23 = 0;
            if ( v18 > 0 )
            {
              do
              {
                v24 = 0;
                if ( lpbmi->bmiHeader.biWidth > 0 )
                {
                  v25 = &v14->rgbReserved + v19 * v23;
                  do
                  {
                    *v25 = -1;
                    ++v24;
                    v25 += 4;
                  }
                  while ( v24 < lpbmi->bmiHeader.biWidth );
                }
                ++v23;
              }
              while ( v23 < lpbmi->bmiHeader.biHeight );
            }
LABEL_23:
            *a4 = v14;
            v14 = 0LL;
            v9 = 0;
            *a5 = v19 >> 2;
            *a2 = lpbmi->bmiHeader.biWidth;
            *a3 = lpbmi->bmiHeader.biHeight;
          }
          CoTaskMemFree_0(v14);
        }
      }
      DeleteDC(v12);
    }
    LocalFree(lpbmi);
  }
  return v9;
}
