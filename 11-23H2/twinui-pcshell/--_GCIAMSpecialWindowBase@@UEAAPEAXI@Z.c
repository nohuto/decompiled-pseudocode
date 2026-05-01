/*
 * XREFs of ??_GCIAMSpecialWindowBase@@UEAAPEAXI@Z @ 0x1803A6A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x180103494 (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CIAMSpecialWindowBase *__fastcall CIAMSpecialWindowBase::`scalar deleting destructor'(
        CIAMSpecialWindowBase *this,
        char a2)
{
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
