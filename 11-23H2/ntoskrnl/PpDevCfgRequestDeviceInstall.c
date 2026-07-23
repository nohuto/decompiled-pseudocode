/*
 * XREFs of PpDevCfgRequestDeviceInstall @ 0x1409638B0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x140783BDC (PiUEventNotifyUserMode.c)
 *     PpDevCfgInit @ 0x140B3FC30 (PpDevCfgInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 */

__int64 PpDevCfgRequestDeviceInstall()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( (PiDevCfgFlags & 2) != 0 )
    return (unsigned int)ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
  return v0;
}
