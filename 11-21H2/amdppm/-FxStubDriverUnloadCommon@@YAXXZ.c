/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000338C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0003404 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0003530 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C00036C8 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
