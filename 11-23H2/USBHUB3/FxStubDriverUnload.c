/*
 * XREFs of FxStubDriverUnload @ 0x1C0041010
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0040F10 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C70 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C006DC18 && qword_1C006DC18 != FxStubDriverUnload )
    qword_1C006DC18();
  FxStubDriverUnloadCommon();
}
