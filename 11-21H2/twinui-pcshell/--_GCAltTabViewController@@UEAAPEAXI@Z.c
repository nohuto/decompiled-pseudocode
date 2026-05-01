/*
 * XREFs of ??_GCAltTabViewController@@UEAAPEAXI@Z @ 0x1804AD6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CAltTabViewController@@UEAA@XZ @ 0x1802332E6 (--1CAltTabViewController@@UEAA@XZ.c)
 */

CAltTabViewController *__fastcall CAltTabViewController::`scalar deleting destructor'(
        CAltTabViewController *this,
        char a2)
{
  CAltTabViewController::~CAltTabViewController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
