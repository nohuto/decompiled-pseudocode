/*
 * XREFs of NdisFCancelDirectOidRequest @ 0x1C00B5290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFCancelDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD v2[5]; // [rsp+30h] [rbp-28h] BYREF

  v2[1] = NdisFilterHandle;
  v2[3] = RequestId;
  v2[0] = 0LL;
  v2[2] = 0LL;
  KeExpandKernelStackAndCalloutEx(
    (PEXPAND_STACK_CALLOUT)ndisFCancelDirectOidRequestInternal,
    v2,
    (unsigned int)Size,
    0,
    0LL);
}
