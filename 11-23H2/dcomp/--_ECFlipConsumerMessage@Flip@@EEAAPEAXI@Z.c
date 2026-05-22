/*
 * XREFs of ??_ECFlipConsumerMessage@Flip@@EEAAPEAXI@Z @ 0x1801AC7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

void **__fastcall Flip::CFlipConsumerMessage::`vector deleting destructor'(void **this, char a2)
{
  *this = &Flip::CFlipConsumerMessage::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 2);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
