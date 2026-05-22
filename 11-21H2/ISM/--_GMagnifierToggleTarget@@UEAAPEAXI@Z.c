/*
 * XREFs of ??_GMagnifierToggleTarget@@UEAAPEAXI@Z @ 0x1801AF840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MagnifierToggleTarget@@UEAA@XZ @ 0x1801AF658 (--1MagnifierToggleTarget@@UEAA@XZ.c)
 */

MagnifierToggleTarget *__fastcall MagnifierToggleTarget::`scalar deleting destructor'(
        MagnifierToggleTarget *this,
        char a2)
{
  MagnifierToggleTarget::~MagnifierToggleTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
