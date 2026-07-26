/*
 * XREFs of ?ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A724
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C0018B40 (NdisInitializeTimer.c)
 */

void __fastcall ndisMInitializePDCTaskClient(char *FunctionContext)
{
  NdisInitializeTimer(
    (PNDIS_TIMER)(FunctionContext + 5496),
    (PNDIS_TIMER_FUNCTION)ndisPdcTaskClientDisableTimeoutDpc,
    FunctionContext);
  *((_QWORD *)FunctionContext + 703) = FunctionContext;
  *((_QWORD *)FunctionContext + 704) = ndisPdcTaskClientDisableTimeoutWorkItem;
}
