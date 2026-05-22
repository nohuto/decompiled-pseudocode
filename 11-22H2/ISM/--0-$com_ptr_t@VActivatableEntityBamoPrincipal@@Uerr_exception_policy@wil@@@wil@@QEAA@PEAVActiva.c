/*
 * XREFs of ??0?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVActivatableEntityBamoPrincipal@@@Z @ 0x1800B6B38
 * Callers:
 *     ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800B80AC (-find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV-$function@$$A6A_NPEAVActivatableEntit.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
