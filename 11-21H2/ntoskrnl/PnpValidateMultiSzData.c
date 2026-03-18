/*
 * XREFs of PnpValidateMultiSzData @ 0x1402D19FC
 * Callers:
 *     PnpValidateRegistryValue @ 0x1403965A0 (PnpValidateRegistryValue.c)
 *     PnpValidateRegistryMultiSz @ 0x14039A190 (PnpValidateRegistryMultiSz.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406E67F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14080A890 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14094B144 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14094CBE0 (PiDevCfgQueryDeviceMigrationNode.c)
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
