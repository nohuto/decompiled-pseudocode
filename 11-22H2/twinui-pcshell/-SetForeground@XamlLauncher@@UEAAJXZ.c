/*
 * XREFs of ?SetForeground@XamlLauncher@@UEAAJXZ @ 0x180501D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::SetForeground(XamlLauncher *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 46);
  if ( !v1 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1);
  return 0LL;
}
