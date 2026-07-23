/*
 * XREFs of PnpIsNullGuid @ 0x140786A24
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140786680 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlCmActionCallback @ 0x140788D10 (PiPnpRtlCmActionCallback.c)
 *     PiDqIrpQueryCreate @ 0x1407F9418 (PiDqIrpQueryCreate.c)
 *     IopRegisterDeviceInterface @ 0x140866A3C (IopRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDevice @ 0x14087A974 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BCD0 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087D5F4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FD50 (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
