/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180072880
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180049120 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180072B00 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180082074 (LdrEnsureMrdataHeapExists.c)
 *     NtSetInformationProcess @ 0x1800A1230 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A19F0 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlAddGrowableFunctionTable(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  int v10; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v13; // rbx
  int v14; // edi
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 *v21; // rax
  int v22; // ecx
  int v23; // r8d
  void *v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-38h] BYREF
  char v26; // [rsp+28h] [rbp-30h]

  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  if ( (int)result < 0 )
    return result;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v10 == -1 )
        goto LABEL_46;
    }
    else
    {
      RtlProtectHeap((__m128i *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v10 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 136LL);
  v13 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 16) = a2;
    *(_DWORD *)(Heap + 84) = a3;
    ZwQuerySystemTime(Heap + 24);
    *(_QWORD *)(v13 + 40) = a6;
    *(_QWORD *)(v13 + 32) = a5;
    *(_QWORD *)(v13 + 48) = a5;
    *(_DWORD *)(v13 + 80) = 3;
    v25 = v13;
    v26 = 0;
    v14 = NtSetInformationProcess(-1LL, 53LL, &v25, 16LL);
    if ( v14 < 0 )
    {
      if ( LdrControlFlowGuardEnforced() )
        v24 = (void *)LdrpMrdataHeap;
      else
        v24 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v24, 0, v13);
      goto LABEL_27;
    }
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
    v15 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
    LOBYTE(v16) = 0;
    if ( !RtlpDynamicFunctionTableTreeMin )
      goto LABEL_19;
    while ( 1 )
    {
      if ( *(_QWORD *)(v13 + 32) >= *(v15 - 7) )
      {
        v17 = (_QWORD *)v15[1];
        if ( !v17 )
        {
          LOBYTE(v16) = 1;
LABEL_19:
          RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v15, v16, v13 + 88);
          v18 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
          LOBYTE(v19) = 0;
          if ( !RtlpDynamicFunctionTableTreeMax )
            goto LABEL_25;
          while ( 1 )
          {
            if ( *(_QWORD *)(v13 + 40) >= *(v18 - 10) )
            {
              v20 = (_QWORD *)v18[1];
              if ( !v20 )
              {
                LOBYTE(v19) = 1;
LABEL_25:
                RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v18, v19, v13 + 112);
                v21 = (__int64 *)qword_18019C2E0;
                if ( *(__int64 **)qword_18019C2E0 != &RtlpDynamicFunctionTable )
                  __fastfail(3u);
                *(_QWORD *)v13 = &RtlpDynamicFunctionTable;
                *(_QWORD *)(v13 + 8) = v21;
                *v21 = v13;
                qword_18019C2E0 = v13;
                RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
                LdrProtectMrdata(1);
                *a1 = v13;
LABEL_27:
                if ( LdrControlFlowGuardEnforced() )
                {
                  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
                  v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
                  if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
                  {
                    *(_DWORD *)LdrpMrdataHeapUnprotected = v22 - 1;
                    if ( v22 == 1 )
                      RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
                    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                    return (unsigned int)v14;
                  }
LABEL_46:
                  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                  __fastfail(0xEu);
                }
                return (unsigned int)v14;
              }
            }
            else
            {
              v20 = (_QWORD *)*v18;
              if ( !*v18 )
                goto LABEL_25;
            }
            v18 = v20;
          }
        }
      }
      else
      {
        v17 = (_QWORD *)*v15;
        if ( !*v15 )
          goto LABEL_19;
      }
      v15 = v17;
    }
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_46;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
    if ( v23 == 1 )
      RtlProtectHeap((__m128i *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 3221225626LL;
}
