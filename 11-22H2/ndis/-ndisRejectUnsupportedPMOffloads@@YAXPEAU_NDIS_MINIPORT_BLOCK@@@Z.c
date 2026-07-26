/*
 * XREFs of ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0098C6C
 * Callers:
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093A1C (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisMIndicateStatusEx @ 0x1C001A280 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030BF4 (WPP_RECORDER_SF_L_ea_1C0030BF4.c)
 *     WPP_RECORDER_SF_d @ 0x1C00331FC (WPP_RECORDER_SF_d_ea_1C00331FC.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093BE0 (-ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisRejectUnsupportedPMOffloads(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *i; // r8
  __int64 v3; // r8
  int v4; // r9d
  int v5; // ecx
  NDIS_PORT_NUMBER v6; // esi
  int v7; // ecx
  char v8[8]; // [rsp+28h] [rbp-D8h]
  _QWORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v11; // [rsp+B0h] [rbp-50h] BYREF

  memset(&v11, 0, 0xF8uLL);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  LODWORD(v9[0]) = 0;
  ndisWaitForKernelObject(&a1->PMOffloadSemaphore);
LABEL_2:
  LODWORD(v9[0]) = 0;
  for ( i = a1->PMProtocolOffloadList.Next; i; i = *(_SINGLE_LIST_ENTRY **)v3 )
  {
    if ( !ndisIsPMProtocolOffloadSupported(SHIDWORD(i[7].Next), a1) )
    {
      v5 = *(_DWORD *)(v3 + 196);
      LODWORD(v9[0]) = v5;
      v6 = *(_DWORD *)(v3 + 44);
      if ( !v5 )
        break;
      if ( v5 == v4 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v8 = v5;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x7Au,
            (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
            *(_QWORD *)v8,
            v9[0]);
        }
      }
      else
      {
        memset(&v11, 0, 0xF8uLL);
        *(_DWORD *)&v11.NdisReserved[16] |= 8u;
        *(_QWORD *)&v11.NdisReserved[32] = &ndisIntReqGeneric;
        EtwActivityIdControl(3u, (LPGUID)&v11.NdisReserved[96]);
        *(_DWORD *)&v11.NdisReserved[16] |= 0x1800000u;
        v11.DATA.QUERY_INFORMATION.InformationBuffer = v9;
        v11.Header = (NDIS_OBJECT_HEADER)15466902;
        v11.DATA.QUERY_INFORMATION.Oid = -50265841;
        v11.RequestType = NdisRequestSetInformation;
        v11.PortNumber = v6;
        v11.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
        v7 = ndisQuerySetMiniportEx(a1, 0LL, &v11, 0, 0LL, 0LL);
        if ( !v7 )
        {
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusBuffer = v9;
          StatusIndication.SourceHandle = a1;
          StatusIndication.StatusCode = 1073938514;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(a1, &StatusIndication);
          goto LABEL_2;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v8 = v7;
          WPP_RECORDER_SF_L(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x7Bu,
            (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
            *(_QWORD *)v8,
            v9[0]);
        }
      }
      break;
    }
  }
  KeReleaseSemaphore(&a1->PMOffloadSemaphore, 0, 1, 0);
}
