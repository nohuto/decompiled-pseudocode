/*
 * XREFs of ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x180228350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x1800EEA4C (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CCrossContainerGuestReadWriteSharedSection *__fastcall CCrossContainerGuestReadWriteSharedSection::`scalar deleting destructor'(
        CCrossContainerGuestReadWriteSharedSection *this,
        char a2)
{
  *(_QWORD *)this = &CCrossContainerGuestReadWriteSharedSection::`vftable';
  CSharedSectionBase::~CSharedSectionBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
