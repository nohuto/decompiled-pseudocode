/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000362C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00036A4 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0003840 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C00039D8 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
