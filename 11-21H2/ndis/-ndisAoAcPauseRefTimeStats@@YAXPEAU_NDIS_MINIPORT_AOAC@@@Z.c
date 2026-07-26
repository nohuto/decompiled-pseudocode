/*
 * XREFs of ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0052D50
 * Callers:
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0052598 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0052CE4 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00537A0 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00AB74C (-ndisWdfCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00AB9F8 (-ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CO.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcPauseRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx

  v1 = (_QWORD *)((char *)a1 + 544);
  v2 = 17LL;
  do
  {
    if ( *v1 )
    {
      *(v1 - 1) += MEMORY[0xFFFFF78000000008] - *v1;
      *v1 = 0LL;
    }
    v1 += 2;
    --v2;
  }
  while ( v2 );
}
