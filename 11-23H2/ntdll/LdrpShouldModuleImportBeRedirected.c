/*
 * XREFs of LdrpShouldModuleImportBeRedirected @ 0x180021B00
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180022920 (LdrpResolveProcedureAddress.c)
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall LdrpShouldModuleImportBeRedirected(__int64 a1)
{
  if ( !a1 || !LdrpRedirectionModule || LdrpRedirectionModule == a1 )
    return 0;
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
    return *(_BYTE *)(a1 + 104) & 1;
  if ( LdrpRedirectionCalloutFunc )
    return LdrpRedirectionCalloutFunc(*(_QWORD *)(a1 + 80));
  else
    return 1;
}
