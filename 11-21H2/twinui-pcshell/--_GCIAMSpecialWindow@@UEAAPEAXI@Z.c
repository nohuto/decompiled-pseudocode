/*
 * XREFs of ??_GCIAMSpecialWindow@@UEAAPEAXI@Z @ 0x18017E450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x1800D452C (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CIAMSpecialWindow *__fastcall CIAMSpecialWindow::`scalar deleting destructor'(CIAMSpecialWindow *this, char a2)
{
  *((_DWORD *)this + 13) = -1073741823;
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
