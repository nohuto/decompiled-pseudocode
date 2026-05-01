/*
 * XREFs of ?get_EventType@VirtualDesktopPerMonitorCollectionChangedEventArgs@@UEAAJPEAW4VirtualDesktopPerMonitorCollectionChangedEventType@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180184A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopPerMonitorCollectionChangedEventArgs::get_EventType(
        VirtualDesktopPerMonitorCollectionChangedEventArgs *this,
        enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopPerMonitorCollectionChangedEventType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
