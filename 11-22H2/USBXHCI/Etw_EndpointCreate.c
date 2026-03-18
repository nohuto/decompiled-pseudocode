/*
 * XREFs of Etw_EndpointCreate @ 0x1C000B7CC
 * Callers:
 *     Endpoint_Create @ 0x1C006D664 (Endpoint_Create.c)
 * Callees:
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C004AF0C (McTemplateK0pppnnn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_EndpointCreate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (WPP_MAIN_CB.AlignmentRequirement & 2) != 0 )
    return McTemplateK0pppnnn_EtwWriteTransfer(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_CREATE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
