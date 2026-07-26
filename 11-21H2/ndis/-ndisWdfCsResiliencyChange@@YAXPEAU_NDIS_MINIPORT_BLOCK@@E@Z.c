/*
 * XREFs of ?ndisWdfCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00AB74C
 * Callers:
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00537A0 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0052D50 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0052F68 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisWdfCsResiliencyChange(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v4; // r9
  __int64 v5; // r8

  AoAc = a1->AoAc;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_BYTE *)AoAc + 1073) = a2;
  if ( a2 )
  {
    if ( *((int *)AoAc + 13) > 0 )
      *((_QWORD *)AoAc + 105) = MEMORY[0xFFFFF78000000008];
    ndisAoAcStartRefTimeStats(AoAc);
  }
  else
  {
    ndisAoAcPauseRefTimeStats(AoAc);
    if ( *((_QWORD *)AoAc + 105) != v5 )
    {
      *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 105);
      *((_QWORD *)AoAc + 105) = v5;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
}
