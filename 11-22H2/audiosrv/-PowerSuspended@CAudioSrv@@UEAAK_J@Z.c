/*
 * XREFs of ?PowerSuspended@CAudioSrv@@UEAAK_J@Z @ 0x1800521C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSrv::PowerSuspended(CAudioSrv *this)
{
  if ( g_PolicyManager )
    (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 320LL))(
      g_PolicyManager,
      1LL);
  return 0LL;
}
