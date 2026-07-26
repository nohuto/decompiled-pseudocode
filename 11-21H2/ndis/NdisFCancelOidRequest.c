/*
 * XREFs of NdisFCancelOidRequest @ 0x1C00628A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFCancelOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD v2[5]; // [rsp+30h] [rbp-28h] BYREF

  v2[1] = NdisFilterHandle;
  v2[3] = RequestId;
  v2[0] = 0LL;
  v2[2] = 0LL;
  KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFCancelOidRequestInternal, v2, (unsigned int)Size, 0, 0LL);
}
