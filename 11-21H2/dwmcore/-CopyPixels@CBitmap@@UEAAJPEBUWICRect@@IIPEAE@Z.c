/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18006D4B0
 * Callers:
 *     ?CopyPixels@CBitmap@@WDA@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180106AD0 (-CopyPixels@CBitmap@@WDA@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z @ 0x18006D68C (--$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18006D9D0 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18006E0AC (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18006E7CC (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-71h]
  unsigned int v16; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-3Dh] BYREF
  __int64 v18; // [rsp+58h] [rbp-39h] BYREF
  int v19; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  char *v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  int v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+84h] [rbp-Dh]
  __int128 v26; // [rsp+88h] [rbp-9h] BYREF

  v18 = 0LL;
  v19 = 0;
  v22 = (char *)this + 56;
  v17 = 0;
  Src = 0LL;
  v16 = 0;
  v26 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( !a5 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0xA3u, 0LL);
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v14 = *((_DWORD *)this + 26);
    v23 = 0LL;
    if ( v14 > 0x7FFFFFFF )
    {
      v24 = -1;
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x7FFFFFFFu, 0LL, 0, -2147024362, 0xABu, 0LL);
      goto LABEL_10;
    }
    v24 = v14;
    if ( *((_DWORD *)this + 27) > 0x7FFFFFFFu )
    {
      v25 = -1;
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x7FFFFFFFu, 0LL, 0, -2147024362, 0xACu, 0LL);
      goto LABEL_10;
    }
    v25 = *((_DWORD *)this + 27);
    a2 = (const struct WICRect *)&v23;
  }
  v10 = CBitmap::HrCheckPixelRect(this, a2, &v26);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 177;
    goto LABEL_24;
  }
  v10 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 30), a3, a2, a4);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 182;
    goto LABEL_24;
  }
  v10 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 3) + 24LL))(
          (char *)this + 24,
          a2,
          1LL,
          &v18);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 184;
    goto LABEL_24;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v18 + 8LL))(v18, &v19, &v17);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 186;
    goto LABEL_24;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 16LL))(v18, &v20);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 187;
    goto LABEL_24;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v18 + 24LL))(
          v18,
          &v16,
          &Src);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 189;
    goto LABEL_24;
  }
  v10 = CBitmap::CopyPixelsHelper((enum DXGI_FORMAT)*((_DWORD *)this + 30), a2->Width, v17, v20, v16, Src, a3, a4, a5);
  v12 = v10;
  if ( v10 < 0 )
  {
    v15 = 202;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v15, 0LL);
  }
LABEL_10:
  ReleaseInterfaceNoNULL<IBitmapLock>(v18);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v22);
  return v12;
}
