/*
 * XREFs of ?WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z @ 0x1805E57F8
 * Callers:
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x1805E58FC (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall WICIsOrientationSupported(struct IWICBitmapDecoder *a1)
{
  struct IWICBitmapDecoderVtbl *lpVtbl; // rax
  int v2; // eax
  char v3; // cl
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF

  lpVtbl = a1->lpVtbl;
  v10 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, __int128 *))lpVtbl->GetContainerFormat)(a1, &v10);
  v3 = 0;
  if ( v2 >= 0 )
  {
    v4 = v10 - *(_QWORD *)&GUID_ContainerFormatJpeg.Data1;
    if ( (_QWORD)v10 == *(_QWORD *)&GUID_ContainerFormatJpeg.Data1 )
      v4 = *((_QWORD *)&v10 + 1) - *(_QWORD *)GUID_ContainerFormatJpeg.Data4;
    if ( !v4 )
      return 1;
    v5 = v10 - *(_QWORD *)&GUID_ContainerFormatAdng.Data1;
    if ( (_QWORD)v10 == *(_QWORD *)&GUID_ContainerFormatAdng.Data1 )
      v5 = *((_QWORD *)&v10 + 1) - *(_QWORD *)GUID_ContainerFormatAdng.Data4;
    if ( !v5 )
      return 1;
    v6 = v10 - *(_QWORD *)&GUID_ContainerFormatHeif.Data1;
    if ( (_QWORD)v10 == *(_QWORD *)&GUID_ContainerFormatHeif.Data1 )
      v6 = *((_QWORD *)&v10 + 1) - *(_QWORD *)GUID_ContainerFormatHeif.Data4;
    if ( !v6 )
      return 1;
    v7 = v10 - *(_QWORD *)&GUID_ContainerFormatRaw.Data1;
    if ( (_QWORD)v10 == *(_QWORD *)&GUID_ContainerFormatRaw.Data1 )
      v7 = *((_QWORD *)&v10 + 1) - *(_QWORD *)GUID_ContainerFormatRaw.Data4;
    if ( !v7 )
      return 1;
    v8 = v10 - 0x4736427AFEC14E3FLL;
    if ( (_QWORD)v10 == 0x4736427AFEC14E3FLL )
      v8 = *((_QWORD *)&v10 + 1) - 0x2293F684ED27E6AALL;
    if ( !v8 )
      return 1;
  }
  return v3;
}
