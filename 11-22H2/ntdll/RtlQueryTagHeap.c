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

void *__fastcall RtlQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, _DWORD *a5)
{
  int v7; // ecx
  int v8; // edx
  void *TagHeap; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  _DWORD *v12; // r8
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // r8
  __int64 v17; // rbx
  _BYTE *v19; // rdi
  signed __int32 v20; // esi
  HANDLE DeferredCriticalSectionEvent; // r10
  int v22; // eax
  signed __int32 v24[12]; // [rsp+0h] [rbp-78h] BYREF
  int v25; // [rsp+30h] [rbp-48h]
  void *v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-30h]
  __int64 v28; // [rsp+80h] [rbp+8h] BYREF
  int v29; // [rsp+88h] [rbp+10h]
  unsigned __int16 v30; // [rsp+90h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v28 = a1;
  LOBYTE(v25) = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 116);
  if ( (v7 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  v26 = 0LL;
  v8 = v7 | v29;
  v29 = v8;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
  {
    TagHeap = (void *)RtlDebugQueryTagHeap(a1, v8, v30, a4, (__int64)a5);
  }
  else
  {
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      LOBYTE(v25) = 1;
    }
    if ( v30 < *(_WORD *)(a1 + 224) && (v10 = *(_QWORD *)(a1 + 232)) != 0 )
    {
      v11 = v10 + 72LL * v30;
      v27 = v11;
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
      if ( (v30 & 0x8000u) == 0 )
        goto LABEL_24;
      v13 = v30 ^ 0x8000;
      v30 = v13;
      if ( v13 >= 0x81u )
        goto LABEL_24;
      v14 = *(_QWORD *)(a1 + 328);
      if ( !v14 )
        goto LABEL_24;
      v15 = v14 + 16LL * v13;
      v27 = v15;
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
      TagHeap = &unk_180135D3C;
    }
  }
  v26 = TagHeap;
LABEL_24:
  if ( (_BYTE)v25 )
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
        LODWORD(v28) = 0;
        while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)v19, (v20 & 2 | 1) + v20, v20) )
        {
          RtlBackoff((unsigned int *)&v28);
          _m_prefetchw(v19);
          v20 = *(_DWORD *)v19;
        }
        if ( (v20 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
          {
            _InterlockedOr(v24, 0);
            RtlpWakeByAddress(v17 + 8, 0);
            v22 = 0;
          }
          else
          {
            v22 = ZwSetEvent();
          }
          if ( v22 < 0 )
            RtlRaiseStatus((unsigned int)v22);
        }
      }
    }
  }
  return v26;
}
