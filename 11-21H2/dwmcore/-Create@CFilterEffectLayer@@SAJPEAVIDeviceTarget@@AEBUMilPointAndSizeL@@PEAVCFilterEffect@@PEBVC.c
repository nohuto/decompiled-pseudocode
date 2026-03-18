/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x1801DBD80
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1801B3660 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA950 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800BAA9C (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1802043CC (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1802052F4 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CFilterEffectLayer::Create(
        struct IDeviceTarget *a1,
        const struct MilPointAndSizeL *a2,
        struct CFilterEffect *a3,
        const struct CVisual *a4,
        const struct MilPointAndSizeF *a5,
        struct CFilterEffectLayer **a6)
{
  char *v10; // rcx
  bool IsOpaque; // al
  int v12; // ecx
  int v13; // ebx
  struct _LUID *v14; // rax
  int Bitmap; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  CExternalLayer *v18; // rax
  __int64 v19; // rcx
  CExternalLayer *v20; // rbx
  struct IRenderTargetBitmap *v22; // [rsp+30h] [rbp-39h] BYREF
  const char *v23; // [rsp+38h] [rbp-31h] BYREF
  int v24; // [rsp+40h] [rbp-29h]
  _BYTE v25[24]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v26[4]; // [rsp+60h] [rbp-9h] BYREF
  int v27; // [rsp+64h] [rbp-5h]

  *a6 = 0LL;
  v10 = (char *)a1 + *(int *)(*((_QWORD *)a1 + 1) + 12LL) + 8;
  (**(void (__fastcall ***)(char *, _BYTE *))v10)(v10, v26);
  IsOpaque = CFilterEffect::IsOpaque(a3, a4);
  v12 = v27;
  v13 = 1;
  if ( !IsOpaque )
    v12 = 1;
  v27 = v12;
  if ( (int)CFilterEffect::ContainEffectInChainInputs(a3, 62LL) >= 0
    || (int)CFilterEffect::ContainEffectInChainInputs(a3, 166LL) >= 0 )
  {
    v13 = 2;
  }
  v22 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v22);
  v14 = (struct _LUID *)(**(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a1)(a1, v25);
  v24 = 46;
  v23 = "DWM Scratch Rendertarget (filter effect layer)";
  Bitmap = CExternalLayer::CreateBitmap((CDeviceManager *)&v23, a2, (__int64)v26, v14, v13, (CD3DDevice *)&v22);
  v17 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, Bitmap, 0x25u);
  }
  else
  {
    v18 = (CExternalLayer *)operator new(0x90uLL);
    v20 = v18;
    if ( v18 )
    {
      CExternalLayer::CExternalLayer(v18, a2, v22);
      *((_QWORD *)v20 + 15) = a3;
      *(_QWORD *)v20 = &CFilterEffectLayer::`vftable';
    }
    else
    {
      v20 = 0LL;
    }
    *a6 = v20;
    if ( v20 )
    {
      *((_OWORD *)v20 + 8) = *(_OWORD *)a5;
    }
    else
    {
      v17 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, -2147024882, 0x2Au);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
  return v17;
}
