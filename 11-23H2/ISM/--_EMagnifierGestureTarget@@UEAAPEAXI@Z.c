/*
 * XREFs of ??_EMagnifierGestureTarget@@UEAAPEAXI@Z @ 0x1801CDBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1MagnifierToggleTarget@@UEAA@XZ @ 0x1801CDA8C (--1MagnifierToggleTarget@@UEAA@XZ.c)
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
