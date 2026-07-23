/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x1800E36C0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180001970 (RtlpCommitQueryDebugInfo.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlStringCbCopyW @ 0x18004C27C (RtlStringCbCopyW.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlQueryHeapInformation @ 0x18007D840 (RtlQueryHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlStringCbPrintfW @ 0x1800E4080 (RtlStringCbPrintfW.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  char *DebugInfo; // rax
  char *v3; // r14
  __int64 v5; // rdi
  char *v6; // rax
  char *v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // r15d
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r15
  unsigned int j; // esi
  _WORD *v19; // rcx
  __int64 v20; // r9
  const wchar_t *v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // rdx
  int v24; // ecx
  signed __int32 LockCount; // ebx
  void *LockSemaphore; // r10
  int v27; // eax
  signed __int32 v28[8]; // [rsp+48h] [rbp-118h] BYREF
  int v29; // [rsp+78h] [rbp-E8h]
  unsigned int v30; // [rsp+7Ch] [rbp-E4h]
  unsigned int i; // [rsp+80h] [rbp-E0h]
  char *v32; // [rsp+88h] [rbp-D8h]
  __int64 v33; // [rsp+90h] [rbp-D0h]
  __int64 v34; // [rsp+98h] [rbp-C8h]
  __int64 v35; // [rsp+A0h] [rbp-C0h]
  _QWORD v36[4]; // [rsp+A8h] [rbp-B8h] BYREF
  _QWORD HeapInformation[2]; // [rsp+C8h] [rbp-98h] BYREF
  int v38; // [rsp+D8h] [rbp-88h]
  __int64 (__fastcall *v39)(); // [rsp+E0h] [rbp-80h]
  _QWORD *v40; // [rsp+E8h] [rbp-78h]
  unsigned int v41; // [rsp+170h] [rbp+10h] BYREF
  __int64 v42; // [rsp+180h] [rbp+20h]

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  DebugInfo = RtlpCommitQueryDebugInfo((_QWORD *)a1, 8u);
  v3 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  *(_QWORD *)(a1 + 112) = DebugInfo;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  v29 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpQueryProcessEnumHeapsRoutine, a1, 2);
  if ( v29 < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 64) & 8) == 0 )
  {
LABEL_34:
    if ( v29 >= 0 )
    {
      v24 = *(_DWORD *)(a1 + 64);
      if ( (v24 & 0x210) != 0 )
      {
        HeapInformation[0] = -1LL;
        HeapInformation[1] = *(_QWORD *)(a1 + 128);
        v39 = RtlpWalkCallbackRoutine;
        v40 = v36;
        v38 = (v24 & 0x10) != 0 ? 5 : 3;
        v36[0] = a1;
        v36[1] = v3;
        v36[2] = 0LL;
        v36[3] = v3 + 8;
        v29 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
      }
    }
    goto LABEL_37;
  }
  v5 = RtlpGlobalTagHeap;
  v34 = RtlpGlobalTagHeap;
  if ( !RtlpGlobalTagHeap || !*(_QWORD *)(RtlpGlobalTagHeap + 232) )
    goto LABEL_10;
  v6 = RtlpCommitQueryDebugInfo((_QWORD *)a1, 0x58u);
  v7 = v6;
  v33 = (__int64)v6;
  if ( v6 )
  {
    memset(v6, 0, 0x58uLL);
    *(_QWORD *)v7 = v5;
    *((_DWORD *)v7 + 2) = *(_DWORD *)(v5 + 112);
    *((_WORD *)v7 + 6) = 16;
    ++*(_DWORD *)v3;
LABEL_10:
    v8 = 0;
    for ( i = 0; ; i = v8 )
    {
      if ( v8 >= *(_DWORD *)v3 )
        goto LABEL_34;
      v9 = (__int64)&v3[88 * v8 + 8];
      v33 = v9;
      v10 = *(_QWORD *)(a1 + 128);
      if ( !v10 || v10 == *(_QWORD *)v9 )
      {
        v11 = *(_QWORD *)v9;
        v42 = v11;
        v34 = v11;
        v12 = *(unsigned __int16 *)(v11 + 224);
        *(_DWORD *)(v9 + 32) = v12;
        v13 = 72 * v12;
        if ( *(_QWORD *)(v11 + 328) )
        {
          *(_DWORD *)(v9 + 32) = v12 + 129;
          v13 += 9288;
        }
        v14 = RtlpCommitQueryDebugInfo((_QWORD *)a1, v13);
        v15 = v14;
        v32 = v14;
        if ( !v14 )
        {
          v29 = -1073741801;
          goto LABEL_37;
        }
        memset(v14, 0, v13);
        *(_QWORD *)(v9 + 72) = v15;
        v16 = v42;
        v17 = *(_QWORD *)(v42 + 328);
        v35 = v17;
        if ( v17 )
        {
          *(_DWORD *)(v9 + 40) = 129;
          *(_DWORD *)(v9 + 44) = 16;
          for ( j = 0; ; ++j )
          {
            v30 = j;
            if ( j > 0x80 )
            {
              v16 = v42;
              goto LABEL_29;
            }
            *(_DWORD *)v15 = *(_DWORD *)v17;
            *((_DWORD *)v15 + 1) = *(_DWORD *)(v17 + 4);
            *((_QWORD *)v15 + 1) = 16LL * *(_QWORD *)(v17 + 8);
            *((_WORD *)v15 + 8) = j | 0x8000;
            v19 = v15 + 20;
            if ( !j )
              break;
            if ( j < 0x80 )
            {
              v20 = 16 * j;
              v21 = L"Objects=%4u";
              goto LABEL_25;
            }
            RtlStringCbCopyW(v19, 0x30uLL, (__int64)L"VirtualAlloc");
LABEL_27:
            v15 += 72;
            v32 = v15;
            v17 += 16LL;
            v35 = v17;
          }
          v20 = 2048LL;
          v21 = L"Objects>%4u";
LABEL_25:
          RtlStringCbPrintfW(v19, 48LL, v21, v20);
          goto LABEL_27;
        }
LABEL_29:
        memmove(v15, *(const void **)(v16 + 232), 72LL * *(unsigned __int16 *)(v16 + 224));
        v22 = 0;
        v30 = 0;
        v23 = v42;
        while ( v22 < *(unsigned __int16 *)(v23 + 224) )
        {
          *((_QWORD *)v15 + 1) *= 16LL;
          v15 += 72;
          v32 = v15;
          v30 = ++v22;
        }
      }
      ++v8;
    }
  }
  v29 = -1073741801;
LABEL_37:
  if ( !--RtlpProcessHeapsListLock.RecursionCount )
  {
    RtlpProcessHeapsListLock.OwningThread = 0LL;
    LockCount = _InterlockedCompareExchange(&RtlpProcessHeapsListLock.LockCount, -1, -2);
    if ( LockCount != -2 )
    {
      if ( (RtlpProcessHeapsListLock.LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
      LockSemaphore = RtlpProcessHeapsListLock.LockSemaphore;
      if ( !RtlpProcessHeapsListLock.LockSemaphore )
        LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)&RtlpProcessHeapsListLock);
      v41 = 0;
      while ( LockCount != _InterlockedCompareExchange(
                             &RtlpProcessHeapsListLock.LockCount,
                             (LockCount & 2 | 1) + LockCount,
                             LockCount) )
      {
        RtlBackoff(&v41);
        _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
        LockCount = RtlpProcessHeapsListLock.LockCount;
      }
      if ( (LockCount & 2) != 0 )
      {
        if ( LockSemaphore == (void *)-1LL )
        {
          _InterlockedOr(v28, 0);
          RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
          v27 = 0;
        }
        else
        {
          v27 = ZwSetEvent(LockSemaphore, 0LL);
        }
        if ( v27 < 0 )
          RtlRaiseStatus(v27);
      }
    }
  }
  return (unsigned int)v29;
}
