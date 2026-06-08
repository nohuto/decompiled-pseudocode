/*
 * XREFs of FxStubDriverUnload @ 0x1C0003530
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000338C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C0011418 && qword_1C0011418 != FxStubDriverUnload )
    qword_1C0011418();
  FxStubDriverUnloadCommon(a1);
}
