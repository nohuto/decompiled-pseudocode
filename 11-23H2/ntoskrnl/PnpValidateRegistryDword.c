/*
 * XREFs of PnpValidateRegistryDword @ 0x1403C6BBC
 * Callers:
 *     PnpGetRegistryDword @ 0x1403A09FC (PnpGetRegistryDword.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878BF0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140878E1C (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x14087985C (PiDevCfgVerifyService.c)
 *     PiDevCfgMigrateDevice @ 0x14087BF7C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14087CAA4 (PiDevCfgConfigureDeviceKeys.c)
 *     PipDmgInitReadGroupPolicy @ 0x14095B0F0 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DA8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095E9BC (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095EBE4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14095F678 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F6E8 (PiDevCfgQueryPolicyStringList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
