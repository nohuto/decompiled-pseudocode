/*
 * XREFs of ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00AF42C
 * Callers:
 *     ?ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139098 (-ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C002194C (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C24C (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AD060 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1C00AD154 (ndisMSendPmParametersOidForSuspend.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C960 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisWdmSendPmOidsForSuspend(struct _NDIS_MINIPORT_BLOCK *a1, enum _DEVICE_POWER_STATE a2)
{
  unsigned int v3; // edi
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned __int16 v5; // r9
  struct _NDIS_SELECTIVE_SUSPEND *v6; // rbx
  enum _DEVICE_POWER_STATE v8; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_PM_PARAMETERS v9; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_OID_REQUEST v10; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_PM_PARAMETERS v11; // [rsp+160h] [rbp+60h] BYREF

  v8 = a2;
  memset(&v10.Header.Revision, 0, 0xF7uLL);
  v11 = *ndisMInitializePmParametersForSuspend(&v9, a1);
  v3 = ndisMSendPmParametersOidForSuspend(a1, &v11);
  if ( v3 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a1);
    *((_WORD *)SelectiveSuspend + 313) = *((_WORD *)SelectiveSuspend + 312);
    *((_WORD *)SelectiveSuspend + 312) = 3;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v5 = 19;
LABEL_9:
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        v5,
        (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
        v3,
        a1);
    }
  }
  else
  {
    memset(&v10, 0, 0xF8uLL);
    *(_DWORD *)&v10.NdisReserved[16] |= 8u;
    *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v10.NdisReserved[96]);
    v10.PortNumber = 0;
    *(_DWORD *)&v10.NdisReserved[16] |= 0x400u;
    v10.DATA.QUERY_INFORMATION.InformationBuffer = &v8;
    v10.Header = (NDIS_OBJECT_HEADER)15466902;
    v10.DATA.QUERY_INFORMATION.Oid = -50265855;
    v10.RequestType = NdisRequestSetInformation;
    v10.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    KeInitializeEvent((PRKEVENT)&v10.NdisReserved[40], NotificationEvent, 0);
    v3 = ndisMInvokeOidRequest(a1, &v10);
    if ( v3 == 259 )
    {
      ndisWaitForKernelObject(&v10.NdisReserved[40]);
      v3 = *(_DWORD *)&v10.NdisReserved[8];
    }
    if ( v3 )
    {
      v6 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1);
      *((_WORD *)v6 + 313) = *((_WORD *)v6 + 312);
      *((_WORD *)v6 + 312) = 4;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v5 = 20;
        goto LABEL_9;
      }
    }
  }
  return v3;
}
