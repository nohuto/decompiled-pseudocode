/*
 * XREFs of ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A87B4
 * Callers:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A88C8 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0052BDC (-ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C0056858 (WPP_RECORDER_SF_qdL_ea_1C0056858.c)
 */

char __fastcall ndisShouldEngageNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // bl
  int v3; // edx

  v1 = 0;
  if ( a1->AoAc
    && (a1->PnPFlags & 0x60) == 0x60
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (a1->PMHardwareCapabilities.Flags & 4) != 0
    && !ndisAoAcIsControlPathAoAcNicReferencePresent(a1) )
  {
    if ( ndisIsScreenOnNapsEnabled == 1 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x28u,
          (struct _GUID *)&WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids,
          a1);
      return 1;
    }
    if ( ndisLowPowerEpoch || ndisConnectedStandby )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qdL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          0xFu,
          0x29u,
          (struct _GUID *)&WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids,
          (char)a1,
          ndisLowPowerEpoch,
          ndisConnectedStandby);
      return 1;
    }
  }
  return v1;
}
