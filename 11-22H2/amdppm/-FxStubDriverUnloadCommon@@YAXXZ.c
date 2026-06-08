/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C00035EC
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0003664 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0003800 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0003998 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
