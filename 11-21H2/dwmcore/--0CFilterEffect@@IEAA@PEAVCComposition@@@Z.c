/*
 * XREFs of ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C948
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C3E8 (--0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C4D0 (--0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C6E8 (--0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C9B0 (--0CFloodEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C9EC (--0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019D2C4 (--0CShadowEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180223CBC (--0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180241FD8 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x180242D2C (--0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CFilterEffect *__fastcall CFilterEffect::CFilterEffect(CFilterEffect *this, struct CComposition *a2)
{
  CFilterEffect *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CFilterEffect::`vftable';
  *((_QWORD *)this + 10) = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 11) = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  return result;
}
