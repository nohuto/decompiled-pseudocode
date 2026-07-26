/*
 * XREFs of ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0057F48
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C00AF8C0 (NdisMIdleNotificationConfirm.c)
 * Callees:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012B324 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisAoAcIdleRequestConfirm(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  KIRQL v3; // al
  KIRQL v4; // al

  AoAc = a1->AoAc;
  v2 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_WORD *)AoAc + 192) = 257;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
  LODWORD(v2) = ndisRequestNicQuiet(v2, 1u);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_BYTE *)AoAc + 385) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  return (unsigned int)v2;
}
