/*
 * XREFs of ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x180207464
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C7B0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?attach@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1800BCCE8 (-attach@-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVIBitmapReali.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800E9914 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180207258 (--$_Emplace_reallocate@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x1802073A8 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802A1BA0 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802A24E0 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmapSubRects(CGdiSpriteBitmap *this)
{
  char *v1; // rsi
  int v3; // edi
  unsigned int v4; // r15d
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // r12d
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  struct IBitmapRealization *v14; // rbx
  void (__fastcall **v15)(struct IBitmapRealization *, __int128 *); // rax
  struct IBitmapRealization *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  struct IBitmapRealization *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  struct CBitmapResource **v24; // rdx
  char *v25; // rcx
  char *v27; // rcx
  struct IBitmapRealization *v28; // [rsp+48h] [rbp-19h] BYREF
  struct CBitmapResource *v29; // [rsp+50h] [rbp-11h] BYREF
  struct IBitmapRealization *v30; // [rsp+58h] [rbp-9h] BYREF
  __int64 v31; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v32; // [rsp+68h] [rbp+7h]
  unsigned int v33; // [rsp+6Ch] [rbp+Bh]
  _DWORD v34[4]; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v35; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (char *)this + 432;
  v3 = 0;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>>(
    *((__int64 **)this + 54),
    *((__int64 **)this + 55));
  v4 = 0;
  *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  v5 = *((_DWORD *)this + 102);
  v6 = *((_DWORD *)this + 103);
  v31 = 0LL;
  v32 = v5;
  v33 = v6;
  if ( v5 )
  {
    do
    {
      v7 = v5 - v4;
      v8 = 2048;
      v9 = 0;
      if ( v7 < 0x800 )
        v8 = v7;
      if ( v6 )
      {
        v34[0] = v4;
        v34[2] = v8 + v4;
        while ( 1 )
        {
          v10 = v6 - v9;
          v29 = 0LL;
          v30 = 0LL;
          v11 = 2048;
          v34[1] = v9;
          if ( v10 < 0x800 )
            v11 = v10;
          v28 = 0LL;
          v34[3] = v9 + v11;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v28);
          v12 = CGDISubSectionBitmapRealization::Create(
                  *((_QWORD *)this + 43),
                  &v31,
                  v34,
                  *((unsigned int *)this + 104),
                  *((_DWORD *)this + 32),
                  *((_DWORD *)this + 33),
                  &v28);
          v3 = v12;
          if ( v12 < 0 )
            break;
          v14 = v28;
          v15 = *(void (__fastcall ***)(struct IBitmapRealization *, __int128 *))v28;
          v35 = *((_OWORD *)this + 5);
          (*v15)(v28, &v35);
          if ( *((_BYTE *)this + 146) )
          {
            v18 = *((_QWORD *)v14 + 1);
            v28 = 0LL;
            v19 = CColorKeyBitmapRealization::Create(
                    (struct IBitmapRealization *)((char *)v14 + *(int *)(v18 + 12) + 8),
                    (CGdiSpriteBitmap *)((char *)this + 352),
                    &v28);
            v3 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x1BBu);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
LABEL_29:
              if ( !v14 )
                goto LABEL_32;
              v27 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
LABEL_31:
              (*(void (__fastcall **)(char *))(*(_QWORD *)v27 + 16LL))(v27);
              goto LABEL_32;
            }
            v21 = v28;
            v28 = 0LL;
            wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach((__int64 *)&v30, (__int64)v21);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
          }
          else
          {
            v16 = v14;
            v14 = 0LL;
            if ( v16 )
              v17 = (__int64)v16 + *(int *)(*((_QWORD *)v16 + 1) + 12LL) + 8;
            else
              v17 = 0LL;
            wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach((__int64 *)&v30, v17);
          }
          v22 = CBitmapResource::Create(*((struct CComposition **)this + 2), v30, &v29);
          v3 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x1C5u);
            goto LABEL_29;
          }
          v24 = (struct CBitmapResource **)*((_QWORD *)this + 55);
          if ( v24 == *((struct CBitmapResource ***)this + 56) )
          {
            std::vector<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>(
              (__int64 *)v1,
              (__int64)v24,
              (__int64 *)&v29);
          }
          else
          {
            *v24 = v29;
            *((_QWORD *)v1 + 1) += 8LL;
            v29 = 0LL;
          }
          if ( v14 )
          {
            v25 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 16LL))(v25);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
          v6 = *((_DWORD *)this + 103);
          v9 += 2048;
          if ( v9 >= v6 )
            goto LABEL_23;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x1ADu);
        if ( v28 )
        {
          v27 = (char *)v28 + *(int *)(*((_QWORD *)v28 + 1) + 4LL) + 8;
          goto LABEL_31;
        }
LABEL_32:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
        goto LABEL_25;
      }
LABEL_23:
      v5 = *((_DWORD *)this + 102);
      v4 += 2048;
    }
    while ( v4 < v5 );
    if ( v3 >= 0 )
      return (unsigned int)v3;
LABEL_25:
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>>(
      *(__int64 **)v1,
      *((__int64 **)v1 + 1));
    *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  }
  return (unsigned int)v3;
}
