/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x1C0005C78
 * Callers:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 * Callees:
 *     RIMUpdateDeviceForInputMode @ 0x1C0005CE4 (RIMUpdateDeviceForInputMode.c)
 *     RIMGetCurrentPowerInputMode @ 0x1C0005D44 (RIMGetCurrentPowerInputMode.c)
 *     ?RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z @ 0x1C0005E48 (-RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0183260 (RIMSetDeviceIdleTimeout.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01B44FC (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(struct RIMDEV *a1)
{
  unsigned int v2; // eax

  if ( (unsigned __int8)isChildPartition() )
  {
    *((_DWORD *)a1 + 329) = -1;
    *((_DWORD *)a1 + 330) = 0;
    return 0LL;
  }
  RIMQueryWakeCapableProperty(a1);
  *((_DWORD *)a1 + 329) = -1;
  v2 = RIMGetCurrentPowerInputMode();
  *((_DWORD *)a1 + 330) = v2;
  RIMUpdateDeviceForInputMode(a1, v2);
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !*(_BYTE *)SGDGetUserGdiSessionState() )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
