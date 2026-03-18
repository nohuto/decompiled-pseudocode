/*
 * XREFs of PpDevCfgRequestDeviceInstall @ 0x1409636B0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1407839EC (PiUEventNotifyUserMode.c)
 *     PpDevCfgInit @ 0x140B3FC30 (PpDevCfgInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 */

__int64 PpDevCfgRequestDeviceInstall()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( (PiDevCfgFlags & 2) != 0 )
    return (unsigned int)ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL);
  return v0;
}
