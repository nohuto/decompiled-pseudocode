/*
 * XREFs of ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0057AA0
 * Callers:
 *     ndisDispatchRequest @ 0x1C0002B08 (ndisDispatchRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00583C8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058670 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00594D4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C005980C (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00599C0 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisReleaseNicActive @ 0x1C005B480 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0058374 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00D2688 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisAoAcActiveRefSubtract(__int64 a1, int a2, int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rdi
  bool v7; // sf

  *(_DWORD *)(a1 + 52) -= a3;
  v4 = *(_DWORD *)(a1 + 52);
  v5 = a2;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 4LL * a2 + 468) - a3 < 0;
  *(_DWORD *)(a1 + 4LL * a2 + 468) -= a3;
  if ( v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_BYTE *)(a1 + 1073) && !*(_DWORD *)(a1 + 4 * v5 + 468) )
  {
    if ( *(_QWORD *)(a1 + 16 * (v5 + 34)) )
    {
      *(_QWORD *)(a1 + 16 * v6 + 536) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 16 * (v5 + 34));
      *(_QWORD *)(a1 + 16 * (v5 + 34)) = 0LL;
    }
    if ( (_DWORD)v5 == 15 )
    {
      ndisAoAcStartRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
    }
    else if ( v4 == 1 && *(_QWORD *)(a1 + 544) )
    {
      *(_QWORD *)(a1 + 544) = MEMORY[0xFFFFF78000000008];
    }
  }
  return v4;
}
