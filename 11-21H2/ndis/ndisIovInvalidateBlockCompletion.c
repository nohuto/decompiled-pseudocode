/*
 * XREFs of ndisIovInvalidateBlockCompletion @ 0x1C0123570
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0009AD4 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisIovInvalidateBlockCompletion(__int64 a1, _IRP *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _VPCI_INVALIDATE_BLOCK_OUTPUT *p_InvalidateBlockVfParams; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v7; // rax
  struct _NDIS_OID_REQUEST v9; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v10[2]; // [rsp+130h] [rbp+30h] BYREF

  v10[0] = 0LL;
  if ( a2->IoStatus.Status < 0 || a3->InvalidateBlockCancelling )
  {
    KeSetEvent(&a3->InvalidateBlockEvent, 0, 0);
  }
  else
  {
    p_InvalidateBlockVfParams = &a3->InvalidateBlockVfParams;
    v10[1] = a3->InvalidateBlockVfParams.BlockMask;
    memset(&v9, 0, 0xF8uLL);
    *(_DWORD *)&v9.NdisReserved[16] |= 8u;
    v9.PortNumber = 0;
    *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
    v9.Header = (NDIS_OBJECT_HEADER)15466902;
    v9.DATA.QUERY_INFORMATION.InformationBuffer = v10;
    v9.DATA.QUERY_INFORMATION.InformationBufferLength = 16;
    *(_QWORD *)&v9.DATA.METHOD_INFORMATION.OutputBufferLength = 16LL;
    v9.RequestType = NdisRequestMethod;
    v9.DATA.QUERY_INFORMATION.Oid = 66153;
    ndisQuerySetMiniport(a3, 0LL, &v9, 0, 0LL);
    IoReuseIrp(a2, -1073741637);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].DeviceObject = a3->NextDeviceObject;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2801671;
    CurrentStackLocation[-1].Parameters.Read.Length = 8;
    v7 = a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = -1073741637;
    a2->UserBuffer = p_InvalidateBlockVfParams;
    v7[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&ndisIovInvalidateBlockCompletion;
    v7[-1].Context = a3;
    v7[-1].Control = -32;
    IofCallDriver(a3->NextDeviceObject, a2);
  }
  return 3221225494LL;
}
