/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0006B58
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0002E54 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0006B90 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0006BC4 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
