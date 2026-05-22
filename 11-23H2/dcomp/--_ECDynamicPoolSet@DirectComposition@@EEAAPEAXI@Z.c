/*
 * XREFs of ??_ECDynamicPoolSet@DirectComposition@@EEAAPEAXI@Z @ 0x1800192D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x18001923C (-Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CDynamicPoolSet *__fastcall DirectComposition::CDynamicPoolSet::`vector deleting destructor'(
        DirectComposition::CDynamicPoolSet *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDynamicPoolSet::`vftable';
  DirectComposition::CDynamicPoolSet::Clear(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x38uLL);
    else
      operator delete(this);
  }
  return this;
}
