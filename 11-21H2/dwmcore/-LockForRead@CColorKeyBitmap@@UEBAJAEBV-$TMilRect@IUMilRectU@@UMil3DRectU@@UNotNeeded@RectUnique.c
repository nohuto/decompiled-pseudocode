/*
 * XREFs of ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802A9240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006A370 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1802900FC (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1802A82CC (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::LockForRead(CColorKeyBitmap *this, _DWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  char *v8; // rcx
  const struct PixelFormatInfo *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  struct IBitmapDest *v31; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-3Ch] BYREF
  _DWORD v34[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v35; // [rsp+50h] [rbp-30h] BYREF
  struct WICRect v36; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v37[16]; // [rsp+68h] [rbp-18h] BYREF

  (**(void (__fastcall ***)(CColorKeyBitmap *, _DWORD *))this)(this, v34);
  v36.Width = v34[0];
  v36.Height = v34[1];
  *(_QWORD *)&v36.X = 0LL;
  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v36, (__int64)a2, v6) )
  {
    v31 = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v31);
    v8 = (char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8;
    v9 = (const struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v8)(v8, v37);
    v10 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], v9, &v31);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x96u);
    }
    else
    {
      v36.Width = a2[2] - *a2;
      v36.Height = a2[3] - a2[1];
      *(_QWORD *)&v36.X = 0LL;
      v13 = *(_QWORD *)v31;
      v30 = 0LL;
      v14 = (*(__int64 (__fastcall **)(struct IBitmapDest *, struct WICRect *, __int64, __int64 *))(v13 + 24))(
              v31,
              &v36,
              2LL,
              &v30);
      v12 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x9Cu);
      }
      else
      {
        v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 16LL))(v30, &v32);
        v12 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x9Fu);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v30 + 24LL))(
                  v30,
                  &v33,
                  &v35);
          v12 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0xA3u);
          }
          else
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 5)
                                                                                                 + 24LL))(
                    *((_QWORD *)this + 5),
                    a2,
                    v32,
                    v33,
                    v35);
            v12 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0xA9u);
            }
            else
            {
              v23 = CColorKeyBitmap::ApplyColorKeyToBuffer(this, &v36, v32, v22, v35);
              v12 = v23;
              if ( v23 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0xAFu);
              }
              else
              {
                v25 = v30;
                v30 = 0LL;
                if ( v25 )
                {
                  v26 = v25 + 8 + *(int *)(*(_QWORD *)(v25 + 8) + 4LL);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
                }
                v27 = (*(__int64 (__fastcall **)(struct IBitmapDest *, struct WICRect *, __int64, __int64))(*(_QWORD *)v31 + 24LL))(
                        v31,
                        &v36,
                        1LL,
                        a3);
                v12 = v27;
                if ( v27 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0xB5u);
              }
            }
          }
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v31);
  }
  else
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024809, 0xB9u);
  }
  return v12;
}
