/*
 * XREFs of ??0CSuperWetInkVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801185C8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180085674 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800845D8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CSuperWetInkVisual *__fastcall CSuperWetInkVisual::CSuperWetInkVisual(
        CSuperWetInkVisual *this,
        struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CSuperWetInkVisual::`vftable';
  return this;
}
