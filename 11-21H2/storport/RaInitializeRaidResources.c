/*
 * XREFs of RaInitializeRaidResources @ 0x1C0058B7C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x1C004F864 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     McTemplateK0zqqqqi_EtwWriteTransfer @ 0x1C0058420 (McTemplateK0zqqqqi_EtwWriteTransfer.c)
 *     RaFreeRaidResources @ 0x1C00589F8 (RaFreeRaidResources.c)
 *     StorGetActiveGatewayCountRequired @ 0x1C0059298 (StorGetActiveGatewayCountRequired.c)
 *     StorGetPreferredNodeNumber @ 0x1C0059354 (StorGetPreferredNodeNumber.c)
 */

__int64 __fastcall RaInitializeRaidResources(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, char a5, int a6)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v9; // rdx
  char v12; // si
  unsigned int v13; // ecx
  __int64 v14; // r15
  unsigned int v15; // r8d
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  unsigned int ActiveGatewayCountRequired; // eax
  __int64 v19; // r8
  unsigned int v20; // ett
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdx
  ULONG MaximumProcessorCount; // ebx
  unsigned int v25; // ecx
  __int64 Pool; // rax
  unsigned int v27; // esi
  PVOID *v28; // rcx
  unsigned int v29; // esi
  __int64 v30; // rdx
  int PreferredNodeNumber; // r14d
  struct _SLIST_ENTRY *v32; // rax
  struct _SLIST_ENTRY *v33; // rbx
  unsigned int v34; // ecx
  union _SLIST_HEADER *v35; // rcx
  char *v36; // rcx
  __int64 result; // rax

  v6 = a1 + 64;
  v7 = 16;
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = a3;
  if ( a2 <= 0x10 )
    v7 = a2;
  *(_QWORD *)(a1 + 152) = a4;
  v9 = PhysicalMemorySize;
  *(_DWORD *)(a1 + 140) = v7;
  *(_DWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 184) = a5 == 0;
  v12 = a3;
  v13 = 256;
  *(_DWORD *)(v6 + 116) = a6;
  *(_DWORD *)(v6 + 124) = 0;
  v14 = *(_QWORD *)(a4 + 64);
  if ( !v9 )
    goto LABEL_15;
  if ( v9 >= 0x40000000 )
  {
    if ( v9 < 0x80000000 )
    {
      v15 = 128;
      goto LABEL_16;
    }
    if ( v9 >= 0x200000000LL )
    {
      v16 = 0x400000000LL;
      v15 = 512;
      if ( v9 < 0x400000000LL )
        goto LABEL_16;
      v13 = *(_DWORD *)(v6 + 80);
      while ( 1 )
      {
        v15 *= 2;
        v16 *= 2LL;
        if ( v15 >= v13 )
          break;
        if ( v16 > 0x800000000000LL || v9 < v16 )
          goto LABEL_16;
      }
    }
LABEL_15:
    v15 = v13;
    goto LABEL_16;
  }
  v15 = 64;
LABEL_16:
  if ( !v9 || (v17 = *(unsigned int *)(v6 + 80), v17 * (unsigned __int64)*(unsigned int *)(v6 + 84) > v9 / 0x2710) )
    LODWORD(v17) = v15;
  ActiveGatewayCountRequired = StorGetActiveGatewayCountRequired(v14, 0LL);
  v19 = ActiveGatewayCountRequired;
  v20 = ActiveGatewayCountRequired + a2 - 1;
  v21 = v20 - v20 % ActiveGatewayCountRequired;
  v23 = (v20 - v20 % ActiveGatewayCountRequired) % ActiveGatewayCountRequired;
  v22 = (v20 - v20 % ActiveGatewayCountRequired) / ActiveGatewayCountRequired;
  if ( (unsigned int)v17 > v22 )
  {
    v21 = *(unsigned int *)(v6 + 76);
    if ( v22 < (unsigned int)v21 )
      v22 = *(_DWORD *)(v6 + 76);
    LODWORD(v17) = v22;
  }
  if ( (unsigned int)v17 > StorPreAllocatedMaxIoResourceCount )
    LODWORD(v17) = StorPreAllocatedMaxIoResourceCount;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zqqqqi_EtwWriteTransfer(
      v21,
      v23,
      v19,
      *(const wchar_t **)(v14 + 48),
      *(_DWORD *)(v14 + 56),
      v17,
      a2,
      v12);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount <= 0x10 )
  {
    *(_DWORD *)(v6 + 64) = 0;
    InitializeSListHead((PSLIST_HEADER)v6);
    v25 = *(_DWORD *)(v6 + 64);
    goto LABEL_35;
  }
  if ( MaximumProcessorCount > 0x40 )
  {
    if ( MaximumProcessorCount <= 0x100 )
    {
      *(_DWORD *)(v6 + 64) = 16;
      v25 = 16;
      goto LABEL_35;
    }
    v25 = 32;
  }
  else
  {
    v25 = 8;
  }
  *(_DWORD *)(v6 + 64) = v25;
LABEL_35:
  if ( *(_DWORD *)(v14 + 840) > 1u )
  {
    *(_DWORD *)(v6 + 64) = 0;
    v25 = 0;
  }
  *(_DWORD *)(v6 + 68) = MaximumProcessorCount;
  if ( v25 )
  {
    Pool = RaidAllocatePool(64LL, 8LL * v25, 1397907794LL, a4);
    *(_QWORD *)v6 = Pool;
    if ( Pool )
    {
      v27 = 0;
      if ( *(_DWORD *)(v6 + 64) )
      {
        while ( 1 )
        {
          *(_QWORD *)(*(_QWORD *)v6 + 8LL * v27) = RaidAllocatePool(72LL, 16LL, 1397907794LL, a4);
          v28 = *(PVOID **)v6;
          if ( !*(_QWORD *)(*(_QWORD *)v6 + 8LL * v27) )
            break;
          InitializeSListHead(*(PSLIST_HEADER *)(*(_QWORD *)v6 + 8LL * v27++));
          if ( v27 >= *(_DWORD *)(v6 + 64) )
            goto LABEL_49;
        }
        if ( v27 < 2 )
        {
          if ( v27 == 1 )
          {
            ExFreePoolWithTag(*v28, 0x53526152u);
            v28 = *(PVOID **)v6;
          }
          ExFreePoolWithTag(v28, 0x53526152u);
          *(_DWORD *)(v6 + 64) = 0;
          InitializeSListHead((PSLIST_HEADER)v6);
        }
        else
        {
          *(_DWORD *)(v6 + 64) = v27;
        }
      }
    }
    else
    {
      *(_DWORD *)(v6 + 64) = 0;
    }
  }
LABEL_49:
  v29 = 0;
  PreferredNodeNumber = StorGetPreferredNodeNumber(a1);
  if ( (_DWORD)v17 )
  {
    while ( 1 )
    {
      v32 = (struct _SLIST_ENTRY *)(*(_BYTE *)(v6 + 120)
                                  ? RaidAllocatePool(64LL, a3, 1397907794LL, a4)
                                  : StorAllocateContiguousIoResourcesWithPreferredNode(
                                      a3,
                                      v30,
                                      v14,
                                      PreferredNodeNumber));
      v33 = v32;
      if ( !v32 )
        break;
      v34 = *(_DWORD *)(v6 + 64);
      if ( v34 )
        v35 = *(union _SLIST_HEADER **)(*(_QWORD *)v6 + 8LL * (v29 % v34));
      else
        v35 = (union _SLIST_HEADER *)v6;
      ExpInterlockedPushEntrySList(v35, v32);
      LODWORD(v33[3].Next) = 523124044;
      *((_DWORD *)&v33[49].Next + 2) = a6;
      if ( a6 )
        v36 = (char *)v33 + a3 - a6;
      else
        v36 = 0LL;
      *((_QWORD *)&v33[50].Next + 1) = v36;
      if ( *(_BYTE *)(v6 + 120) )
        v33[52].Next = 0LL;
      ++v29;
      v33[2].Next = (_SLIST_ENTRY *)a1;
      if ( v29 >= (unsigned int)v17 )
        goto LABEL_65;
    }
    ++*(_DWORD *)(v6 + 96);
  }
LABEL_65:
  if ( v29 >= *(_DWORD *)(v6 + 76) )
  {
    *(_QWORD *)(a1 + 48) = v14;
    result = 0LL;
    *(_DWORD *)(v6 + 72) = v29;
  }
  else
  {
    RaFreeRaidResources(a1, a4, a5);
    return 3221225495LL;
  }
  return result;
}
