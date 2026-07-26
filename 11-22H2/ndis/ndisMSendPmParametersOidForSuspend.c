/*
 * XREFs of ndisMSendPmParametersOidForSuspend @ 0x1C00AD134
 * Callers:
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00AF40C (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C9A0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisMSendPmParametersOidForSuspend(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  __int64 result; // rax
  struct _NDIS_OID_REQUEST v5; // [rsp+20h] [rbp-E0h] BYREF

  memset(&v5, 0, 0xF8uLL);
  *(_DWORD *)&v5.NdisReserved[16] |= 8u;
  *(_QWORD *)&v5.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v5.NdisReserved[96]);
  v5.PortNumber = 0;
  *(_DWORD *)&v5.NdisReserved[16] |= 0x400u;
  v5.Header = (NDIS_OBJECT_HEADER)15466902;
  v5.DATA.QUERY_INFORMATION.Oid = -50265847;
  v5.RequestType = NdisRequestSetInformation;
  v5.DATA.QUERY_INFORMATION.InformationBuffer = a2;
  v5.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
  KeInitializeEvent((PRKEVENT)&v5.NdisReserved[40], NotificationEvent, 0);
  result = ndisMInvokeOidRequest(a1, &v5);
  if ( (_DWORD)result == 259 )
  {
    ndisWaitForKernelObject(&v5.NdisReserved[40]);
    return *(unsigned int *)&v5.NdisReserved[8];
  }
  return result;
}
