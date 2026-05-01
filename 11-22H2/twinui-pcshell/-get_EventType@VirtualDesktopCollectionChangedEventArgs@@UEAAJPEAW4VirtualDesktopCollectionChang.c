/*
 * XREFs of ?get_EventType@VirtualDesktopCollectionChangedEventArgs@@UEAAJPEAW4VirtualDesktopCollectionChangedEventType@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801C2B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopCollectionChangedEventArgs::get_EventType(
        VirtualDesktopCollectionChangedEventArgs *this,
        enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
