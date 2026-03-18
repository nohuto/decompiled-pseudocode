/*
 * XREFs of PiDrvDbDriverStoreNodesUpdated @ 0x14081191C
 * Callers:
 *     PiDrvDbRegisterNode @ 0x14081173C (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x140971474 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 */

__int64 PiDrvDbDriverStoreNodesUpdated()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return ZwUpdateWnfStateData((__int64)&WNF_PNPD_DRIVER_STORE_NODES_UDPATED, (__int64)&v1);
}
