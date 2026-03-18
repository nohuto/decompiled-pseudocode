/*
 * XREFs of ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800EEA00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x1800EEA4C (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSharedSection *__fastcall CSharedSection::`vector deleting destructor'(CSharedSection *this, char a2)
{
  *(_QWORD *)this = &CSharedSection::`vftable';
  CSharedSectionBase::~CSharedSectionBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x58uLL);
    else
      operator delete(this);
  }
  return this;
}
