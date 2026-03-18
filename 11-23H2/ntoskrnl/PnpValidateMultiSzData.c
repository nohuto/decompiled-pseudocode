/*
 * XREFs of PnpValidateMultiSzData @ 0x1403CE808
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x1403CE7D4 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x14056244C (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086CC64 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878BF0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E0E4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14095CFB4 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095EE00 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpValidateMultiSzData(_WORD *a1, unsigned int a2)
{
  char result; // al
  unsigned __int64 v3; // r8

  result = 0;
  if ( a2 >= 4 )
  {
    v3 = (unsigned __int64)a2 >> 1;
    if ( a1[v3 - 1] )
      return result;
    if ( !a1[v3 - 2] )
      return 1;
  }
  if ( a2 == 2 && !*a1 )
    return 1;
  return result;
}
