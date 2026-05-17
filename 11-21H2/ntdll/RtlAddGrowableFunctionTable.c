/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x1800781D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlAvlInsertNodeEx @ 0x180078450 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180087234 (LdrEnsureMrdataHeapExists.c)
 *     NtSetInformationProcess @ 0x1800A43F0 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A4BB0 (ZwQuerySystemTime.c)
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
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  int v13; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  int v18; // edi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r9
  int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r9
  int v41; // r8d
  void *v42; // rcx
  __int64 v43; // [rsp+20h] [rbp-38h] BYREF
  char v44; // [rsp+28h] [rbp-30h]

  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v10, v11, v12);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v13 == -1 )
        goto LABEL_46;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 136LL);
  v16 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 16) = a2;
    *(_DWORD *)(Heap + 84) = a3;
    ZwQuerySystemTime(Heap + 24);
    *(_QWORD *)(v16 + 40) = a6;
    *(_QWORD *)(v16 + 32) = a5;
    *(_QWORD *)(v16 + 48) = a5;
    *(_DWORD *)(v16 + 80) = 3;
    v43 = v16;
    v44 = 0;
    v18 = NtSetInformationProcess(-1LL, 53LL, &v43, 16LL);
    if ( v18 < 0 )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
        v42 = (void *)LdrpMrdataHeap;
      else
        v42 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v42, 0, v16);
      goto LABEL_27;
    }
    LdrProtectMrdata(0, v17, v19, v20);
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v21, v22, v23);
    v24 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
    LOBYTE(v25) = 0;
    if ( !RtlpDynamicFunctionTableTreeMin )
      goto LABEL_19;
    while ( 1 )
    {
      if ( *(_QWORD *)(v16 + 32) >= *(v24 - 7) )
      {
        v26 = (_QWORD *)v24[1];
        if ( !v26 )
        {
          LOBYTE(v25) = 1;
LABEL_19:
          RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v24, v25, v16 + 88);
          v27 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
          LOBYTE(v28) = 0;
          if ( !RtlpDynamicFunctionTableTreeMax )
            goto LABEL_25;
          while ( 1 )
          {
            if ( *(_QWORD *)(v16 + 40) >= *(v27 - 10) )
            {
              v29 = (_QWORD *)v27[1];
              if ( !v29 )
              {
                LOBYTE(v28) = 1;
LABEL_25:
                RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v27, v28, v16 + 112);
                v30 = (__int64 *)qword_18018F2C8;
                if ( *(__int64 **)qword_18018F2C8 != &RtlpDynamicFunctionTable )
                  __fastfail(3u);
                *(_QWORD *)v16 = &RtlpDynamicFunctionTable;
                *(_QWORD *)(v16 + 8) = v30;
                *v30 = v16;
                qword_18018F2C8 = v16;
                RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
                LdrProtectMrdata(1, v31, v32, v33);
                *a1 = v16;
LABEL_27:
                if ( (unsigned int)LdrControlFlowGuardEnforced() )
                {
                  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v34, v35, v36);
                  v37 = *(_DWORD *)LdrpMrdataHeapUnprotected;
                  if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
                  {
                    *(_DWORD *)LdrpMrdataHeapUnprotected = v37 - 1;
                    if ( v37 == 1 )
                      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
                    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                    return (unsigned int)v18;
                  }
LABEL_46:
                  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                  __fastfail(0xEu);
                }
                return (unsigned int)v18;
              }
            }
            else
            {
              v29 = (_QWORD *)*v27;
              if ( !*v27 )
                goto LABEL_25;
            }
            v27 = v29;
          }
        }
      }
      else
      {
        v26 = (_QWORD *)*v24;
        if ( !*v24 )
          goto LABEL_19;
      }
      v24 = v26;
    }
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v38, v39, v40);
    v41 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_46;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v41 - 1;
    if ( v41 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 3221225626LL;
}
