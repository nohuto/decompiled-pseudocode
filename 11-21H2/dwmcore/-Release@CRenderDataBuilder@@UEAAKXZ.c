/*
 * XREFs of ?Release@CRenderDataBuilder@@UEAAKXZ @ 0x1800E54B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::Release(CRenderDataBuilder *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( !v2 && this )
  {
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
    DefaultHeap::Free(this);
  }
  return v2;
}
