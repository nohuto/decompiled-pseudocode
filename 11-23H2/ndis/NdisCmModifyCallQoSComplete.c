/*
 * XREFs of NdisCmModifyCallQoSComplete @ 0x1C00BE2D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisCmModifyCallQoSComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters)
{
  (*((void (__fastcall **)(NDIS_STATUS, _QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 14))(
    Status,
    *((_QWORD *)NdisVcHandle + 3),
    CallParameters);
}
