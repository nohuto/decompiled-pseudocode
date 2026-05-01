/*
 * XREFs of ?GetVirtualDesktopCollection@VirtualDesktopDataSource@@UEAAJPEAPEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800729A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopDataSource::GetVirtualDesktopCollection(
        VirtualDesktopDataSource *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 34);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)*((_QWORD *)this + 34);
  return 0LL;
}
