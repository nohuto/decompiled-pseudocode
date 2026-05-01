/*
 * XREFs of ?ScaleWICBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@W4WICBitmapInterpolationMode@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18023A3B0
 * Callers:
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18023A2B2 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     MulDiv_0 @ 0x180189E83 (MulDiv_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ScaleWICBitmapSource(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        int a3,
        struct tagSIZE a4,
        unsigned int nNumerator,
        struct IWICBitmapSource **a6)
{
  struct IWICBitmapSource **v6; // r15
  unsigned int cx; // ebx
  int v10; // edi
  unsigned int cy; // r14d
  struct IWICImagingFactoryVtbl *lpVtbl; // rax
  HRESULT (__stdcall *CreateBitmapScaler)(IWICImagingFactory *, IWICBitmapScaler **); // rsi
  __int64 *v14; // rdi
  struct IWICBitmapSource **v15; // rax
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF
  int nDenominator; // [rsp+80h] [rbp+50h] BYREF
  struct tagSIZE nNumber; // [rsp+88h] [rbp+58h]

  nNumber = a4;
  nDenominator = a3;
  v6 = a6;
  cx = a4.cx;
  *a6 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, int *, unsigned int *))a2->lpVtbl->GetSize)(
          a2,
          &nDenominator,
          &nNumerator);
  if ( v10 >= 0 )
  {
    if ( nDenominator <= nNumerator )
    {
      if ( MulDiv_0(cx, nDenominator, nNumerator) <= 1 )
        cx = 1;
      else
        cx = MulDiv_0(cx, nDenominator, nNumerator);
      cy = nNumber.cy;
    }
    else
    {
      cy = 1;
      if ( MulDiv_0(nNumber.cy, nNumerator, nDenominator) > 1 )
        cy = MulDiv_0(nNumber.cy, nNumerator, nDenominator);
    }
    lpVtbl = a1->lpVtbl;
    a6 = 0LL;
    CreateBitmapScaler = lpVtbl->CreateBitmapScaler;
    v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&a6, &v17);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
    v10 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))CreateBitmapScaler)(a1, v14);
    if ( v10 >= 0 )
    {
      v10 = ((__int64 (__fastcall *)(struct IWICBitmapSource **, struct IWICBitmapSource *, _QWORD, _QWORD, int))(*a6)[8].lpVtbl)(
              a6,
              a2,
              cx,
              cy,
              3);
      if ( v10 >= 0 )
      {
        v15 = a6;
        a6 = 0LL;
        *v6 = (struct IWICBitmapSource *)v15;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a6);
  }
  return (unsigned int)v10;
}
