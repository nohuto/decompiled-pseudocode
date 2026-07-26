/*
 * XREFs of _lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_ @ 0x1C01062F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0106450 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C0121C44 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

void __fastcall lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_(
        __int64 a1,
        struct NDIS_BIND_PROTOCOL_DRIVER **a2)
{
  struct NDIS_BIND_PROTOCOL_DRIVER *v2; // rbx

  v2 = *a2;
  if ( (*a2)->NeedsBindCompleteEvent )
  {
    v2->NeedsBindCompleteEvent = 0;
    ndisDeliverBindCompleteEvent(*a2);
    v2 = *a2;
  }
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v2[1].DriverReady, 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER(v2);
      ExFreePoolWithTag(v2, 0x44745042u);
    }
  }
}
