/*
 * XREFs of NdisCmDispatchIncomingCallQoSChange @ 0x1C00BE010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisCmDispatchIncomingCallQoSChange(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  (*((void (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 15))(
    *((_QWORD *)NdisVcHandle + 3),
    CallParameters);
}
