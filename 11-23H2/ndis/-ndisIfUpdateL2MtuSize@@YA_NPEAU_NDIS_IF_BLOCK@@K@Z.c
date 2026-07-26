/*
 * XREFs of ?ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C00B7680
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001DCF0 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C013E288 (-ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIfUpdateL2MtuSize(struct _NDIS_IF_BLOCK *a1, unsigned int a2)
{
  KIRQL v4; // al
  char v5; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( a1->ifMtu == a2 )
  {
    v5 = 0;
  }
  else
  {
    a1->ifMtu = a2;
    v5 = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  return v5;
}
