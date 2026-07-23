/*
 * XREFs of RtlSizeHeap @ 0x1800270A0
 * Callers:
 *     RtlSetEnvironmentVar @ 0x18000D0F0 (RtlSetEnvironmentVar.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlSetEnvironmentStrings @ 0x18008A170 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x180093280 (RtlSetCurrentEnvironment.c)
 *     RtlpScanHeapAllocBlocks @ 0x180103C4C (RtlpScanHeapAllocBlocks.c)
 *     RtlDebugSizeHeap @ 0x1801066D4 (RtlDebugSizeHeap.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18010AC5C (RtlpHeapTrkDumpOutstandingAllocs.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpHpSizeHeap @ 0x180027310 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180027604 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpProbeUserBufferSafe @ 0x180078ADC (RtlpProbeUserBufferSafe.c)
 *     RtlDebugSizeHeap @ 0x1801066D4 (RtlDebugSizeHeap.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
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
  ULONG v13; // edx
  int v14; // ecx
  char v15; // al
  __int64 v16; // rax
  unsigned __int16 v17; // r8
  char v18; // cl
  unsigned __int64 v19; // rdx
  int v20; // eax
  unsigned __int16 v21; // ax
  int v22; // eax
  int v23; // eax
  unsigned __int16 v24; // ax
  struct _TEB *v25; // rbx
  int v26; // [rsp+38h] [rbp-10h]
  int v27; // [rsp+38h] [rbp-10h]
  int v28; // [rsp+38h] [rbp-10h]

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
  v13 = Flags | *((_DWORD *)HeapHandle + 29);
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
    v25 = NtCurrentTeb();
    v25->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return -1LL;
  }
  v15 = *(_BYTE *)(v4 + 15);
  if ( v15 != 4 )
  {
    if ( v15 >= 0 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v20 = *(_DWORD *)(v4 + 8);
        LOWORD(v26) = v20;
        if ( (v20 & *((_DWORD *)HeapHandle + 31)) != 0 )
          v26 = *((_DWORD *)HeapHandle + 34) ^ v20;
        v17 = v26;
      }
      else
      {
        v17 = *(_WORD *)(v4 + 8);
      }
    }
    else
    {
      if ( *(_WORD *)(v4 + 8) ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ RtlpLFHKey ^ (v4 >> 4)) )
        v16 = 0LL;
      else
        v16 = *(_QWORD *)(v4
                        - ((unsigned __int64)(*(_DWORD *)(v4 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v4 >> 4)) >> 12));
      v17 = *(_WORD *)(v16 + 36);
    }
    v18 = *(_BYTE *)(v4 + 15);
    if ( v18 == 5 )
    {
      v19 = *((unsigned __int16 *)HeapHandle + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v4 + 12);
    }
    else if ( (v18 & 0x40) != 0 )
    {
      v19 = *(unsigned __int16 *)(v4 + 16LL * (v18 & 0x3F) + 12);
    }
    else if ( (v18 & 0x3F) == 0x3F )
    {
      if ( v18 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v22 = *(_DWORD *)(v4 + 8);
          LOWORD(v27) = v22;
          if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v27 = *((_DWORD *)HeapHandle + 34) ^ v22;
          v19 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)v27);
          return 16LL * v17 - v19;
        }
        v21 = *(_WORD *)(v4 + 8);
      }
      else
      {
        if ( !(*(_WORD *)(v4 + 8) ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ RtlpLFHKey ^ (v4 >> 4))) )
          v3 = *(_QWORD *)(v4
                         - ((unsigned __int64)(*(_DWORD *)(v4 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v4 >> 4)) >> 12));
        v21 = *(_WORD *)(v3 + 36);
      }
      v19 = *(_QWORD *)(v4 + 16LL * v21);
    }
    else
    {
      v19 = v18 & 0x3F;
    }
    return 16LL * v17 - v19;
  }
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    v23 = *(_DWORD *)(v4 + 8);
    LOWORD(v28) = v23;
    if ( (v23 & *((_DWORD *)HeapHandle + 31)) != 0 )
      v28 = *((_DWORD *)HeapHandle + 34) ^ v23;
    v24 = v28;
  }
  else
  {
    v24 = *(_WORD *)(v4 + 8);
  }
  return *(_QWORD *)(v4 - 16) - v24;
}
