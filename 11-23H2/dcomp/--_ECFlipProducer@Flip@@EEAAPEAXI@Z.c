/*
 * XREFs of ??_ECFlipProducer@Flip@@EEAAPEAXI@Z @ 0x1801AA280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CFlipProducer@Flip@@EEAA@XZ @ 0x1801AA1E4 (--1CFlipProducer@Flip@@EEAA@XZ.c)
 */

Flip::CFlipProducer *__fastcall Flip::CFlipProducer::`vector deleting destructor'(Flip::CFlipProducer *this, char a2)
{
  Flip::CFlipProducer::~CFlipProducer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
