/*
 * XREFs of ??0CCursorVisual@@IEAA@PEAVCComposition@@@Z @ 0x1802283CC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180085674 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800845D8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CCursorVisual *__fastcall CCursorVisual::CCursorVisual(CCursorVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *((_BYTE *)this + 712) = 1;
  *(_QWORD *)this = &CCursorVisual::`vftable';
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_BYTE *)this + 736) = 0;
  return this;
}
