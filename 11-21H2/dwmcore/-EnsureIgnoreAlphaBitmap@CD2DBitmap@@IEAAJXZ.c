/*
 * XREFs of ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x18028FF38
 * Callers:
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800D5620 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800D568C (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800D57FC (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::EnsureIgnoreAlphaBitmap(CD2DBitmap *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // ebx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 **); // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  char *v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  D2D1_BITMAP_PROPERTIES1 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+70h] [rbp+20h] BYREF
  struct IDXGISurface *v21; // [rsp+78h] [rbp+28h] BYREF

  v1 = (__int64 *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
  {
    return 0;
  }
  else
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 15);
    if ( v4 )
    {
      if ( *((_DWORD *)this + 51) == 3 )
      {
        v5 = CD2DBitmap::EnsureBitmap(this);
        v3 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x1C8u);
      }
      else
      {
        v20 = 0LL;
        v7 = (**v4)(v4, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v20);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x1CDu);
        }
        else
        {
          v9 = *v20;
          v21 = 0LL;
          v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IDXGISurface **))(v9 + 96))(
                  v20,
                  *((unsigned int *)this + 60),
                  &v21);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x1D1u);
          }
          else
          {
            v12 = *((_QWORD *)this + 2);
            v13 = *(_OWORD *)((char *)this + 216);
            *(_OWORD *)&v19.pixelFormat.format = *(_OWORD *)((char *)this + 200);
            v19.pixelFormat.alphaMode = D2D1_ALPHA_MODE_IGNORE;
            *(_OWORD *)&v19.bitmapOptions = v13;
            v14 = (char *)this + *(int *)(v12 + 8) + 16;
            v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
            wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(v1);
            v16 = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                    (CD2DContext *)(v15 + 16),
                    v21,
                    &v19,
                    (struct ID2D1Bitmap1 **)v1);
            v3 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x1D8u);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
      }
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2003292412, 0x1DDu);
    }
  }
  return v3;
}
