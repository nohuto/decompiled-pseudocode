/*
 * XREFs of NdisIfGetInterfaceIndexFromNetLuid @ 0x1C00B76C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0022DF8 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 */

NDIS_STATUS __stdcall NdisIfGetInterfaceIndexFromNetLuid(NET_LUID NetLuid, PNET_IFINDEX pIfIndex)
{
  NDIS_STATUS v4; // edi
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  KIRQL v6; // r8

  *pIfIndex = 0;
  v4 = -1071448021;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(NetLuid);
  if ( InterfaceByNetLuid )
  {
    v4 = 0;
    *pIfIndex = HIDWORD(InterfaceByNetLuid->Flink);
  }
  KeReleaseSpinLock(&ndisIfListLock, v6);
  return v4;
}
