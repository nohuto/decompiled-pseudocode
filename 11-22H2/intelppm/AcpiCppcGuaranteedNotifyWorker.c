/*
 * XREFs of AcpiCppcGuaranteedNotifyWorker @ 0x1C003ADD0
 * Callers:
 *     <none>
 * Callees:
 *     CpcGuaranteedNotifyWorker @ 0x1C00374CC (CpcGuaranteedNotifyWorker.c)
 */

__int64 __fastcall AcpiCppcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  return CpcGuaranteedNotifyWorker(a1, a2, "Notify 0x83");
}
