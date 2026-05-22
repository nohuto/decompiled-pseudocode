/*
 * XREFs of ??_ECSharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x18007E750
 * Callers:
 *     ??1?$unique_ptr@VCSharedSection@DirectComposition@@U?$default_delete@VCSharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800FB3E8 (--1-$unique_ptr@VCSharedSection@DirectComposition@@U-$default_delete@VCSharedSection@DirectCompo.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CSharedSection@DirectComposition@@UEAA@XZ @ 0x18007E794 (--1CSharedSection@DirectComposition@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CSharedSection *__fastcall DirectComposition::CSharedSection::`vector deleting destructor'(
        DirectComposition::CSharedSection *this,
        char a2)
{
  DirectComposition::CSharedSection::~CSharedSection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x50uLL);
    else
      operator delete(this);
  }
  return this;
}
