/*
 * XREFs of ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0092EBC
 * Callers:
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008DA38 (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisMIndicateStatusEx @ 0x1C0019EA0 (NdisMIndicateStatusEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008DD90 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisRejectUnsupportedWoLPatterns(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *i; // r8
  __int64 v3; // r8
  int v4; // r9d
  int v5; // ecx
  NDIS_PORT_NUMBER v6; // edi
  int v7; // ecx
  char v8[8]; // [rsp+28h] [rbp-D8h]
  _QWORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v11; // [rsp+B0h] [rbp-50h] BYREF

  LODWORD(v9[0]) = 0;
  memset(&v11, 0, 0xF8uLL);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  ndisWaitForKernelObject(&a1->PMPatternSemaphore);
LABEL_2:
  LODWORD(v9[0]) = 0;
  for ( i = a1->WOLPatternList.Next; i; i = *(_SINGLE_LIST_ENTRY **)v3 )
  {
    if ( !ndisIsWoLPacketTypeSupported(SHIDWORD(i[7].Next), a1) )
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
            0x7Cu,
            (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
            *(_QWORD *)v8,
            v9[0]);
        }
      }
      else
      {
        memset(&v11, 0, 0xF8uLL);
        *(_DWORD *)&v11.NdisReserved[16] |= 0x1800008u;
        *(_QWORD *)&v11.NdisReserved[32] = &ndisIntReqGeneric;
        v11.Header = (NDIS_OBJECT_HEADER)15466902;
        v11.DATA.QUERY_INFORMATION.InformationBuffer = v9;
        v11.DATA.QUERY_INFORMATION.Oid = -50265845;
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
          StatusIndication.StatusCode = 1073938513;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(a1, &StatusIndication);
          goto LABEL_2;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v8 = v7;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x7Du,
            (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
            *(_QWORD *)v8,
            v9[0]);
        }
      }
      break;
    }
  }
  KeReleaseSemaphore(&a1->PMPatternSemaphore, 0, 1, 0);
}
