/*
 * XREFs of ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0058358
 * Callers:
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0057A84 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00581D4 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0058B90 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B1178 (-ndisWdfCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00B154C (-ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CO.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcStartRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  __int64 v3; // r8
  int *v4; // rcx

  v1 = MEMORY[0xFFFFF78000000008];
  if ( *((int *)a1 + 132) <= 0 )
  {
    v2 = (_QWORD *)((char *)a1 + 544);
    v3 = 17LL;
    v4 = (int *)((char *)a1 + 468);
    do
    {
      if ( *v4 > 0 )
        *v2 = v1;
      ++v4;
      v2 += 2;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    *((_QWORD *)a1 + 98) = MEMORY[0xFFFFF78000000008];
  }
}
