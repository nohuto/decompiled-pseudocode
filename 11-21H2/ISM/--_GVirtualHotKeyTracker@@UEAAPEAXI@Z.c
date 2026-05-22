/*
 * XREFs of ??_GVirtualHotKeyTracker@@UEAAPEAXI@Z @ 0x1801B2560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualHotKeyTracker@@UEAA@XZ @ 0x1801B24C8 (--1VirtualHotKeyTracker@@UEAA@XZ.c)
 */

VirtualHotKeyTracker *__fastcall VirtualHotKeyTracker::`scalar deleting destructor'(
        VirtualHotKeyTracker *this,
        char a2)
{
  VirtualHotKeyTracker::~VirtualHotKeyTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
