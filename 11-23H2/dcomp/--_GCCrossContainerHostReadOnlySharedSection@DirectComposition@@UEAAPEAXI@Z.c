/*
 * XREFs of ??_GCCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x1800EC960
 * Callers:
 *     ??1?$unique_ptr@VCCrossContainerHostReadOnlySharedSection@DirectComposition@@U?$default_delete@VCCrossContainerHostReadOnlySharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800EC8F0 (--1-$unique_ptr@VCCrossContainerHostReadOnlySharedSection@DirectComposition@@U-$default_delete@V.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ @ 0x1800EC914 (--1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCrossContainerHostReadOnlySharedSection *__fastcall DirectComposition::CCrossContainerHostReadOnlySharedSection::`scalar deleting destructor'(
        DirectComposition::CCrossContainerHostReadOnlySharedSection *this,
        char a2)
{
  DirectComposition::CCrossContainerHostReadOnlySharedSection::~CCrossContainerHostReadOnlySharedSection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
