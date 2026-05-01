/*
 * XREFs of ?get_Desktop@VirtualDesktopCollectionChangedEventArgs@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1805453B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopCollectionChangedEventArgs::get_Desktop(
        VirtualDesktopCollectionChangedEventArgs *this,
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
