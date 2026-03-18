/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180029860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029388 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800293B0 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800297F0 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180029840 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@VCBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapLock@@@Z @ 0x180029A2C (--4-$com_ptr_t@VCBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapLock@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180029ACC (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18002A23C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002AD48 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4440 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F78A0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18029F360 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, _DWORD *a2, CBitmapLock **a3)
{
  int v4; // eax
  _DWORD *v7; // rdx
  unsigned int v8; // ecx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v10; // r13d
  __int64 v11; // rax
  CBitmapLock *v12; // rax
  unsigned int v13; // ecx
  CBitmapLock *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, CBitmapLock **); // rcx
  const struct PixelFormatInfo *v16; // rax
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edi
  char *v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, __int64 *); // rcx
  const struct PixelFormatInfo *v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rcx
  struct CD3DDevice *v27; // rdi
  struct IBitmapDest *v28; // rbx
  void (__fastcall ***v29)(_QWORD, __int64 *); // rcx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  struct IBitmapDest *v34; // [rsp+60h] [rbp-29h] BYREF
  void *v35; // [rsp+68h] [rbp-21h] BYREF
  struct IUnknown *v36; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int8 *v37; // [rsp+78h] [rbp-11h] BYREF
  __int64 v38; // [rsp+80h] [rbp-9h] BYREF
  int v39; // [rsp+88h] [rbp-1h]
  int v40; // [rsp+8Ch] [rbp+3h]
  CBitmapLock *v41[2]; // [rsp+90h] [rbp+7h] BYREF

  v39 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v36 = 0LL;
  v38 = 0LL;
  v40 = v4;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
          (__int64)&v38,
          (__int64)a2,
          (__int64)a3)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x105u, 0LL);
    goto LABEL_9;
  }
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 96), &v37, (unsigned int *)&v35, (unsigned int *)&v34, &v36) )
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
    v10 = (unsigned int)v35;
    v41[0] = 0LL;
    v11 = *a2 * (PixelFormatSize >> 3) + a2[1] * (int)v35;
    LODWORD(v35) = v11;
    v38 = v11;
    v12 = (CBitmapLock *)DefaultHeap::Alloc(0xA0uLL);
    if ( v12 )
      v12 = CBitmapLock::CBitmapLock(v12);
    wil::com_ptr_t<CBitmapLock,wil::err_returncode_policy>::operator=(v41, v12);
    v14 = v41[0];
    if ( v41[0] )
    {
      v15 = (__int64 (__fastcall ***)(_QWORD, CBitmapLock **))(a1 + *(int *)(*(_QWORD *)(a1 - 80) + 12LL) - 80LL);
      v16 = (const struct PixelFormatInfo *)(**v15)(v15, v41);
      v17 = CBitmapLock::HrInit(
              v14,
              (struct IBitmapUnlock *)((a1 + 16) & -(__int64)(a1 != 96)),
              a2[2] - *a2,
              a2[3] - a2[1],
              v16,
              v10,
              (int)v34 - (int)v35,
              &v37[v38],
              WICBitmapLockRead,
              0,
              v36);
      v19 = v17;
      if ( v17 >= 0 )
      {
        *a3 = v14;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x125u, 0LL);
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x119u, 0LL);
    }
    if ( v14 )
    {
      v21 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    v34 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v34);
    v22 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(a1 + *(int *)(*(_QWORD *)(a1 - 80) + 12LL) - 80LL);
    v23 = (const struct PixelFormatInfo *)(**v22)(v22, &v38);
    v24 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], v23, &v34);
    v19 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x130u, 0LL);
    }
    else
    {
      v26 = a1 + *(int *)(*(_QWORD *)(a1 - 80) + 8LL) - 80LL;
      v27 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      v28 = v34;
      v29 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(a1 - 80) + 12LL) + a1 - 80);
      (**v29)(v29, &v38);
      v30 = CD3DDevice::CopyTexture2D(v27, *(struct ID3D11Texture2D **)(a1 + 24), (__int64)a2, (__int64)v28, 0, 0);
      v19 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x137u, 0LL);
      }
      else
      {
        v32 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, CBitmapLock **))(*(_QWORD *)v34 + 24LL))(
                v34,
                0LL,
                1LL,
                a3);
        v19 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x13Cu, 0LL);
      }
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v34);
  }
LABEL_9:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v36);
  return v19;
}
