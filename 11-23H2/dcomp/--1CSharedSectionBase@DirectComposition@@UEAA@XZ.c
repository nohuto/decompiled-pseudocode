/*
 * XREFs of ??1CSharedSectionBase@DirectComposition@@UEAA@XZ @ 0x18007EB8C
 * Callers:
 *     ??1CSharedSection@DirectComposition@@UEAA@XZ @ 0x18007E794 (--1CSharedSection@DirectComposition@@UEAA@XZ.c)
 *     ??1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ @ 0x1800EC4C8 (--1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ.c)
 *     ??1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ @ 0x1800EC914 (--1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ.c)
 *     ??_ECSharedSectionBase@DirectComposition@@UEAAPEAXI@Z @ 0x1800FB410 (--_ECSharedSectionBase@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180021EF0 (-RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CSharedSectionBase::~CSharedSectionBase(DirectComposition::CSharedSectionBase *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionBase::`vftable';
  v1 = (void *)*((_QWORD *)this + 4);
  if ( v1 )
    DirectComposition::CDevice::RemoveNoRefProxy(v1);
}
