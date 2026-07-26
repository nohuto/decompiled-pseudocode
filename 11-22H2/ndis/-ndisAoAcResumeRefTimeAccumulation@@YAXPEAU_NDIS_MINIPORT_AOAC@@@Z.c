/*
 * XREFs of ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00581D4
 * Callers:
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00179B0 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0058358 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisAoAcResumeRefTimeAccumulation(KSPIN_LOCK *a1)
{
  KSPIN_LOCK v2; // rcx
  KIRQL v3; // r9

  KeAcquireSpinLockRaiseToDpc(a1);
  v2 = 0LL;
  if ( *((_BYTE *)a1 + 1073) )
    v2 = MEMORY[0xFFFFF78000000008];
  a1[105] = v2;
  ndisAoAcStartRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
  KeReleaseSpinLock(a1, v3);
}
