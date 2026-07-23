/*
 * XREFs of PnpValidateStringData @ 0x1403CE450
 * Callers:
 *     PnpValidateRegistryString @ 0x1403CE414 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x140562988 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x140562B0C (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086CEA4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878E30 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E324 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E664 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095EBBC (PiDevCfgMakeServiceBootStart.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateStringData(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 >= 2 )
    return *(_WORD *)(a1 + 2 * ((unsigned __int64)a2 >> 1) - 2) == 0;
  return v2;
}
