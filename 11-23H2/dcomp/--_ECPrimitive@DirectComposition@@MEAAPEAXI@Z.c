/*
 * XREFs of ??_ECPrimitive@DirectComposition@@MEAAPEAXI@Z @ 0x1800F9210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CPrimitive@DirectComposition@@MEAA@XZ @ 0x180032364 (--1CPrimitive@DirectComposition@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CPrimitive *__fastcall DirectComposition::CPrimitive::`vector deleting destructor'(
        DirectComposition::CPrimitive *this,
        char a2)
{
  DirectComposition::CPrimitive::~CPrimitive(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
