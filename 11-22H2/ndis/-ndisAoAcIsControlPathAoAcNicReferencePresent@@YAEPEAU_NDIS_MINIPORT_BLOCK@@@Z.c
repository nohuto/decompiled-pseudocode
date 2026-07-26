/*
 * XREFs of ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0057FCC
 * Callers:
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AE924 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisAoAcIsControlPathAoAcNicReferencePresent(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KSPIN_LOCK *AoAc; // rdi
  char v2; // bl
  KIRQL v3; // al
  unsigned int v4; // ecx
  int *v5; // rdx

  AoAc = (KSPIN_LOCK *)a1->AoAc;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(AoAc);
  v4 = 0;
  v5 = (int *)AoAc + 117;
  while ( v4 == 4 || v4 - 15 <= 1 || *v5 <= 0 )
  {
    ++v4;
    ++v5;
    if ( v4 >= 0x11 )
      goto LABEL_8;
  }
  v2 = 1;
LABEL_8:
  KeReleaseSpinLock(AoAc, v3);
  return v2;
}
