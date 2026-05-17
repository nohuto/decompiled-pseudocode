/*
 * XREFs of RtlQueryTagHeap @ 0x1800FDCE0
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x18010573C (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x180124170 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x18010573C (RtlDebugQueryTagHeap.c)
 */

void *__fastcall RtlQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, _DWORD *a5)
{
  int v7; // ecx
  int v8; // edx
  void *TagHeap; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rbx
  _BYTE *v19; // rdi
  signed __int32 v20; // esi
  HANDLE DeferredCriticalSectionEvent; // r10
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  signed __int32 v26[8]; // [rsp+0h] [rbp-78h] BYREF
  char v27; // [rsp+30h] [rbp-48h]
  void *v28; // [rsp+40h] [rbp-38h]
  __int64 v29; // [rsp+48h] [rbp-30h]
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  int v31; // [rsp+88h] [rbp+10h]
  unsigned __int16 v32; // [rsp+90h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v30 = a1;
  v27 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 116);
  if ( (v7 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  v28 = 0LL;
  v8 = v7 | v31;
  v31 = v8;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
  {
    TagHeap = (void *)RtlDebugQueryTagHeap(a1, v8, v32, a4, (__int64)a5);
  }
  else
  {
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v27 = 1;
    }
    if ( v32 < *(_WORD *)(a1 + 224) && (v10 = *(_QWORD *)(a1 + 232)) != 0 )
    {
      v11 = v10 + 72LL * v32;
      v29 = v11;
      v12 = a5;
      if ( a5 )
      {
        *a5 = *(_DWORD *)v11;
        v12[1] = *(_DWORD *)(v11 + 4);
        *((_QWORD *)v12 + 1) = 16LL * *(_QWORD *)(v11 + 8);
      }
      if ( a4 )
      {
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      TagHeap = (void *)(v11 + 20);
    }
    else
    {
      if ( (v32 & 0x8000u) == 0 )
        goto LABEL_24;
      v13 = v32 ^ 0x8000;
      v32 = v13;
      if ( v13 >= 0x81u )
        goto LABEL_24;
      v14 = *(_QWORD *)(a1 + 328);
      if ( !v14 )
        goto LABEL_24;
      v15 = v14 + 16LL * v13;
      v29 = v15;
      v16 = a5;
      if ( a5 )
      {
        *a5 = *(_DWORD *)v15;
        v16[1] = *(_DWORD *)(v15 + 4);
        *((_QWORD *)v16 + 1) = 16LL * *(_QWORD *)(v15 + 8);
      }
      if ( a4 )
      {
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)(v15 + 8) = 0LL;
      }
      TagHeap = &unk_180132BF4;
    }
  }
  v28 = TagHeap;
LABEL_24:
  if ( v27 )
  {
    v17 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v17 + 12))-- == 1 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
      v19 = (_BYTE *)(v17 + 8);
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), -1, -2);
      if ( v20 != -2 )
      {
        if ( (*v19 & 1) != 0 )
          RtlpNotOwnerCriticalSection((const void **)v17);
        DeferredCriticalSectionEvent = *(HANDLE *)(v17 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v17);
        LODWORD(v30) = 0;
        while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)v19, (v20 & 2 | 1) + v20, v20) )
        {
          RtlBackoff((unsigned int *)&v30);
          _m_prefetchw(v19);
          v20 = *(_DWORD *)v19;
        }
        if ( (v20 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v26, 0);
            RtlpWakeByAddress(v17 + 8, 0);
            v22 = 0;
          }
          else
          {
            v22 = ZwSetEvent();
          }
          if ( v22 < 0 )
            RtlRaiseStatus(v22, v23, v24);
        }
      }
    }
  }
  return v28;
}
