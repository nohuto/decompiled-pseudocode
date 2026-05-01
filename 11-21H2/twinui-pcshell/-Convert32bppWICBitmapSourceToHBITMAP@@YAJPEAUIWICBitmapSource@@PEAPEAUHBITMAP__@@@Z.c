/*
 * XREFs of ?Convert32bppWICBitmapSourceToHBITMAP@@YAJPEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x180238F16
 * Callers:
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x180239068 (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Convert32bppWICBitmapSourceToHBITMAP(struct IWICBitmapSource *a1, HBITMAP *a2)
{
  int v4; // ebx
  HBITMAP v5; // rdi
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  LONG v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+34h] [rbp-15h] BYREF
  void *ppvBits; // [rsp+38h] [rbp-11h] BYREF
  _DWORD v11[4]; // [rsp+40h] [rbp-9h] BYREF
  BITMAPINFO pbmi; // [rsp+50h] [rbp+7h] BYREF

  *a2 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, LONG *, int *))a1->lpVtbl->GetSize)(a1, &v8, &v9);
  if ( v4 >= 0 )
  {
    pbmi.bmiHeader.biSize = 40;
    memset(&pbmi.bmiHeader.biCompression, 0, 28);
    pbmi.bmiHeader.biWidth = v8;
    *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
    pbmi.bmiHeader.biHeight = -v9;
    v5 = CreateDIBSection(0LL, &pbmi, 0, &ppvBits, 0LL, 0);
    if ( v5 )
    {
      v11[0] = 0;
      v11[1] = 0;
      lpVtbl = a1->lpVtbl;
      v11[2] = v8;
      v11[3] = v9;
      v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _DWORD *, _QWORD, _QWORD, void *))lpVtbl->CopyPixels)(
             a1,
             v11,
             (unsigned int)(4 * v8),
             (unsigned int)(4 * v9 * v8),
             ppvBits);
      if ( v4 < 0 )
        DeleteObject(v5);
      else
        *a2 = v5;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v4;
}
