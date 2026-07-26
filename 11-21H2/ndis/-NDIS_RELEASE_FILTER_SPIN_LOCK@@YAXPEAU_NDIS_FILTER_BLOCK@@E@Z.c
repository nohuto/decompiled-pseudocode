/*
 * XREFs of ?NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C005DC80
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013B55C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_RELEASE_FILTER_SPIN_LOCK(struct _NDIS_FILTER_BLOCK *a1, KIRQL a2)
{
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, a2);
}
