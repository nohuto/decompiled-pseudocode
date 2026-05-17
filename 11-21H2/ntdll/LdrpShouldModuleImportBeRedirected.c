/*
 * XREFs of LdrpShouldModuleImportBeRedirected @ 0x18003B720
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
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
