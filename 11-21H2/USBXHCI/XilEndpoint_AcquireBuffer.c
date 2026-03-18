/*
 * XREFs of XilEndpoint_AcquireBuffer @ 0x1C001625C
 * Callers:
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0015FA0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0038A28 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0038FA8 (Endpoint_OnResetEndpointConfigure.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0016368 (XilCommonBuffer_AcquireBufferEx.c)
 */

__int64 __fastcall XilEndpoint_AcquireBuffer(_BYTE *a1, int a2, int a3, int a4)
{
  return XilCommonBuffer_AcquireBufferEx(
           *(_QWORD *)(*(_QWORD *)a1 + 120LL),
           a2,
           a3,
           a4,
           (unsigned int)(a1[1336] != 0) + 1);
}
