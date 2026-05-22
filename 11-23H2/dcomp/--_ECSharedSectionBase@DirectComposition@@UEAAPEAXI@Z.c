/*
 * XREFs of ??_ECSharedSectionBase@DirectComposition@@UEAAPEAXI@Z @ 0x1800FB410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CSharedSectionBase@DirectComposition@@UEAA@XZ @ 0x18007EB8C (--1CSharedSectionBase@DirectComposition@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CSharedSectionBase *__fastcall DirectComposition::CSharedSectionBase::`vector deleting destructor'(
        DirectComposition::CSharedSectionBase *this,
        char a2)
{
  DirectComposition::CSharedSectionBase::~CSharedSectionBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
