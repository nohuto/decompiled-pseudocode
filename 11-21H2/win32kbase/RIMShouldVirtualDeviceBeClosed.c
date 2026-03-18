/*
 * XREFs of RIMShouldVirtualDeviceBeClosed @ 0x1C01A102C
 * Callers:
 *     RIMVirtDeviceRootPnpEndSyncAsyncWorkItem @ 0x1C01AB2B0 (RIMVirtDeviceRootPnpEndSyncAsyncWorkItem.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE9D0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMShouldVirtualDeviceBeClosed(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    return 0;
  v1 = *(_DWORD *)(a1 + 188);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
