/*
 * XREFs of ??_ECFlipConsumer@Flip@@EEAAPEAXI@Z @ 0x1800B82C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CFlipConsumer@Flip@@EEAA@XZ @ 0x1801AAB30 (--1CFlipConsumer@Flip@@EEAA@XZ.c)
 */

Flip::CFlipConsumer *__fastcall Flip::CFlipConsumer::`vector deleting destructor'(Flip::CFlipConsumer *this, char a2)
{
  Flip::CFlipConsumer::~CFlipConsumer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
