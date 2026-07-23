/*
 * XREFs of RtlSizeHeap @ 0x18003ABB0
 * Callers:
 *     RtlSetEnvironmentVar @ 0x180014E20 (RtlSetEnvironmentVar.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlSetCurrentEnvironment @ 0x18008DF50 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x1800D9390 (RtlSetEnvironmentStrings.c)
 *     RtlpScanHeapAllocBlocks @ 0x180103938 (RtlpScanHeapAllocBlocks.c)
 *     RtlDebugSizeHeap @ 0x180106428 (RtlDebugSizeHeap.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18010AE34 (RtlpHeapTrkDumpOutstandingAllocs.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x18003AE30 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18003B10C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x180076254 (RtlpProbeUserBufferSafe.c)
 *     RtlDebugSizeHeap @ 0x180106428 (RtlDebugSizeHeap.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbp
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // rax
  SIZE_T v11; // rbx
  ULONG v13; // ebx
  int v14; // ecx
  char v15; // al
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int16 v18; // r8
  char v19; // cl
  unsigned __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // edx
  unsigned __int16 v23; // ax
  int v24; // eax
  int v25; // eax
  unsigned __int16 v26; // ax
  struct _TEB *v27; // rbx
  int v28; // [rsp+38h] [rbp-10h]
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  v4 = (unsigned __int64)BaseAddress;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v4 )
      v7 = *(_QWORD *)(v4 - 16);
    else
      v7 = 0LL;
    v8 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v10 = RtlpHpSizeHeap(HeapHandle, v9, v8);
    v11 = v10;
    if ( v10 != -1 )
      return v10 - v7;
    RtlpLogHeapFailure(9, (_DWORD)HeapHandle, v4, 0, 0LL, 0LL);
    return v11;
  }
  v13 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return RtlDebugSizeHeap(HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v4 = RtlpProbeUserBufferSafe(HeapHandle, v4);
  }
  else
  {
    if ( (v4 & 0xF) != 0 )
    {
      v14 = 9;
LABEL_13:
      RtlpLogHeapFailure(v14, (_DWORD)HeapHandle, v4, 0, 0LL, 0LL);
      v4 = 0LL;
      goto LABEL_14;
    }
    v4 -= 16LL;
    _m_prefetchw((const void *)v4);
    if ( *(_BYTE *)(v4 + 15) == 5 )
      v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
    if ( (*(_BYTE *)(v4 + 15) & 0x3F) == 0 )
    {
      v14 = 8;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !v4 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v27 = NtCurrentTeb();
    v27->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return -1LL;
  }
  v15 = *(_BYTE *)(v4 + 15);
  if ( v15 != 4 )
  {
    if ( v15 >= 0 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v21 = *(_DWORD *)(v4 + 8);
        LOWORD(v28) = v21;
        if ( (v21 & *((_DWORD *)HeapHandle + 31)) != 0 )
          v28 = *((_DWORD *)HeapHandle + 34) ^ v21;
        v18 = v28;
        v16 = v4 >> 4;
      }
      else
      {
        v18 = *(_WORD *)(v4 + 8);
        v16 = v4 >> 4;
      }
    }
    else
    {
      v16 = v4 >> 4;
      if ( *(_WORD *)(v4 + 8) ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ RtlpLFHKey ^ (v4 >> 4)) )
        v17 = 0LL;
      else
        v17 = *(_QWORD *)(v4
                        - ((unsigned __int64)(*(_DWORD *)(v4 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v4 >> 4)) >> 12));
      v18 = *(_WORD *)(v17 + 36);
    }
    v19 = *(_BYTE *)(v4 + 15);
    if ( v19 == 5 )
    {
      v20 = *((unsigned __int16 *)HeapHandle + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v4 + 12);
    }
    else if ( (v19 & 0x40) != 0 )
    {
      v20 = *(unsigned __int16 *)(v4 + 16LL * (v19 & 0x3F) + 12);
    }
    else if ( (v19 & 0x3F) == 0x3F )
    {
      if ( v19 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v24 = *(_DWORD *)(v4 + 8);
          LOWORD(v29) = v24;
          if ( (v24 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v29 = *((_DWORD *)HeapHandle + 34) ^ v24;
          v20 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)v29);
          return 16LL * v18 - v20;
        }
        v23 = *(_WORD *)(v4 + 8);
      }
      else
      {
        v22 = RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v4 + 8) ^ v16;
        if ( !(_WORD)v22 )
          v3 = *(_QWORD *)(v4 - ((unsigned __int64)v22 >> 12));
        v23 = *(_WORD *)(v3 + 36);
      }
      v20 = *(_QWORD *)(v4 + 16LL * v23);
    }
    else
    {
      v20 = v19 & 0x3F;
    }
    return 16LL * v18 - v20;
  }
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    v25 = *(_DWORD *)(v4 + 8);
    LOWORD(v30) = v25;
    if ( (v25 & *((_DWORD *)HeapHandle + 31)) != 0 )
      v30 = *((_DWORD *)HeapHandle + 34) ^ v25;
    v26 = v30;
  }
  else
  {
    v26 = *(_WORD *)(v4 + 8);
  }
  return *(_QWORD *)(v4 - 16) - v26;
}
