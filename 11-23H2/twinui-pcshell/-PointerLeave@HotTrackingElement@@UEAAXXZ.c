/*
 * XREFs of ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x180569B70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z @ 0x180568F94 (--0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z.c)
 *     ??1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ @ 0x1805691D8 (--1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ.c)
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180575220 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HotTrackingElement::PointerLeave(HotTrackingElement *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  HotTrackingElement::DetectHotTrackChange::DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v2, this);
  CMultitaskingViewElementBase::PointerLeave(this);
  HotTrackingElement::DetectHotTrackChange::~DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v2);
}
