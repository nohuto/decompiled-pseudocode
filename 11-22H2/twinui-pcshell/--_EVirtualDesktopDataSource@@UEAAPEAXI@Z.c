/*
 * XREFs of ??_EVirtualDesktopDataSource@@UEAAPEAXI@Z @ 0x18053EAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopDataSource@@UEAA@XZ @ 0x18053E744 (--1VirtualDesktopDataSource@@UEAA@XZ.c)
 */

VirtualDesktopDataSource *__fastcall VirtualDesktopDataSource::`vector deleting destructor'(
        VirtualDesktopDataSource *this,
        char a2)
{
  VirtualDesktopDataSource::~VirtualDesktopDataSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
