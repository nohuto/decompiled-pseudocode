/*
 * XREFs of ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010D168
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C002889C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B040 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C00082BC (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ??$WriteRelease@PEAU_NDIS_PCW_DATA_BLOCK@@X@mem@@YAXPECREAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z @ 0x1C0008E24 (--$WriteRelease@PEAU_NDIS_PCW_DATA_BLOCK@@X@mem@@YAXPECREAU_NDIS_PCW_DATA_BLOCK@@PEAU1@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x1C0028ABC (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C0028D34 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0028DD0 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0028EFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C010D0FC (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C010D5B8 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

wchar_t *__fastcall ndisPcwGetMiniportDataBlockInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  wchar_t **p_Buffer; // r14
  _UNICODE_STRING *pModifiedInstanceName; // rax
  unsigned int v5; // esi
  unsigned __int16 v6; // r12
  __int64 Pool2; // rax
  __int64 v8; // rbx
  unsigned int v9; // r9d
  __int64 v10; // rbp
  unsigned int v11; // esi
  const wchar_t *v12; // rdx
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // r8
  int v14; // r10d
  int v15; // r11d
  int v16; // ecx
  struct _UNICODE_STRING *v17; // r15
  struct _UNICODE_STRING *v18; // rcx
  int v19; // eax
  ULONG v20; // r8d
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // r11d

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
          PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)v8, v11);
          if ( v11 == v14 )
            v16 = v14;
          else
            v16 = v15 & v11 | ((v15 & a1->IfIndex) << 12) | (a1->NetLuid.Value >> 24) & 0xFF000000;
          *((_DWORD *)PerCpuDataForProcessor + 102) = v16;
          v17 = (struct _UNICODE_STRING *)((char *)PerCpuDataForProcessor + 416);
          *((_WORD *)PerCpuDataForProcessor + 209) = v6;
          *((_WORD *)PerCpuDataForProcessor + 208) = 0;
          *((_QWORD *)PerCpuDataForProcessor + 53) = v10 + v11 * v6;
          v18 = (struct _UNICODE_STRING *)((char *)PerCpuDataForProcessor + 416);
          if ( v11 == v14 )
          {
            v22 = RtlUnicodeStringCopy(v18, &ndisPcwSystemTotalInstanceName, (ULONG)PerCpuDataForProcessor);
          }
          else
          {
            if ( v11 == v15 )
              v19 = RtlUnicodeStringCopyString(v18, v12);
            else
              v19 = RtlUnicodeStringPrintf(v18, L"%u, ", v11);
            if ( v19 < 0 )
              goto LABEL_23;
            pAdapterInstanceName = a1->pModifiedInstanceName;
            if ( !pAdapterInstanceName )
              pAdapterInstanceName = a1->pAdapterInstanceName;
            v22 = RtlUnicodeStringCat(v17, pAdapterInstanceName, v20);
          }
          if ( v22 < 0 )
            goto LABEL_23;
          ++v11;
        }
        while ( v11 < ndisMaxNumberOfProcessors );
      }
      *(_DWORD *)(v8 + 184) = ndisPcwGetMiniportInstanceId(a1, 0xFFFu);
      *(_WORD *)(v8 + 192) = 0;
      *(_WORD *)(v8 + 194) = v6;
      *(_QWORD *)(v8 + 200) = v10 + v23 * (unsigned int)v6;
      if ( (int)ndisPcwGetInstanceName(a1, (const wchar_t *)v24, (struct _UNICODE_STRING *)(v8 + 192)) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag((PVOID)v8, 0);
      }
      else
      {
        a1->IfBlock->PcwDataBlock = (struct _NDIS_PCW_DATA_BLOCK *)v8;
        mem::WriteRelease<_NDIS_PCW_DATA_BLOCK *,void>(p_Buffer, v8);
        *(_QWORD *)(v8 + 160) = ndisPcwDataBlockList;
        ndisPcwDataBlockList = (PVOID)v8;
      }
    }
  }
  return *p_Buffer;
}
