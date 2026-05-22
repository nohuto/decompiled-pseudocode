/*
 * XREFs of ??_GDragManagerHost@@UEAAPEAXI@Z @ 0x18013A510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1DragManagerHost@@UEAA@XZ @ 0x18013A4AC (--1DragManagerHost@@UEAA@XZ.c)
 */

DragManagerHost *__fastcall DragManagerHost::`scalar deleting destructor'(DragManagerHost *this, char a2)
{
  DragManagerHost::~DragManagerHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
