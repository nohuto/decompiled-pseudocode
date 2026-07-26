/*
 * XREFs of _lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_ @ 0x1C0112160
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0112304 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D6C4 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

void __fastcall lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_(
        __int64 a1,
        struct NDIS_BIND_PROTOCOL_DRIVER **a2)
{
  struct NDIS_BIND_PROTOCOL_DRIVER *v3; // rbx

  if ( (*a2)->NeedsBindCompleteEvent )
  {
    (*a2)->NeedsBindCompleteEvent = 0;
    ndisDeliverBindCompleteEvent(*a2);
  }
  v3 = *a2;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v3[1].DriverReady, 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER(v3);
      ExFreePoolWithTag(v3, 0x44745042u);
    }
  }
}
