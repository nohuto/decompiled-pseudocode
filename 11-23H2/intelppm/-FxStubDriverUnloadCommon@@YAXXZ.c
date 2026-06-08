/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000840C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0002984 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0008450 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0008484 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
