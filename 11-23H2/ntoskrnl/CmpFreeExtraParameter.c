/*
 * XREFs of CmpFreeExtraParameter @ 0x1407E6D20
 * Callers:
 *     VrpPreOpenOrCreate @ 0x14068CFD8 (VrpPreOpenOrCreate.c)
 *     VrpPostOpenOrCreate @ 0x14068DF0C (VrpPostOpenOrCreate.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1406E2A60 (CmOpenKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CED4 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *); // rax

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *))a1[4];
  if ( v1 )
    v1(a1 + 2, a1 + 6);
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}
