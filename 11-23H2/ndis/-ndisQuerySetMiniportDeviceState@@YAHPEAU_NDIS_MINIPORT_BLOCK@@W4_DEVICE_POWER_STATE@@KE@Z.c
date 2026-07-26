/*
 * XREFs of ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0082680
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00165A8 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C0146970 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014798C (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     McTemplateK0jqxqqt_EtwWriteTransfer @ 0x1C0082ED0 (McTemplateK0jqxqqt_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qZDLd @ 0x1C0082F88 (WPP_RECORDER_SF_qZDLd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00D2688 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisQuerySetMiniportDeviceState(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _DEVICE_POWER_STATE a2,
        NDIS_OID a3,
        char a4)
{
  unsigned int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // edi
  int v14; // [rsp+20h] [rbp-E0h]
  char v15[8]; // [rsp+30h] [rbp-D0h]
  enum _DEVICE_POWER_STATE v16; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_OID_REQUEST v17; // [rsp+60h] [rbp-A0h] BYREF

  v16 = a2;
  memset(&v17.Header.Revision, 0, 0xF7uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x34u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a1);
  if ( (a1->Flags & 0x80u) == 0 )
  {
    memset(&v17, 0, 0xF8uLL);
    *(_DWORD *)&v17.NdisReserved[16] |= 8u;
    *(_QWORD *)&v17.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v17.NdisReserved[96]);
    v17.Header = (NDIS_OBJECT_HEADER)15466902;
    v17.DATA.QUERY_INFORMATION.Oid = a3;
    v17.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v17.PortNumber = 0;
    v17.RequestType = a4 != 0;
    v17.DATA.QUERY_INFORMATION.InformationBuffer = &v16;
    v8 = ndisQuerySetMiniportEx(a1, 0LL, &v17, 0, 0LL, 0LL);
    v13 = v8;
    if ( v8 && v8 != -1073741637 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZDLd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          v11,
          v12,
          v14,
          (char)a1,
          (__int64)a1->pAdapterInstanceName,
          a3,
          a4,
          v8);
      if ( (byte_1C00F7641 & 8) != 0 )
        McTemplateK0jqxqqt_EtwWriteTransfer(
          v10,
          v9,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          v13,
          a3,
          a4);
    }
    if ( a4 && v13 != -1073741637 && v13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v15 = v13;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x37u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)a1,
        *(_QWORD *)v15);
    }
    return v13;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x35u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    return 0LL;
  }
}
