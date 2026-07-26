/*
 * XREFs of ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C01189F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008C3C (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ndisNdkPcwAddCounter @ 0x1C009E080 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C009E200 (ndisNdkPcwEnumerateInstances.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C0138768 (ndisNdkPcwCollectMiniportStats.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C01388B8 (ndisNdkPcwRemoveCounter.c)
 */

__int64 __fastcall ndisNdkPcwProviderCallback(
        enum _PCW_CALLBACK_TYPE a1,
        union _PCW_CALLBACK_INFORMATION *a2,
        void *a3)
{
  int v4; // ecx
  int v5; // ecx
  NTSTATUS v6; // esi
  struct _NDIS_NDK_BLOCK *i; // rbx
  ULONG InstanceId; // eax
  struct _PCW_BUFFER *Buffer; // rsi
  struct _NDIS_MINIPORT_BLOCK *v10; // rdi
  const UNICODE_STRING *pModifiedInstanceName; // rdx
  struct _PCW_DATA Data; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_OID_REQUEST v14; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v15[2]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v16[248]; // [rsp+148h] [rbp+48h] BYREF

  if ( a1 == PcwCallbackAddCounter )
    return ndisNdkPcwAddCounter((__int64)a2);
  v4 = a1 - 1;
  if ( !v4 )
    return ndisNdkPcwRemoveCounter(a2, a2, a3);
  v5 = v4 - 1;
  if ( !v5 )
    return ndisNdkPcwEnumerateInstances(a2->EnumerateInstances.Buffer);
  if ( v5 != 1 )
    return 0LL;
  v6 = -1073741823;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  for ( i = NdkPcwNdkBlockList; i; i = *(struct _NDIS_NDK_BLOCK **)i )
  {
    InstanceId = a2->EnumerateInstances.InstanceId;
    if ( InstanceId == -1 )
    {
      v6 = ndisNdkPcwCollectMiniportStats(i, a2->EnumerateInstances.Buffer);
      if ( v6 < 0 )
        break;
    }
    else if ( InstanceId == *((_DWORD *)i + 5) )
    {
      Buffer = a2->EnumerateInstances.Buffer;
      memset(v16, 0, 0xF0uLL);
      v10 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)i + 1);
      v15[1] = 0;
      v15[0] = 16253312;
      memset(&v14, 0, 0xF8uLL);
      *(_DWORD *)&v14.NdisReserved[16] |= 8u;
      *(_QWORD *)&v14.NdisReserved[32] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v14.NdisReserved[96]);
      v14.PortNumber = 0;
      v14.DATA.QUERY_INFORMATION.InformationBuffer = v15;
      v14.Header = (NDIS_OBJECT_HEADER)15466902;
      v14.DATA.QUERY_INFORMATION.Oid = -66846206;
      v14.RequestType = NdisRequestQueryStatistics;
      v14.DATA.QUERY_INFORMATION.InformationBufferLength = 248;
      if ( (unsigned int)ndisQuerySetMiniport(v10, 0LL, &v14, 0, 0LL) )
      {
        v6 = -1073741823;
      }
      else
      {
        pModifiedInstanceName = v10->pModifiedInstanceName;
        Data.Data = v16;
        Data.Size = 240;
        if ( !pModifiedInstanceName )
          pModifiedInstanceName = v10->pAdapterInstanceName;
        v6 = PcwAddInstance(Buffer, pModifiedInstanceName, *((_DWORD *)i + 5), 1u, &Data);
      }
      break;
    }
  }
  ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
