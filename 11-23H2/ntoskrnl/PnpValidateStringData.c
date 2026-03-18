/*
 * XREFs of PnpValidateStringData @ 0x1403CE270
 * Callers:
 *     PnpValidateRegistryString @ 0x1403CE234 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x1405622C8 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x14056244C (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086CC64 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878BF0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E0E4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E424 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095E9BC (PiDevCfgMakeServiceBootStart.c)
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
