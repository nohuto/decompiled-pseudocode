/*
 * XREFs of ??_GVirtualDesktop@@UEAAPEAXI@Z @ 0x18048FE10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktop@@UEAA@XZ @ 0x18048FD9C (--1VirtualDesktop@@UEAA@XZ.c)
 */

VirtualDesktop *__fastcall VirtualDesktop::`scalar deleting destructor'(VirtualDesktop *this, char a2)
{
  VirtualDesktop::~VirtualDesktop(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
