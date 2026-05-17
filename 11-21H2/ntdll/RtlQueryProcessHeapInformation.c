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
  signed __int32 v25; // ebx
  HANDLE DeferredCriticalSectionEvent; // r10
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  signed __int32 v30[8]; // [rsp+48h] [rbp-118h] BYREF
  int HeapInformation; // [rsp+78h] [rbp-E8h]
  unsigned int v32; // [rsp+7Ch] [rbp-E4h]
  unsigned int i; // [rsp+80h] [rbp-E0h]
  char *v34; // [rsp+88h] [rbp-D8h]
  __int64 v35; // [rsp+90h] [rbp-D0h]
  __int64 v36; // [rsp+98h] [rbp-C8h]
  __int64 v37; // [rsp+A0h] [rbp-C0h]
  _QWORD v38[4]; // [rsp+A8h] [rbp-B8h] BYREF
  _QWORD v39[2]; // [rsp+C8h] [rbp-98h] BYREF
  int v40; // [rsp+D8h] [rbp-88h]
  __int64 (__fastcall *v41)(); // [rsp+E0h] [rbp-80h]
  _QWORD *v42; // [rsp+E8h] [rbp-78h]
  unsigned int v43; // [rsp+170h] [rbp+10h] BYREF
  __int64 v44; // [rsp+180h] [rbp+20h]

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  DebugInfo = RtlpCommitQueryDebugInfo((_QWORD *)a1, 8u);
  v3 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  *(_QWORD *)(a1 + 112) = DebugInfo;
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  HeapInformation = RtlpEnumProcessHeaps(
                      (__int64 (__fastcall *)(void *, __int64))RtlpQueryProcessEnumHeapsRoutine,
                      a1,
                      2);
  if ( HeapInformation < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 64) & 8) == 0 )
  {
LABEL_34:
    if ( HeapInformation >= 0 )
    {
      v24 = *(_DWORD *)(a1 + 64);
      if ( (v24 & 0x210) != 0 )
      {
        v39[0] = -1LL;
        v39[1] = *(_QWORD *)(a1 + 128);
        v41 = RtlpWalkCallbackRoutine;
        v42 = v38;
        v40 = (v24 & 0x10) != 0 ? 5 : 3;
        v38[0] = a1;
        v38[1] = v3;
        v38[2] = 0LL;
        v38[3] = v3 + 8;
        HeapInformation = RtlQueryHeapInformation(0LL, 2, v39, 0x58uLL, 0LL);
      }
    }
    goto LABEL_37;
  }
  v5 = RtlpGlobalTagHeap;
  v36 = RtlpGlobalTagHeap;
  if ( !RtlpGlobalTagHeap || !*(_QWORD *)(RtlpGlobalTagHeap + 232) )
    goto LABEL_10;
  v6 = RtlpCommitQueryDebugInfo((_QWORD *)a1, 0x58u);
  v7 = v6;
  v35 = (__int64)v6;
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
      v35 = v9;
      v10 = *(_QWORD *)(a1 + 128);
      if ( !v10 || v10 == *(_QWORD *)v9 )
      {
        v11 = *(_QWORD *)v9;
        v44 = v11;
        v36 = v11;
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
        v34 = v14;
        if ( !v14 )
        {
          HeapInformation = -1073741801;
          goto LABEL_37;
        }
        memset(v14, 0, v13);
        *(_QWORD *)(v9 + 72) = v15;
        v16 = v44;
        v17 = *(_QWORD *)(v44 + 328);
        v37 = v17;
        if ( v17 )
        {
          *(_DWORD *)(v9 + 40) = 129;
          *(_DWORD *)(v9 + 44) = 16;
          for ( j = 0; ; ++j )
          {
            v32 = j;
            if ( j > 0x80 )
            {
              v16 = v44;
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
            v34 = v15;
            v17 += 16LL;
            v37 = v17;
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
        v32 = 0;
        v23 = v44;
        while ( v22 < *(unsigned __int16 *)(v23 + 224) )
        {
          *((_QWORD *)v15 + 1) *= 16LL;
          v15 += 72;
          v34 = v15;
          v32 = ++v22;
        }
      }
      ++v8;
    }
  }
  HeapInformation = -1073741801;
LABEL_37:
  if ( !--dword_180178D4C )
  {
    qword_180178D50 = 0LL;
    v25 = _InterlockedCompareExchange(&dword_180178D48, -1, -2);
    if ( v25 != -2 )
    {
      if ( (dword_180178D48 & 1) != 0 )
        RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
      DeferredCriticalSectionEvent = (HANDLE)qword_180178D58;
      if ( !qword_180178D58 )
        DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent((__int64)&RtlpProcessHeapsListLock);
      v43 = 0;
      while ( v25 != _InterlockedCompareExchange(&dword_180178D48, (v25 & 2 | 1) + v25, v25) )
      {
        RtlBackoff(&v43);
        _m_prefetchw(&dword_180178D48);
        v25 = dword_180178D48;
      }
      if ( (v25 & 2) != 0 )
      {
        if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
        {
          _InterlockedOr(v30, 0);
          RtlpWakeByAddress((unsigned __int64)&dword_180178D48, 0);
          v27 = 0;
        }
        else
        {
          v27 = ZwSetEvent();
        }
        if ( v27 < 0 )
          RtlRaiseStatus(v27, v28, v29);
      }
    }
  }
  return (unsigned int)HeapInformation;
}
