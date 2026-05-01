/*
 * XREFs of ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x1802E4BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180575220 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ??0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z @ 0x180582488 (--0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z.c)
 *     ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x1805824D0 (--1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewButtonElement::PointerLeave(CMultitaskingViewButtonElement *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  CMultitaskingViewButtonElement::CDetectRenderModeChange::CDetectRenderModeChange(
    (CMultitaskingViewButtonElement::CDetectRenderModeChange *)v2,
    this);
  CMultitaskingViewElementBase::PointerLeave(this);
  CMultitaskingViewButtonElement::CDetectRenderModeChange::~CDetectRenderModeChange((CMultitaskingViewButtonElement::CDetectRenderModeChange *)v2);
}
