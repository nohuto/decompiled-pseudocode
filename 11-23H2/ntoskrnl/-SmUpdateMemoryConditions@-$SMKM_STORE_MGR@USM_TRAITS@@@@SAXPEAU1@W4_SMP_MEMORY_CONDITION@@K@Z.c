/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140345304
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140222F70 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x140304E00 (KeQueryPriorityThread.c)
 *     SmKmStoreReferenceEx @ 0x1403453E8 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140345450 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C6B4C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2)
{
  unsigned int i; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rax
  int v9; // edi
  KPRIORITY PriorityThread; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  struct _EX_RUNDOWN_REF *v13; // rax

  if ( (*(_DWORD *)(a1 + 1856) & 0x20) != 0 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition((PEX_SPIN_LOCK)(a1 + 1264));
  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a1, i);
    v6 = v5;
    if ( v5 )
    {
      *(_BYTE *)(v5 + 6022) = a2;
      v7 = *(unsigned __int8 *)(v5 + 6022);
      v8 = *(unsigned __int8 *)(v5 + 6022);
      if ( v7 == 4 )
        v9 = *(_DWORD *)(v6 + 6736);
      else
        v9 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v8);
      PriorityThread = KeQueryPriorityThread(*(PKTHREAD *)(v6 + 6200));
      if ( a2 < 4 )
      {
        if ( PriorityThread != v9 )
          KeSetActualBasePriorityThread(*(_QWORD *)(v6 + 6200), v9);
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v6 + 80, v6 + 5976);
      }
      else if ( PriorityThread > v9 )
      {
        KeSetActualBasePriorityThread(*(_QWORD *)(v6 + 6200), v9);
      }
      v13 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v6 + 6016) & 0x3FF, v11, v12);
      ExReleaseRundownProtection_0(v13 + 1);
    }
  }
}
