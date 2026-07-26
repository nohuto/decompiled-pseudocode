/*
 * XREFs of ?ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0099D50
 * Callers:
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00996D8 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z @ 0x1C009303C (-ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C0093860 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C009BA84 (WPP_RECORDER_SF_qqDd_ea_1C009BA84.c)
 */

__int64 __fastcall ndisSetOpenEnableWakeUp(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, char *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  char *v4; // r14
  bool v7; // cf
  unsigned int v8; // ebx
  int v9; // ecx

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      a2);
  v7 = a2->DATA.QUERY_INFORMATION.InformationBufferLength < 4;
  *v4 = 1;
  if ( v7 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    v8 = -1073741823;
  }
  else
  {
    LODWORD(a3) = 2;
    v9 = *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( (v9 & 1) != 0 && (unsigned int)(MiniportHandle->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) > 2
      || (v9 & 2) != 0 && (unsigned int)(MiniportHandle->PMAdvertisedCapabilities.MinPatternWakeUp - 2) > 2
      || (v9 & 4) != 0 && (unsigned int)(MiniportHandle->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2) > 2 )
    {
      v8 = -1073741811;
    }
    else
    {
      ndisConvertWakeUpEnableToPMConfig(a1->WakeUpEnable, &a1->PMCurrentParameters, 2);
      ndisGetCombinedPMConfig(MiniportHandle, &MiniportHandle->PMCurrentParameters);
      v8 = 0;
      a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      17,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      (char)a2,
      v8,
      *v4);
  return v8;
}
