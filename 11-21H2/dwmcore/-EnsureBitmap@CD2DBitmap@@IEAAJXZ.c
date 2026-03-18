/*
 * XREFs of ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800D568C
 * Callers:
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18001A7F0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800D5620 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x18028FF38 (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800D57FC (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::EnsureBitmap(CD2DBitmap *this)
{
  struct ID2D1Bitmap1 **v1; // r14
  unsigned int v3; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, struct IDXGISurface **); // rsi
  int v10; // eax
  __int64 v11; // rcx
  char *v12; // rcx
  __int64 v13; // rbx
  int D2DBitmapFromDxgiSurface; // eax
  __int64 v15; // rcx
  struct ID2D1Bitmap1 *v16; // rcx
  __int64 v17; // rsi
  struct IDXGISurface *v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+58h] [rbp+28h] BYREF

  v1 = (struct ID2D1Bitmap1 **)((char *)this + 136);
  if ( *((_QWORD *)this + 17) )
  {
    return 0;
  }
  else
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 15);
    if ( v5 )
    {
      v18 = 0LL;
      v19 = 0LL;
      v6 = (**v5)(v5, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v19);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x1A2u);
      }
      else
      {
        v8 = v19;
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IDXGISurface **))(*(_QWORD *)v19 + 96LL);
        if ( v18 )
          ((void (__fastcall *)(struct IDXGISurface *))v18->lpVtbl->Release)(v18);
        v10 = v9(v8, *((unsigned int *)this + 60), &v18);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x1A5u);
        }
        else
        {
          v12 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16;
          v13 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
          wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v1);
          D2DBitmapFromDxgiSurface = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                                       (CD2DContext *)(v13 + 16),
                                       v18,
                                       (const struct D2D1_BITMAP_PROPERTIES1 *)((char *)this + 200),
                                       v1);
          v3 = D2DBitmapFromDxgiSurface;
          if ( D2DBitmapFromDxgiSurface < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, D2DBitmapFromDxgiSurface, 0x1A9u);
          }
          else if ( *((_DWORD *)this + 51) == 3 )
          {
            v16 = *v1;
            v17 = *((_QWORD *)this + 18);
            *((_QWORD *)this + 18) = *v1;
            if ( v16 )
              (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v16 + 8LL))(v16);
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2003292412, 0x1B4u);
    }
  }
  return v3;
}
