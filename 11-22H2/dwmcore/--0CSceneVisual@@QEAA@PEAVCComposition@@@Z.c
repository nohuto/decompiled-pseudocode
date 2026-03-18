/*
 * XREFs of ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z @ 0x18021A408
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C6E4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18009B648 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CSceneVisual *__fastcall CSceneVisual::CSceneVisual(CSceneVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CSceneVisual::`vftable';
  *((_QWORD *)this + 89) = *((_QWORD *)a2 + 62);
  return this;
}
