/*
 * XREFs of ??_GCCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x1800EC540
 * Callers:
 *     ??1?$unique_ptr@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@U?$default_delete@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800EC4A4 (--1-$unique_ptr@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@U-$default_delete.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ @ 0x1800EC4C8 (--1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCrossContainerGuestReadWriteSharedSection *__fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSection::`scalar deleting destructor'(
        DirectComposition::CCrossContainerGuestReadWriteSharedSection *this,
        char a2)
{
  DirectComposition::CCrossContainerGuestReadWriteSharedSection::~CCrossContainerGuestReadWriteSharedSection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
