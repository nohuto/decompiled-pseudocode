/*
 * XREFs of ??_EMagnifierGestureTarget@@UEAAPEAXI@Z @ 0x1801DB420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MagnifierToggleTarget@@UEAA@XZ @ 0x1801DB2FC (--1MagnifierToggleTarget@@UEAA@XZ.c)
 */

MagnifierGestureTarget *__fastcall MagnifierGestureTarget::`vector deleting destructor'(
        MagnifierGestureTarget *this,
        char a2)
{
  MagnifierToggleTarget::~MagnifierToggleTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
