/*
 * XREFs of ??_ECVirtualDesktop@@UEAAPEAXI@Z @ 0x180618450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktop@@UEAA@XZ @ 0x1806183EC (--1CVirtualDesktop@@UEAA@XZ.c)
 */

CVirtualDesktop *__fastcall CVirtualDesktop::`vector deleting destructor'(CVirtualDesktop *this, char a2)
{
  CVirtualDesktop::~CVirtualDesktop(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
