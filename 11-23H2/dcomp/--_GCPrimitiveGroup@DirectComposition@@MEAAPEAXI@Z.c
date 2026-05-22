/*
 * XREFs of ??_GCPrimitiveGroup@DirectComposition@@MEAAPEAXI@Z @ 0x1800F99B4
 * Callers:
 *     ?HandleDelayedDestructionRequest@CPrimitiveGroup@DirectComposition@@UEAA_NXZ @ 0x18008B6F0 (-HandleDelayedDestructionRequest@CPrimitiveGroup@DirectComposition@@UEAA_NXZ.c)
 *     ??_ECPrimitiveGroup@DirectComposition@@O7EAAPEAXI@Z @ 0x1800A90D0 (--_ECPrimitiveGroup@DirectComposition@@O7EAAPEAXI@Z.c)
 *     ??_ECPrimitiveGroup@DirectComposition@@OBI@EAAPEAXI@Z @ 0x1800A90F0 (--_ECPrimitiveGroup@DirectComposition@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPrimitiveGroup@DirectComposition@@MEAA@XZ @ 0x180003620 (--1CPrimitiveGroup@DirectComposition@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CPrimitiveGroup *__fastcall DirectComposition::CPrimitiveGroup::`scalar deleting destructor'(
        DirectComposition::CPrimitiveGroup *this,
        char a2)
{
  DirectComposition::CPrimitiveGroup::~CPrimitiveGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
