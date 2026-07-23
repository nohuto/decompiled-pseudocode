/*
 * XREFs of sub_1402D2BD8 @ 0x1402D2BD8
 * Callers:
 *     sub_1402D2AD0 @ 0x1402D2AD0 (sub_1402D2AD0.c)
 *     sub_1405E364C @ 0x1405E364C (sub_1405E364C.c)
 *     sub_14074BBC4 @ 0x14074BBC4 (sub_14074BBC4.c)
 *     sub_14074BC84 @ 0x14074BC84 (sub_14074BC84.c)
 *     sub_14074BE1C @ 0x14074BE1C (sub_14074BE1C.c)
 *     sub_14074BE9C @ 0x14074BE9C (sub_14074BE9C.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074B878 @ 0x14074B878 (sub_14074B878.c)
 *     sub_14074D308 @ 0x14074D308 (sub_14074D308.c)
 */

char __fastcall sub_1402D2BD8(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // si
  KIRQL v7; // r14
  KIRQL v8; // dl
  PERESOURCE PagingIoResource; // rcx
  char *p_FileContextSupportPointer; // rdi
  __int64 v12; // rcx
  char **v13; // rax
  PERESOURCE v14; // rax
  __int64 v15; // rcx
  char **v16; // rax
  char **v17; // rax
  PVOID *FileContextSupportPointer; // rdx
  PVOID **v19; // rcx

  v3 = 0;
  if ( (AdvancedHeader[1].AllocationSize.LowPart & 4) != 0 )
  {
    if ( AdvancedHeader[1].FileSize.LowPart )
      return v3;
    v8 = KeAcquireQueuedSpinLock(9uLL);
    if ( *(_DWORD *)(&AdvancedHeader[2].PagingIoResource->26 + 1) )
      goto LABEL_5;
    KeReleaseQueuedSpinLock(9uLL, v8);
    ExAcquireFastMutex(&stru_140C1BCC0);
    FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
    if ( FileContextSupportPointer[1] == &AdvancedHeader[1].FileContextSupportPointer )
    {
      v19 = *(PVOID ***)&AdvancedHeader[2].NodeTypeCode;
      if ( *v19 == (PVOID *)&AdvancedHeader[1].FileContextSupportPointer )
      {
        *v19 = FileContextSupportPointer;
        FileContextSupportPointer[1] = v19;
        KeReleaseGuardedMutex(&stru_140C1BCC0);
        goto LABEL_11;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
  v7 = KeAcquireQueuedSpinLock(9uLL);
  if ( a2 || AdvancedHeader[1].AllocationSize.HighPart + *(_DWORD *)(&AdvancedHeader[2].PagingIoResource->26 + 1) == a3 )
  {
    PagingIoResource = AdvancedHeader[2].PagingIoResource;
    p_FileContextSupportPointer = (char *)&AdvancedHeader[1].FileContextSupportPointer;
    if ( AdvancedHeader[1].FileSize.LowPart + *(_DWORD *)(&PagingIoResource->26 + 1) )
    {
      memset((void *)AdvancedHeader[2].AllocationSize.QuadPart, 0, 0x60uLL);
      *(_WORD *)AdvancedHeader[2].AllocationSize.QuadPart = 10;
      *(_WORD *)(AdvancedHeader[2].AllocationSize.QuadPart + 2) = 96;
      *(_QWORD *)(AdvancedHeader[2].AllocationSize.QuadPart + 16) = AdvancedHeader[2].PagingIoResource->OwnerTable;
      *(_QWORD *)(AdvancedHeader[2].AllocationSize.QuadPart + 8) = 0LL;
      *(_WORD *)(AdvancedHeader[2].AllocationSize.QuadPart + 4) = WORD2(AdvancedHeader[2].PagingIoResource->SystemResourcesList.Flink) & 8;
      *(_QWORD *)&AdvancedHeader[2].PagingIoResource->OwnerTable[3].0 = AdvancedHeader[2].AllocationSize.QuadPart;
      v14 = AdvancedHeader[2].PagingIoResource;
      AdvancedHeader[2].AllocationSize.QuadPart = 0LL;
      WORD2(v14->SystemResourcesList.Flink) |= 4u;
      AdvancedHeader[1].AllocationSize.LowPart |= 8u;
      KeReleaseQueuedSpinLock(9uLL, v7);
      ExAcquireFastMutex(&stru_140C1BCC0);
      v15 = *(_QWORD *)p_FileContextSupportPointer;
      if ( *(char **)(*(_QWORD *)p_FileContextSupportPointer + 8LL) == p_FileContextSupportPointer )
      {
        v16 = *(char ***)&AdvancedHeader[2].NodeTypeCode;
        if ( *v16 == p_FileContextSupportPointer )
        {
          *v16 = (char *)v15;
          *(_QWORD *)(v15 + 8) = v16;
          AdvancedHeader[1].AllocationSize.LowPart |= 6u;
          v17 = (char **)qword_140C1BCB8;
          if ( *(__int64 **)qword_140C1BCB8 == &qword_140C1BCB0 )
          {
            *(_QWORD *)p_FileContextSupportPointer = &qword_140C1BCB0;
            *(_QWORD *)&AdvancedHeader[2].NodeTypeCode = v17;
            *v17 = p_FileContextSupportPointer;
            qword_140C1BCB8 = (__int64)&AdvancedHeader[1].FileContextSupportPointer;
            KeReleaseGuardedMutex(&stru_140C1BCC0);
            return v3;
          }
        }
      }
    }
    else
    {
      WORD2(PagingIoResource->SystemResourcesList.Flink) &= ~1u;
      AdvancedHeader[2].PagingIoResource->SystemResourcesList.Blink = 0LL;
      KeReleaseQueuedSpinLock(9uLL, v7);
      ExAcquireFastMutex(&stru_140C1BCC0);
      v12 = *(_QWORD *)p_FileContextSupportPointer;
      if ( *(char **)(*(_QWORD *)p_FileContextSupportPointer + 8LL) == p_FileContextSupportPointer )
      {
        v13 = *(char ***)&AdvancedHeader[2].NodeTypeCode;
        if ( *v13 == p_FileContextSupportPointer )
        {
          *v13 = (char *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          KeReleaseGuardedMutex(&stru_140C1BCC0);
          AdvancedHeader[1].AllocationSize.LowPart |= 2u;
LABEL_11:
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].FilterContexts);
          sub_14074B878(AdvancedHeader);
          sub_14074D308(AdvancedHeader);
          return 1;
        }
      }
    }
    goto LABEL_21;
  }
  v8 = v7;
LABEL_5:
  KeReleaseQueuedSpinLock(9uLL, v8);
  return v3;
}
