/*
 * XREFs of FxStubDriverUnload @ 0x1C0003840
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000362C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C0012498 && qword_1C0012498 != FxStubDriverUnload )
    qword_1C0012498();
  FxStubDriverUnloadCommon(a1);
}
