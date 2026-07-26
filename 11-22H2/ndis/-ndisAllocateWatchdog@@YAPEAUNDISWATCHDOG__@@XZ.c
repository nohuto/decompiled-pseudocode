/*
 * XREFs of ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C01126D0
 * Callers:
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C002ED48 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007EDAC (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0112654 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ??0NdisWatchdogState@@QEAA@XZ @ 0x1C0112724 (--0NdisWatchdogState@@QEAA@XZ.c)
 */

__int64 ndisAllocateWatchdog(void)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  if ( ndisWatchdogDisable )
    return -1LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x7377444Eu);
  if ( !PoolWithTag )
    return -1LL;
  result = (__int64)NdisWatchdogState::NdisWatchdogState(PoolWithTag);
  if ( !result )
    return -1LL;
  return result;
}
