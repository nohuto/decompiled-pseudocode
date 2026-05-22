/*
 * XREFs of ??4?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800B6D10
 * Callers:
 *     ?SetActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800B7980 (-SetActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z.c)
 *     ?SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800B7A50 (-SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrinci.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = (__int64)a2;
  if ( a2 )
    (**a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
