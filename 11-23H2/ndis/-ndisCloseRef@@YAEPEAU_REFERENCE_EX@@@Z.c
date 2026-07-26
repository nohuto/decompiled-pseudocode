/*
 * XREFs of ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0024EA4
 * Callers:
 *     NdisFDeregisterFilterDriver @ 0x1C0067930 (NdisFDeregisterFilterDriver.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C012BD60 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0147F18 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0155C00 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NdisDeregisterProtocol @ 0x1C0156BD0 (NdisDeregisterProtocol.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCloseRef(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  bool v3; // zf
  bool v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v3 = *((_BYTE *)SpinLock + 10) == 0;
  *((_BYTE *)SpinLock + 10) = 1;
  v4 = v3;
  KeReleaseSpinLock(SpinLock, v2);
  return v4;
}
