/*
 * XREFs of PnpValidateRegistryDword @ 0x1403C6D9C
 * Callers:
 *     PnpGetRegistryDword @ 0x1403A0BDC (PnpGetRegistryDword.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878E30 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14087905C (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x140879A9C (PiDevCfgVerifyService.c)
 *     PiDevCfgMigrateDevice @ 0x14087C1BC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14087CCE4 (PiDevCfgConfigureDeviceKeys.c)
 *     PipDmgInitReadGroupPolicy @ 0x14095B2F0 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DC8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095EBBC (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095EDE4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14095F878 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F8E8 (PiDevCfgQueryPolicyStringList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
