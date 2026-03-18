/*
 * XREFs of ??1CScopedClipStack@@QEAA@XZ @ 0x180049AE8
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800499A8 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18008C388 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CScopedClipStack::~CScopedClipStack(void **this)
{
  CScopedClipStack::Clear((CScopedClipStack *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 266);
  DefaultHeap::Free(this[264]);
  DefaultHeap::Free(this[260]);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 114);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
