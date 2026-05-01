/*
 * XREFs of ??_EVirtualDesktopPerMonitorCollection@@UEAAPEAXI@Z @ 0x18048EF60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopPerMonitorCollection@@UEAA@XZ @ 0x18048EE08 (--1VirtualDesktopPerMonitorCollection@@UEAA@XZ.c)
 */

VirtualDesktopPerMonitorCollection *__fastcall VirtualDesktopPerMonitorCollection::`vector deleting destructor'(
        VirtualDesktopPerMonitorCollection *this,
        char a2)
{
  VirtualDesktopPerMonitorCollection::~VirtualDesktopPerMonitorCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
