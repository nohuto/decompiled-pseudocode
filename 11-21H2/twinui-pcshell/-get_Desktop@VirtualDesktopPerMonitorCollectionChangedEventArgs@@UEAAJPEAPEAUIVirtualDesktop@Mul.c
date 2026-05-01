/*
 * XREFs of ?get_Desktop@VirtualDesktopPerMonitorCollectionChangedEventArgs@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048FCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopPerMonitorCollectionChangedEventArgs::get_Desktop(
        VirtualDesktopPerMonitorCollectionChangedEventArgs *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a2)
{
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v2; // rcx

  v2 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
