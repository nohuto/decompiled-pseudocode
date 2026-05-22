/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@IEBAXXZ @ 0x18016C9B0
 * Callers:
 *     ??0DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@QEAA@AEBV01234@@Z @ 0x18016A7FC (--0DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@QEAA@AEBV01234@@Z.c)
 *     ??4?$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016ACC0 (--4-$ComPtr@VCompObjectDiagnosticsPrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z @ 0x18016C764 (-Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z.c)
 *     ??$construct@UContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV2@AEBIPEAUHSTRING__@@PEAU3@@?$_Default_allocator_traits@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@SAXAEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@1@QEAUContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV4@AEBI$$QEAPEAUHSTRING__@@4@Z @ 0x18019C52C (--$construct@UContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV2@AEBIPEAUHSTRING__@@PEAU3@@-$_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CompObjectDiagnosticsPrincipal>::InternalAddRef(
        __int64 (__fastcall ****a1)(_QWORD))
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1);
  return result;
}
