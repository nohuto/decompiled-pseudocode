/*
 * XREFs of RaUnitRemoveDeviceIrp @ 0x1C00226C4
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C0005BE0 (RaidUnitReenablePendingTimer.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001ED90 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0022760 (RaUnitDeleteDeviceIrp.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0051348 (RaUnitDisableDeviceIrp.c)
 */

__int64 __fastcall RaUnitRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  char v4; // al
  unsigned int v5; // esi

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_568007271afc3cdc120e483208e8f443_Traceguids, a1, a2);
  }
  if ( *(_DWORD *)(a1 + 48) == 6 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 13LL, &WPP_568007271afc3cdc120e483208e8f443_Traceguids, a1, a2);
    }
    return RaidCompleteRequestEx(a2, 0, 0xC000000E);
  }
  else
  {
    v4 = *(_BYTE *)(a1 + 448);
    if ( (v4 & 0x20) == 0 )
    {
      RaUnitDeregisterFromIdleDetection(a1);
      v4 = *(_BYTE *)(a1 + 448);
    }
    if ( (v4 & 4) != 0 )
    {
      v5 = RaUnitDisableDeviceIrp(a1, a2);
      RaidUnitReenablePendingTimer(a1, 0);
    }
    else
    {
      v5 = RaUnitDeleteDeviceIrp(a1, a2);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_568007271afc3cdc120e483208e8f443_Traceguids, a1, a2, v5);
    }
    return v5;
  }
}
