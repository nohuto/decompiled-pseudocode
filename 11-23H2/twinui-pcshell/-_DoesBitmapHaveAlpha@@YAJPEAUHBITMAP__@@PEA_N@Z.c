/*
 * XREFs of ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x180552600
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1802DFAA4 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800ECE64 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _DoesBitmapHaveAlpha(HBITMAP hbm, bool *a2)
{
  int Error; // ebx
  unsigned __int64 v5; // rcx
  signed int v6; // r14d
  HDC DC; // rax
  char *v8; // rdi
  HDC v9; // rsi
  bool v10; // cl
  signed int v11; // edx
  _BYTE *v12; // r8
  LPVOID lpvBits; // [rsp+40h] [rbp-29h] BYREF
  _BYTE pv[4]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-1Dh]
  UINT cLines; // [rsp+50h] [rbp-19h]
  __int16 v18; // [rsp+58h] [rbp-11h]
  __int16 v19; // [rsp+5Ah] [rbp-Fh]
  struct tagBITMAPINFO bmi; // [rsp+68h] [rbp-1h] BYREF

  *a2 = 0;
  if ( GetObjectW(hbm, 32, pv) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  if ( v18 == 1 && v19 == 32 )
  {
    v5 = cLines * (unsigned __int64)v16;
    if ( v5 <= 0xFFFFFFFF && (lpvBits = 0LL, v6 = cLines * v16, is_mul_ok((unsigned int)v5, 4uLL)) )
    {
      Error = CTCoAllocPolicy::Alloc((void *)v5, 1, 4LL * (unsigned int)v5, &lpvBits);
      if ( Error >= 0 )
      {
        DC = GetDC(0LL);
        v8 = (char *)lpvBits;
        v9 = DC;
        if ( DC )
        {
          memset(&bmi.bmiHeader.biCompression, 0, 28);
          bmi.bmiHeader.biWidth = v16;
          bmi.bmiHeader.biSize = 40;
          bmi.bmiHeader.biHeight = cLines;
          *(_DWORD *)&bmi.bmiHeader.biPlanes = 2097153;
          if ( GetDIBits(DC, hbm, 0, cLines, lpvBits, &bmi, 0) )
          {
            Error = 0;
            v10 = 0;
            v11 = 0;
            if ( v6 > 0 )
            {
              v12 = v8 + 3;
              do
              {
                if ( v10 )
                  break;
                v10 = *v12 != 0;
                ++v11;
                v12 += 4;
              }
              while ( v11 < v6 );
            }
            *a2 = v10;
          }
          else
          {
            Error = -2147467259;
          }
          ReleaseDC(0LL, v9);
        }
        else
        {
          Error = -2147467259;
        }
        CoTaskMemFree(v8);
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return (unsigned int)Error;
}
