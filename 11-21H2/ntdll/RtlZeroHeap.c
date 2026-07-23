/*
 * XREFs of RtlZeroHeap @ 0x180102270
 * Callers:
 *     RtlDebugZeroHeap @ 0x180106A10 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpHeapAddListEntry @ 0x18002192C (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180021DC0 (RtlpFindEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x18002E790 (RtlpHeapRemoveListEntry.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugZeroHeap @ 0x180106A10 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  ULONG v5; // edx
  char *v6; // rax
  char *v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // r8
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  _QWORD *v21; // r14
  _QWORD *Entry; // r8
  int v23; // ecx
  unsigned __int16 v24; // ax
  _QWORD *v25; // r14
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _DWORD *v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  _RTL_CRITICAL_SECTION *v35; // rdi
  int *p_LockCount; // rsi
  signed __int32 v38; // r14d
  HANDLE LockSemaphore; // r10
  int v40; // eax
  signed __int32 v41[8]; // [rsp+58h] [rbp-E8h] BYREF
  char v42; // [rsp+88h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+90h] [rbp-B0h]
  __int64 v44; // [rsp+A0h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-98h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-90h]
  unsigned __int64 v47; // [rsp+B8h] [rbp-88h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-78h]
  __int64 v49; // [rsp+D0h] [rbp-70h]
  unsigned __int64 v50; // [rsp+D8h] [rbp-68h]
  unsigned __int64 v51; // [rsp+E0h] [rbp-60h]
  int v52; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v53; // [rsp+F8h] [rbp-48h]
  PVOID v54; // [rsp+160h] [rbp+20h] BYREF

  v3 = 0LL;
  v43 = 0LL;
  v54 = HeapHandle;
  v42 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v5 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    return RtlDebugZeroHeap(HeapHandle);
  if ( (v5 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v42 = 1;
  }
  v6 = (char *)HeapHandle + 288;
  v7 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  if ( v7 != v6 )
  {
    v8 = *((_QWORD *)v7 + 5);
    v45 = v8;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)v7 + 6) )
      {
        v7 = *(char **)v7;
        v6 = (char *)HeapHandle + 288;
        goto LABEL_8;
      }
      if ( !v3 )
        goto LABEL_14;
      if ( *((_DWORD *)HeapHandle + 31) )
        break;
LABEL_17:
      v3 = (_BYTE *)v8;
      v43 = v8;
      v9 = *(unsigned __int16 *)(v8 + 8);
      v10 = *(_BYTE *)(v8 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_71;
      v11 = v8;
      v48 = v8;
      if ( (v10 & 8) != 0 )
      {
        v12 = *(_QWORD *)(v8 + 16);
        v13 = *(__int64 **)(v8 + 24);
        v14 = *v13;
        v15 = *(_QWORD *)(v12 + 8);
        if ( *v13 == v15 && v14 == v8 + 16 )
        {
          *((_QWORD *)HeapHandle + 24) -= v9;
          v16 = *((_QWORD *)HeapHandle + 39);
          if ( v16 )
          {
            v17 = *(unsigned __int16 *)(v8 + 8);
            while ( 1 )
            {
              v18 = *(unsigned int *)(v16 + 8);
              if ( v17 < v18 )
              {
                v19 = *(unsigned __int16 *)(v8 + 8);
                goto LABEL_27;
              }
              if ( !*(_QWORD *)v16 )
                break;
              v16 = *(_QWORD *)v16;
            }
            v19 = (unsigned int)(v18 - 1);
LABEL_27:
            v44 = v19;
            RtlpHeapRemoveListEntry((__int64)HeapHandle, v16, 1, (__int64 *)(v8 + 16), v19, v17);
          }
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || RtlpCommitBlock((char *)HeapHandle, v8) )
          {
            v20 = *(unsigned __int16 *)(v8 + 8);
            *(_BYTE *)(v8 + 10) = 0;
            *(_BYTE *)(v8 + 15) = 0;
            v21 = (char *)HeapHandle + 336;
            if ( *((_QWORD *)HeapHandle + 39) )
              Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v20);
            else
              Entry = (_QWORD *)*v21;
            while ( v21 != Entry )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v23 = *((_DWORD *)Entry - 2);
                v52 = v23;
                if ( (v23 & *((_DWORD *)HeapHandle + 31)) != 0 )
                  v52 = v23 ^ *((_DWORD *)HeapHandle + 34);
                v24 = v52;
                v8 = v45;
                v11 = v48;
              }
              else
              {
                v24 = *((_WORD *)Entry - 4);
              }
              if ( v20 <= v24 )
                break;
              Entry = (_QWORD *)*Entry;
            }
            v25 = (_QWORD *)(v11 + 16);
            v26 = (__int64 *)Entry[1];
            if ( (_QWORD *)*v26 == Entry )
            {
              *v25 = Entry;
              *(_QWORD *)(v11 + 24) = v26;
              *v26 = (__int64)v25;
              Entry[1] = v25;
            }
            else
            {
              RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v26, 0LL);
            }
            *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v11 + 8);
            v27 = *((_QWORD *)HeapHandle + 39);
            if ( v27 )
            {
              v28 = *(unsigned __int16 *)(v11 + 8);
              while ( 1 )
              {
                v29 = *(unsigned int *)(v27 + 8);
                if ( v28 < v29 )
                {
                  v30 = *(unsigned __int16 *)(v11 + 8);
                  goto LABEL_52;
                }
                if ( !*(_QWORD *)v27 )
                  break;
                v27 = *(_QWORD *)v27;
              }
              v30 = (unsigned int)(v29 - 1);
LABEL_52:
              v49 = v30;
              RtlpHeapAddListEntry((__int64)HeapHandle, v27, 1, v11 + 16, v30, v28);
            }
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
              *(_DWORD *)(v11 + 8) ^= *((_DWORD *)HeapHandle + 34);
            }
          }
          else
          {
            RtlpDeCommitFreeBlock((__int64)HeapHandle, v8, *(unsigned __int16 *)(v8 + 8), 1);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, (_DWORD)HeapHandle, v8 + 16, v15, v14, 0LL);
        }
        v3 = 0LL;
        v43 = 0LL;
      }
      else
      {
        v31 = 16 * v9 - 32;
        v32 = (_DWORD *)(v8 + 32);
        if ( ((v10 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v50 = v8 + 32;
          v33 = v31 >> 2;
          v46 = v33;
          if ( !v33 )
            goto LABEL_71;
          if ( ((unsigned __int8)v32 & 4) != 0 )
          {
            *v32 = -17891602;
            v46 = --v33;
            if ( !v33 )
              goto LABEL_71;
            v32 = (_DWORD *)(v8 + 36);
            v50 = v8 + 36;
          }
          memset64(v32, 0xFEEEFEEEFEEEFEEEuLL, v33 >> 1);
          if ( (v33 & 1) != 0 )
            v32[v33 - 1] = -17891602;
        }
        else
        {
          v51 = v8 + 32;
          v34 = v31 >> 2;
          v47 = v34;
          if ( !v34 )
            goto LABEL_71;
          if ( ((unsigned __int8)v32 & 4) != 0 )
          {
            *v32 = 0;
            v47 = --v34;
            if ( !v34 )
              goto LABEL_71;
            v32 = (_DWORD *)(v8 + 36);
            v51 = v8 + 36;
          }
          memset(v32, 0, 8 * (v34 >> 1));
          if ( (v34 & 1) != 0 )
            v32[v34 - 1] = 0;
        }
LABEL_71:
        if ( *(_BYTE *)(v8 + 15) == 3 )
        {
          v53 = v8 + 16;
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        }
        else
        {
          v8 += 16LL * *(unsigned __int16 *)(v8 + 8);
        }
        v45 = v8;
      }
    }
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
LABEL_14:
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      *(_DWORD *)(v8 + 8) ^= *((_DWORD *)HeapHandle + 34);
      if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
        RtlpAnalyzeHeapFailure(HeapHandle, v8);
    }
    goto LABEL_17;
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v42 )
  {
    v35 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
    if ( v35->RecursionCount-- == 1 )
    {
      v35->OwningThread = 0LL;
      p_LockCount = &v35->LockCount;
      v38 = _InterlockedCompareExchange(&v35->LockCount, -1, -2);
      if ( v38 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v35);
        LockSemaphore = v35->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v35);
        LODWORD(v54) = 0;
        while ( v38 != _InterlockedCompareExchange(p_LockCount, (v38 & 2 | 1) + v38, v38) )
        {
          RtlBackoff((unsigned int *)&v54);
          _m_prefetchw(p_LockCount);
          v38 = *p_LockCount;
        }
        if ( (v38 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v41, 0);
            RtlpWakeByAddress((unsigned __int64)&v35->LockCount, 0);
            v40 = 0;
          }
          else
          {
            v40 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v40 < 0 )
            RtlRaiseStatus(v40);
        }
      }
    }
  }
  return 0;
}
