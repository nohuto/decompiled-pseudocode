/*
 * XREFs of RtlQueryTagHeap @ 0x1800FDA10
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x180105448 (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x180125BB0 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x180105448 (RtlDebugQueryTagHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

PWSTR __cdecl RtlQueryTagHeap(
        PVOID HeapHandle,
        ULONG Flags,
        USHORT TagIndex,
        BOOLEAN ResetCounters,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  int v7; // ecx
  int v8; // edx
  const WCHAR *TagHeap; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  PRTL_HEAP_TAG_INFO v12; // r8
  USHORT v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PRTL_HEAP_TAG_INFO v16; // r8
  _RTL_CRITICAL_SECTION *v17; // rbx
  int *p_LockCount; // rdi
  signed __int32 v20; // esi
  HANDLE LockSemaphore; // r10
  int v22; // eax
  signed __int32 v24[12]; // [rsp+0h] [rbp-78h] BYREF
  int v25; // [rsp+30h] [rbp-48h]
  WCHAR *v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-30h]
  PVOID v28; // [rsp+80h] [rbp+8h] BYREF
  ULONG v29; // [rsp+88h] [rbp+10h]
  USHORT v30; // [rsp+90h] [rbp+18h]

  v30 = TagIndex;
  v29 = Flags;
  v28 = HeapHandle;
  LOBYTE(v25) = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0LL;
  v7 = *((_DWORD *)HeapHandle + 29);
  if ( (v7 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  v26 = 0LL;
  v8 = v7 | v29;
  v29 = v8;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
  {
    TagHeap = (const WCHAR *)RtlDebugQueryTagHeap(HeapHandle, TagInfo);
  }
  else
  {
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      LOBYTE(v25) = 1;
    }
    if ( v30 < *((_WORD *)HeapHandle + 112) && (v10 = *((_QWORD *)HeapHandle + 29)) != 0 )
    {
      v11 = v10 + 72LL * v30;
      v27 = v11;
      v12 = TagInfo;
      if ( TagInfo )
      {
        TagInfo->NumberOfAllocations = *(_DWORD *)v11;
        v12->NumberOfFrees = *(_DWORD *)(v11 + 4);
        v12->BytesAllocated = 16LL * *(_QWORD *)(v11 + 8);
      }
      if ( ResetCounters )
      {
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      TagHeap = (const WCHAR *)(v11 + 20);
    }
    else
    {
      if ( (v30 & 0x8000u) == 0 )
        goto LABEL_24;
      v13 = v30 ^ 0x8000;
      v30 = v13;
      if ( v13 >= 0x81u )
        goto LABEL_24;
      v14 = *((_QWORD *)HeapHandle + 41);
      if ( !v14 )
        goto LABEL_24;
      v15 = v14 + 16LL * v13;
      v27 = v15;
      v16 = TagInfo;
      if ( TagInfo )
      {
        TagInfo->NumberOfAllocations = *(_DWORD *)v15;
        v16->NumberOfFrees = *(_DWORD *)(v15 + 4);
        v16->BytesAllocated = 16LL * *(_QWORD *)(v15 + 8);
      }
      if ( ResetCounters )
      {
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)(v15 + 8) = 0LL;
      }
      TagHeap = &word_180135D3C;
    }
  }
  v26 = (WCHAR *)TagHeap;
LABEL_24:
  if ( (_BYTE)v25 )
  {
    v17 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
    if ( v17->RecursionCount-- == 1 )
    {
      v17->OwningThread = 0LL;
      p_LockCount = &v17->LockCount;
      v20 = _InterlockedCompareExchange(&v17->LockCount, -1, -2);
      if ( v20 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v17);
        LockSemaphore = v17->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v17);
        LODWORD(v28) = 0;
        while ( v20 != _InterlockedCompareExchange(p_LockCount, (v20 & 2 | 1) + v20, v20) )
        {
          RtlBackoff((unsigned int *)&v28);
          _m_prefetchw(p_LockCount);
          v20 = *p_LockCount;
        }
        if ( (v20 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v24, 0);
            RtlpWakeByAddress((unsigned __int64)&v17->LockCount, 0);
            v22 = 0;
          }
          else
          {
            v22 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v22 < 0 )
            RtlRaiseStatus(v22);
        }
      }
    }
  }
  return v26;
}
