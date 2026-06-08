/*
 * XREFs of FxStubDriverUnload @ 0x1C0006B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0006B58 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C001E620 && qword_1C001E620 != FxStubDriverUnload )
    qword_1C001E620();
  FxStubDriverUnloadCommon(a1);
}
