/*
 * XREFs of ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01183C4
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C002866C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136CE8 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0006414 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ??$WriteRelease@PEAU_NDIS_PCW_DATA_BLOCK@@X@mem@@YAXPECREAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z @ 0x1C0006DC4 (--$WriteRelease@PEAU_NDIS_PCW_DATA_BLOCK@@X@mem@@YAXPECREAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0118584 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C01185C0 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 */

wchar_t *__fastcall ndisPcwGetMiniportDataBlockInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  wchar_t **p_Buffer; // r14
  _UNICODE_STRING *pModifiedInstanceName; // rax
  unsigned int v5; // esi
  unsigned __int16 v6; // r15
  __int64 Pool2; // rax
  __int64 v8; // rbx
  unsigned int v9; // r9d
  __int64 v10; // rbp
  unsigned int v11; // esi
  unsigned int MiniportInstanceId; // eax
  __int64 v13; // r9
  int v14; // r9d
  unsigned int v15; // r10d

  p_Buffer = &a1->Reserved4.Buffer;
  if ( !a1->Reserved4.Buffer )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    v5 = ndisMaxNumberOfProcessors * ndisPcwPerCpuDataStride;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    v6 = pModifiedInstanceName->Length + 18;
    Pool2 = ExAllocatePool2(72LL, v5 + ndisPcwOffsetToPerCpuData + v6 * (ndisMaxNumberOfProcessors + 1), 2002994254);
    v8 = Pool2;
    if ( Pool2 )
    {
      v9 = ndisMaxNumberOfProcessors;
      *(_QWORD *)(Pool2 + 176) = a1;
      *(_DWORD *)(Pool2 + 168) = 2;
      v10 = Pool2 + ndisPcwOffsetToPerCpuData + v5;
      v11 = 0;
      if ( v9 )
      {
        do
        {
          ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)v8, v11);
          MiniportInstanceId = ndisPcwGetMiniportInstanceId(a1, v11);
          *(_DWORD *)(v13 + 408) = MiniportInstanceId;
          *(_WORD *)(v13 + 416) = 0;
          *(_WORD *)(v13 + 418) = v6;
          *(_QWORD *)(v13 + 424) = v10 + v11 * v6;
          if ( ndisPcwGetInstanceName(a1, v11, (struct _UNICODE_STRING *)(v13 + 416)) < 0 )
            goto LABEL_11;
        }
        while ( ++v11 < ndisMaxNumberOfProcessors );
      }
      *(_DWORD *)(v8 + 184) = ndisPcwGetMiniportInstanceId(a1, 0xFFFu);
      *(_WORD *)(v8 + 192) = 0;
      *(_WORD *)(v8 + 194) = v6;
      *(_QWORD *)(v8 + 200) = v10 + v14 * (unsigned int)v6;
      if ( ndisPcwGetInstanceName(a1, v15, (struct _UNICODE_STRING *)(v8 + 192)) < 0 )
      {
LABEL_11:
        ExFreePoolWithTag((PVOID)v8, 0);
        return *p_Buffer;
      }
      a1->IfBlock->PcwDataBlock = (struct _NDIS_PCW_DATA_BLOCK *)v8;
      mem::WriteRelease<_NDIS_PCW_DATA_BLOCK *,void>(p_Buffer, v8);
      *(_QWORD *)(v8 + 160) = ndisPcwDataBlockList;
      ndisPcwDataBlockList = (PVOID)v8;
    }
  }
  return *p_Buffer;
}
