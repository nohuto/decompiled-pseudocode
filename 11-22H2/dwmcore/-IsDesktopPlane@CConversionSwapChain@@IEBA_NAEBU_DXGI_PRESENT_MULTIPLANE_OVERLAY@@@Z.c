/*
 * XREFs of ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802A2568
 * Callers:
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x1802A0C14 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1802A2870 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CF54 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDesktopPlaneResource@CLegacySwapChain@@UEBAXPEAPEAUIUnknown@@@Z @ 0x1801355C0 (-GetDesktopPlaneResource@CLegacySwapChain@@UEBAXPEAPEAUIUnknown@@@Z.c)
 */

char __fastcall CConversionSwapChain::IsDesktopPlane(
        CConversionSwapChain *this,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a2)
{
  bool v3; // bl
  struct IUnknown *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
    return 1;
  v5 = 0LL;
  CLegacySwapChain::GetDesktopPlaneResource(this, &v5);
  v3 = *((_QWORD *)a2 + 1) == (_QWORD)v5;
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v5);
  return v3;
}
