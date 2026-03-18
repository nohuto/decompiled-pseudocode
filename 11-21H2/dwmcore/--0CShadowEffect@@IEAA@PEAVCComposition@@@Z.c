/*
 * XREFs of ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019D2C4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C948 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CShadowEffect *__fastcall CShadowEffect::CShadowEffect(CShadowEffect *this, struct CComposition *a2)
{
  CShadowEffect *v2; // rcx
  CShadowEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *((_QWORD *)v2 + 20) = 1077936128LL;
  *((_QWORD *)v2 + 21) = 0LL;
  result = v2;
  *(_QWORD *)v2 = &CShadowEffect::`vftable';
  *((_QWORD *)v2 + 22) = 1065353216LL;
  return result;
}
