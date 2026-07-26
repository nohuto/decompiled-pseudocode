/*
 * XREFs of ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0017054
 * Callers:
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01488FC (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00173D4 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall EthDeleteFilterOpenAdapter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _ETH_MULTICAST_WRAPPER **p_MCastAddressBuf; // rdi
  _ETH_MULTICAST_WRAPPER **p_OldMCastAddressBuf; // rsi

  XRemoveBindingFromLists(a1, a2);
  p_MCastAddressBuf = &a2->MCastAddressBuf;
  p_OldMCastAddressBuf = &a2->OldMCastAddressBuf;
  if ( a2->MaxMulticastAddresses )
  {
    ExFreePoolWithTag(*p_MCastAddressBuf, 0);
    ExFreePoolWithTag(*p_OldMCastAddressBuf, 0);
  }
  *p_MCastAddressBuf = 0LL;
  *p_OldMCastAddressBuf = 0LL;
}
