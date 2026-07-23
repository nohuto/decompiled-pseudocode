/*
 * XREFs of RtlZeroHeap @ 0x180103360
 * Callers:
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpFindEntry @ 0x180044770 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x180044D74 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  __int64 Entry; // r8
  _BYTE *v4; // r14
  ULONG v6; // edx
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // r15
  _BYTE *v10; // r13
  __int64 v11; // rdi
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  __int64 *v14; // r14
  __int64 v15; // r12
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r12
  __int64 *v23; // rdi
  int v24; // eax
  unsigned __int16 v25; // ax
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  _RTL_CRITICAL_SECTION *v33; // rdi
  int *p_LockCount; // rsi
  signed __int32 v36; // r14d
  HANDLE LockSemaphore; // r10
  int v38; // eax
  signed __int32 v39[8]; // [rsp+48h] [rbp-F8h] BYREF
  char v40; // [rsp+78h] [rbp-C8h]
  char *v41; // [rsp+80h] [rbp-C0h]
  unsigned __int64 v42; // [rsp+88h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+90h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-A0h]
  __int64 *v45; // [rsp+A8h] [rbp-98h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-90h]
  unsigned __int64 v47; // [rsp+B8h] [rbp-88h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-78h]
  unsigned __int64 v49; // [rsp+D0h] [rbp-70h]
  unsigned __int64 v50; // [rsp+D8h] [rbp-68h]
  int v51; // [rsp+E8h] [rbp-58h]
  unsigned __int64 v52; // [rsp+F0h] [rbp-50h]
  PVOID v53; // [rsp+160h] [rbp+20h] BYREF

  v4 = 0LL;
  v43 = 0LL;
  v53 = HeapHandle;
  v40 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v6 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
    return RtlDebugZeroHeap(HeapHandle);
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v40 = 1;
  }
  v7 = (char *)HeapHandle + 288;
  v8 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  v41 = v8;
  if ( v8 != v7 )
  {
    v9 = *((_QWORD *)v8 + 5);
    v44 = v9;
    while ( 1 )
    {
      if ( v9 >= *((_QWORD *)v8 + 6) )
      {
        v8 = *(char **)v8;
        v7 = (char *)HeapHandle + 288;
        goto LABEL_8;
      }
      if ( v4 )
      {
        if ( !*((_DWORD *)HeapHandle + 31) )
          goto LABEL_17;
        v4[11] = v4[8] ^ v4[9] ^ v4[10];
        *((_DWORD *)v4 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_DWORD *)(v9 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
          RtlpAnalyzeHeapFailure(HeapHandle, v9, Entry);
      }
LABEL_17:
      v4 = (_BYTE *)v9;
      v43 = v9;
      v10 = (_BYTE *)(v9 + 8);
      v11 = *(unsigned __int16 *)(v9 + 8);
      v12 = *(_BYTE *)(v9 + 10);
      if ( (v12 & 1) != 0 )
        goto LABEL_70;
      v13 = v9;
      v42 = v9;
      if ( (v12 & 8) == 0 )
      {
        v30 = 16 * v11 - 32;
        Entry = v9 + 32;
        if ( ((v12 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v49 = v9 + 32;
          v31 = v30 >> 2;
          v46 = v31;
          if ( v31 )
          {
            if ( (Entry & 4) != 0 )
            {
              *(_DWORD *)Entry = -17891602;
              v46 = --v31;
              if ( v31 )
              {
                Entry = v9 + 36;
                v49 = v9 + 36;
                goto LABEL_62;
              }
            }
            else
            {
LABEL_62:
              memset64((void *)Entry, 0xFEEEFEEEFEEEFEEEuLL, v31 >> 1);
              if ( (v31 & 1) != 0 )
                *(_DWORD *)(Entry + 4 * v31 - 4) = -17891602;
            }
          }
        }
        else
        {
          v50 = v9 + 32;
          v32 = v30 >> 2;
          v47 = v32;
          if ( v32 )
          {
            if ( (Entry & 4) != 0 )
            {
              *(_DWORD *)Entry = 0;
              v47 = --v32;
              if ( !v32 )
                goto LABEL_70;
              Entry = v9 + 36;
              v50 = v9 + 36;
            }
            memset((void *)Entry, 0, 8 * (v32 >> 1));
            if ( (v32 & 1) != 0 )
              *(_DWORD *)(Entry + 4 * v32 - 4) = 0;
          }
        }
LABEL_70:
        if ( *(_BYTE *)(v9 + 15) == 3 )
        {
          v52 = v9 + 16;
          v9 += *(_QWORD *)(v9 + 56) + 64LL;
        }
        else
        {
          v9 += 16LL * *(unsigned __int16 *)v10;
        }
        v44 = v9;
        goto LABEL_56;
      }
      v14 = (__int64 *)(v9 + 16);
      v15 = *(_QWORD *)(v9 + 16);
      v16 = *(__int64 **)(v9 + 24);
      v45 = v16;
      v17 = *v16;
      v18 = *(_QWORD *)(v15 + 8);
      if ( *v16 == v18 && (__int64 *)v17 == v14 )
      {
        *((_QWORD *)HeapHandle + 24) -= v11;
        v19 = *((_QWORD *)HeapHandle + 39);
        if ( v19 )
        {
          v20 = *(unsigned __int16 *)v10;
          while ( 1 )
          {
            v21 = *(unsigned int *)(v19 + 8);
            if ( v20 < v21 )
              break;
            if ( !*(_QWORD *)v19 )
            {
              v20 = (unsigned int)(v21 - 1);
              break;
            }
            v19 = *(_QWORD *)v19;
          }
          v48 = v20;
          RtlpHeapRemoveListEntry((__int64)HeapHandle, v19, 1, (__int64 *)(v9 + 16), v20, *(unsigned __int16 *)v10);
          v16 = v45;
          v13 = v42;
        }
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        if ( (*(_BYTE *)(v9 + 10) & 8) == 0 || RtlpCommitBlock((__int64)HeapHandle, v13) )
        {
          v22 = *(unsigned __int16 *)v10;
          *(_BYTE *)(v9 + 10) = 0;
          *(_BYTE *)(v42 + 15) = 0;
          v23 = (__int64 *)((char *)HeapHandle + 336);
          if ( *((_QWORD *)HeapHandle + 39) )
            Entry = RtlpFindEntry((__int64)HeapHandle, (unsigned int)v22);
          else
            Entry = *v23;
          while ( v23 != (__int64 *)Entry )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v24 = *(_DWORD *)(Entry - 8);
              v51 = v24;
              if ( (v24 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v51 = *((_DWORD *)HeapHandle + 34) ^ v24;
              v25 = v51;
              v9 = v44;
            }
            else
            {
              v25 = *(_WORD *)(Entry - 8);
            }
            if ( v22 <= v25 )
              break;
            Entry = *(_QWORD *)Entry;
          }
          v26 = *(__int64 **)(Entry + 8);
          if ( *v26 == Entry )
          {
            *v14 = Entry;
            v14[1] = (__int64)v26;
            *v26 = (__int64)v14;
            *(_QWORD *)(Entry + 8) = v14;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, Entry, 0, *v26, 0LL);
          }
          *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)v10;
          v27 = *((_QWORD *)HeapHandle + 39);
          if ( v27 )
          {
            v28 = (__int64 *)*(unsigned __int16 *)v10;
            while ( 1 )
            {
              v29 = *(unsigned int *)(v27 + 8);
              if ( (unsigned __int64)v28 < v29 )
                break;
              if ( !*(_QWORD *)v27 )
              {
                v28 = (__int64 *)(unsigned int)(v29 - 1);
                break;
              }
              v27 = *(_QWORD *)v27;
            }
            v45 = v28;
            RtlpHeapAddListEntry((__int64)HeapHandle, v27, 1, (__int64)v14, (int)v28, *(unsigned __int16 *)v10);
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *(_BYTE *)(v42 + 11) = *v10 ^ v10[1] ^ v10[2];
            *(_DWORD *)v10 ^= *((_DWORD *)HeapHandle + 34);
          }
        }
        else
        {
          RtlpDeCommitFreeBlock((__int64)HeapHandle, v42, *(unsigned __int16 *)v10, 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (_DWORD)HeapHandle, v9 + 16, v18, v17, 0LL);
      }
      v4 = 0LL;
      v43 = 0LL;
LABEL_56:
      v8 = v41;
    }
  }
  if ( v4 && *((_DWORD *)HeapHandle + 31) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v40 )
  {
    v33 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
    if ( v33->RecursionCount-- == 1 )
    {
      v33->OwningThread = 0LL;
      p_LockCount = &v33->LockCount;
      v36 = _InterlockedCompareExchange(&v33->LockCount, -1, -2);
      if ( v36 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v33);
        LockSemaphore = v33->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v33);
        LODWORD(v53) = 0;
        while ( v36 != _InterlockedCompareExchange(p_LockCount, (v36 & 2 | 1) + v36, v36) )
        {
          RtlBackoff((unsigned int *)&v53);
          _m_prefetchw(p_LockCount);
          v36 = *p_LockCount;
        }
        if ( (v36 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v39, 0);
            RtlpWakeByAddress((unsigned __int64)&v33->LockCount, 0);
            v38 = 0;
          }
          else
          {
            v38 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v38 < 0 )
            RtlRaiseStatus(v38);
        }
      }
    }
  }
  return 0;
}
