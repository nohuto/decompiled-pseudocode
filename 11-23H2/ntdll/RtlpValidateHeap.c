/*
 * XREFs of RtlpValidateHeap @ 0x180107E20
 * Callers:
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180105D3C (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x180105FDC (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180106534 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106858 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801071D8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180107838 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180107AE8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180046B30 (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     RtlpCheckBusyBlockTail @ 0x180103A88 (RtlpCheckBusyBlockTail.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180108404 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapSegment @ 0x1801085C0 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpValidateHeap(__int64 a1, char a2)
{
  unsigned __int16 v3; // r15
  char *v4; // r13
  __int64 v6; // r8
  int v7; // r12d
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int16 v19; // di
  __int64 v20; // rdi
  unsigned __int16 v21; // si
  char *v22; // rbx
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v24 = a1;
  v3 = 0;
  v4 = 0LL;
  BaseAddress = 0LL;
  if ( !(unsigned __int8)RtlpValidateHeapHeaders((void *)a1) )
    goto LABEL_37;
  if ( a2 || (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
  {
    v7 = 0;
    v8 = *(_QWORD **)(a1 + 336);
    while ( (_QWORD *)(a1 + 336) != v8 )
    {
      v9 = (__int64)(v8 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v8 - 2, v6);
      }
      v8 = (_QWORD *)*v8;
      RegionSize = *(unsigned __int16 *)(v9 + 8);
      v24 = v9;
      if ( (*(_BYTE *)(v9 + 10) & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v9);
LABEL_35:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
          *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_37;
      }
      if ( *(_WORD *)(v9 + 8) < v3 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v9);
        goto LABEL_35;
      }
      v3 = *(_WORD *)(v9 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v9 + 11) = v3 ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
        *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      ++v7;
    }
    RegionSize = 8LL * *(unsigned __int16 *)(a1 + 224) + 1040;
    if ( RtlpValidateHeapTagsEnable
      && *(_QWORD *)(a1 + 328)
      && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
    {
      v4 = (char *)BaseAddress + 1032;
    }
    v10 = 129LL;
    v11 = *(__int64 **)(a1 + 272);
    if ( (__int64 *)(a1 + 272) != v11 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)v11 + 14) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)v11 + 59) != (*((_BYTE *)v11 + 56) ^ (unsigned __int8)(*((_BYTE *)v11 + 57) ^ *((_BYTE *)v11 + 58))) )
          {
            RtlpAnalyzeHeapFailure(a1, v11 + 6, v6);
            v10 = 129LL;
          }
        }
        if ( v4 )
        {
          v12 = *((_WORD *)v11 + 9);
          if ( v12 )
          {
            if ( v12 >= 0 )
            {
              if ( (v12 & 0x800) == 0 && (unsigned __int16)v12 < *(_WORD *)(a1 + 224) )
                *(_QWORD *)&v4[8 * *((unsigned __int16 *)v11 + 9)] += (unsigned __int64)v11[4] >> 4;
            }
            else
            {
              v13 = v12 & 0x7FFF;
              if ( v13 < 0x81u )
              {
                v10 = v13;
                *((_QWORD *)BaseAddress + v13) += (unsigned __int64)v11[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)v11 + 58) & 4) != 0 && !RtlpCheckBusyBlockTail(a1, (unsigned __int64)(v11 + 6)) )
          break;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v11 + 59) = *((_BYTE *)v11 + 56) ^ *((_BYTE *)v11 + 57) ^ *((_BYTE *)v11 + 58);
          *((_DWORD *)v11 + 14) ^= *(_DWORD *)(a1 + 136);
        }
        v11 = (__int64 *)*v11;
        if ( (__int64 *)(a1 + 272) == v11 )
          goto LABEL_51;
        v10 = 129LL;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v11 + 59) = *((_BYTE *)v11 + 56) ^ *((_BYTE *)v11 + 57) ^ *((_BYTE *)v11 + 58);
        *((_DWORD *)v11 + 14) ^= *(_DWORD *)(a1 + 136);
      }
      return 0;
    }
LABEL_51:
    v16 = *(_QWORD **)(a1 + 288);
    v17 = 0LL;
    v23 = 0LL;
    if ( v16 == (_QWORD *)(a1 + 288) )
    {
LABEL_55:
      if ( v7 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v10);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v7);
      }
      else if ( *(_QWORD *)(a1 + 192) == v17 )
      {
        if ( !BaseAddress )
          return 1;
        v18 = *(_QWORD *)(a1 + 328);
        if ( v18 )
        {
          v19 = 1;
          while ( 1 )
          {
            v18 += 16LL;
            v17 = *(_QWORD *)(v18 + 8);
            if ( *((_QWORD *)BaseAddress + v19) != v17 )
              break;
            if ( ++v19 >= 0x81u )
              goto LABEL_70;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 129LL);
          else
            DbgPrint("HEAP: ", 1LL, 129LL);
          DbgPrint(
            "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
            v19,
            *(_QWORD *)(v18 + 8),
            *((_QWORD *)BaseAddress + v19),
            (char *)BaseAddress + 8 * v19);
        }
        else
        {
LABEL_70:
          v20 = *(_QWORD *)(a1 + 232);
          if ( !v20 || (v17 = *(unsigned __int16 *)(a1 + 224), v21 = 1, (unsigned __int16)v17 <= 1u) )
          {
LABEL_74:
            RegionSize = 0LL;
            RtlpSecMemFreeVirtualMemory(v17, &BaseAddress, &RegionSize, 0x8000u);
            return 1;
          }
          while ( 1 )
          {
            v20 += 72LL;
            v22 = &v4[8 * v21];
            if ( *(_QWORD *)v22 != *(_QWORD *)(v20 + 8) )
              break;
            if ( ++v21 >= (unsigned __int16)v17 )
              goto LABEL_74;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ", 1LL);
          DbgPrint(
            "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
            v21,
            v20 + 20,
            *(_QWORD *)(v20 + 8),
            *(_QWORD *)v22,
            &v4[8 * v21]);
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v10);
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v23,
          *(_QWORD *)(a1 + 192));
      }
    }
    else
    {
      while ( (unsigned __int8)RtlpValidateHeapSegment(
                                 a1,
                                 (__int64)&v23,
                                 (__int64)&v24,
                                 (__int64)v4,
                                 (__int64)BaseAddress) )
      {
        v16 = (_QWORD *)*v16;
        if ( v16 == (_QWORD *)(a1 + 288) )
        {
          v17 = v23;
          goto LABEL_55;
        }
      }
    }
LABEL_37:
    RtlpBreakPointHeap();
    if ( BaseAddress )
    {
      RegionSize = 0LL;
      RtlpSecMemFreeVirtualMemory(v14, &BaseAddress, &RegionSize, 0x8000u);
    }
    return 0;
  }
  return 1;
}
