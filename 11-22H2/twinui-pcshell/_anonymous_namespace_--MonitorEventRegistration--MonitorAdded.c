/*
 * XREFs of _anonymous_namespace_::MonitorEventRegistration::MonitorAdded @ 0x1805614C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::MonitorEventRegistration::MonitorAdded(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return 0LL;
}
