/*
 * XREFs of ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0033594
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ndisWppExtendedCallback @ 0x1C0032870 (ndisWppExtendedCallback.c)
 *     WppInitKm @ 0x1C0115358 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C011540C (WppLoadTracingSupport.c)
 */

void __fastcall ndisWppInitTracingEx(struct _DRIVER_OBJECT *a1, struct _UNICODE_STRING *a2)
{
  ndisWppExtendedCallback(0, 0LL, 0LL);
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_NDISTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(a1, a2);
}
