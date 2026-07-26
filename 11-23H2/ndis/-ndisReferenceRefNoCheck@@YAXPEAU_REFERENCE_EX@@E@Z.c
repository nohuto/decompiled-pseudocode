/*
 * XREFs of ?ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C00C49A0
 * Callers:
 *     NdisFIndicateStatus @ 0x1C0022C50 (NdisFIndicateStatus.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C00B5A80 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 */

void __fastcall ndisReferenceRefNoCheck(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx
  KIRQL v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = (struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2];
  ++*((_WORD *)SpinLock + 4);
  v6 = v4;
  NdisReferenceWithTag(v5, a2);
  KeReleaseSpinLock(SpinLock, v6);
}
