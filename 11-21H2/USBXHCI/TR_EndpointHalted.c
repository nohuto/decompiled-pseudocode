/*
 * XREFs of TR_EndpointHalted @ 0x1C003FA0C
 * Callers:
 *     Endpoint_SM_NotifyTransferRingsEndpointHalted @ 0x1C0039C4C (Endpoint_SM_NotifyTransferRingsEndpointHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_EndpointHalted(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 120LL))();
}
