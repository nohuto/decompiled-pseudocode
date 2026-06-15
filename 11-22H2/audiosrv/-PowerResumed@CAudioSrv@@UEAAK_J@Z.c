/*
 * XREFs of ?PowerResumed@CAudioSrv@@UEAAK_J@Z @ 0x180052200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSrv::PowerResumed(CAudioSrv *this)
{
  if ( g_PolicyManager )
    (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 320LL))(
      g_PolicyManager,
      0LL);
  return 0LL;
}
