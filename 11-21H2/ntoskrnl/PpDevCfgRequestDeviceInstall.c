/*
 * XREFs of PpDevCfgRequestDeviceInstall @ 0x14094F7C0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14078B2D4 (PiUEventNotifyUserMode.c)
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 PpDevCfgRequestDeviceInstall()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( (PiDevCfgFlags & 2) != 0 )
    return (unsigned int)ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL);
  return v0;
}
