/*
 * XREFs of FxStubDriverUnload @ 0x1C0008450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000840C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C001F970 && qword_1C001F970 != FxStubDriverUnload )
    qword_1C001F970();
  FxStubDriverUnloadCommon(a1);
}
