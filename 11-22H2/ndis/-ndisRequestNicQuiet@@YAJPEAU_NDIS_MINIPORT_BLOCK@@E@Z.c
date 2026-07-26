/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012B324
 * Callers:
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0057F48 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0059B4C (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00178D8 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00217BC (WPP_RECORDER_SF_Lq.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C005793C (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005A770 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C005BB74 (WPP_RECORDER_SF_qdL_ea_1C005BB74.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081AA8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C0082954 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C01103B4 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B524 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisRequestNicQuiet(_QWORD *Context, char a2)
{
  __int64 v2; // rsi
  POWER_STATE v5; // r14d
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // eax
  char v9; // di
  int v10; // eax
  unsigned int v11; // edi

  v2 = Context[557];
  v5.SystemState = PowerSystemSleeping3;
  ndisCancelWaitWake((struct _NDIS_MINIPORT_BLOCK *)Context);
  if ( (*((_BYTE *)Context + 124) & 0x60) == 0x60 && (v6 = *((_DWORD *)Context + 318), v6 - 2 <= 2) )
  {
    v7 = 1;
    if ( *(_BYTE *)(v2 + 386) )
    {
      v5.SystemState = (int)Context[159];
      ndisMInvokeDevicePowerNotify((struct _NDIS_MINIPORT_BLOCK *)Context, v6);
      ndisWdmSendOidPmParametersForAoAc((struct _NDIS_MINIPORT_BLOCK *)Context);
      v8 = ndisRequestWaitWake(
             (struct _NDIS_MINIPORT_BLOCK *)Context,
             (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
      v9 = v8;
      if ( v8 != 259 )
      {
        NdisUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)Context, 5u, v8);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x20u,
            (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
            v9,
            Context);
      }
      goto LABEL_10;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      0xEu,
      0x21u,
      (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
      (char)Context,
      v7,
      *(unsigned __int8 *)(v2 + 386));
LABEL_10:
  ndisUpdateMiniportCsTrafficStatistics((struct _NDIS_MINIPORT_BLOCK *)Context, 1);
  v10 = ndisRequestDeviceLowPower(
          (struct _NDIS_MINIPORT_BLOCK *)Context,
          v5,
          (PREQUEST_POWER_COMPLETE)ndisNicQuietRequestComplete,
          Context,
          NdisMEventDx_NicQuiet);
  v11 = v10;
  if ( v10 == 259 )
  {
    v11 = 0;
    if ( a2 )
      ndisWaitForKernelObject((void *)(v2 + 392));
  }
  else
  {
    NdisUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)Context, 6u, v10);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x22u,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        v11,
        Context);
  }
  return v11;
}
