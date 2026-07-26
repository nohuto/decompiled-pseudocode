/*
 * XREFs of ?ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00374D0
 * Callers:
 *     ?ndisOidPostIovDeleteVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077150 (-ndisOidPostIovDeleteVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostIovFreeVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077190 (-ndisOidPostIovFreeVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084250 (-ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterFreeQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084390 (-ndisOidPostRcvFilterFreeQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00843E0 (-ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsSuccessOrSupriseRemove(int a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int InterlockedFlags; // eax
  unsigned int v3; // ett

  if ( a1 != 65539 )
    return a1 == 0;
  _m_prefetchw(&a2->InterlockedFlags);
  InterlockedFlags = a2->InterlockedFlags;
  do
  {
    v3 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a2->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v3 != InterlockedFlags );
  return (InterlockedFlags & 0x200) != 0;
}
