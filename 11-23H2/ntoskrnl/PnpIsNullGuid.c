/*
 * XREFs of PnpIsNullGuid @ 0x140786834
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140786490 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     PiDqIrpQueryCreate @ 0x1407F9148 (PiDqIrpQueryCreate.c)
 *     IopRegisterDeviceInterface @ 0x1408667FC (IopRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDevice @ 0x14087A734 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BA90 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087D3B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FB50 (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429820 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
