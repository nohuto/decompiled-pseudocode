/*
 * XREFs of ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x180009270 (MIDL_user_allocate.c)
 *     ?RmpProcContextGetFirst@@YAPEAU_RM_PROC_ENTRY@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013434 (-RmpProcContextGetFirst@@YAPEAU_RM_PROC_ENTRY@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcEntryIsEmptyTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x180014430 (-RmpProcEntryIsEmptyTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryIsTrimTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x1800144D0 (-RmpProcEntryIsTrimTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DC0 (-RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z.c)
 *     CemRcObjectDereference @ 0x1800150BC (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x180015364 (CemRcTableGetNext.c)
 *     CemRcTableGetObjectCount @ 0x180015404 (CemRcTableGetObjectCount.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180019AB4 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall RmpProcContextPopulateMemoryStats(
        struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1,
        char a2,
        struct _RM_PROC_METRICS_BUFFER *a3)
{
  unsigned int ObjectCount; // edi
  __int64 result; // rax
  size_t v8; // r14
  void *v9; // rax
  struct _RM_PROC_ENTRY *First; // rdi
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // r8
  size_t size; // [rsp+40h] [rbp+8h] BYREF

  ObjectCount = -1;
  if ( (unsigned __int64)((__int64 (*)(void))CemRcTableGetObjectCount)() <= 0xFFFFFFFF )
    ObjectCount = CemRcTableGetObjectCount(a1);
  if ( *((_DWORD *)a3 + 2) >= ObjectCount )
  {
    RtlULongLongMult(*((unsigned int *)a3 + 2), 0x40uLL, &size);
    v9 = *(void **)a3;
    v8 = size;
  }
  else
  {
    RmpProcMetricsBufferCleanup(a3);
    *(_OWORD *)a3 = 0LL;
    result = RtlULongLongMult(ObjectCount, 0x40uLL, &size);
    if ( (int)result < 0 )
      return result;
    v8 = size;
    v9 = MIDL_user_allocate(size);
    *(_QWORD *)a3 = v9;
    if ( !v9 )
      return 3221225495LL;
    *((_DWORD *)a3 + 2) = ObjectCount;
  }
  memset_0(v9, 0, v8);
  First = RmpProcContextGetFirst((unsigned __int64)a1);
  if ( First )
  {
    while ( 1 )
    {
      RtlAcquireSRWLockShared((char *)First + 64);
      if ( (a2 & 1) != 0 && RmpProcEntryIsEmptyTarget(First) || (a2 & 2) != 0 && RmpProcEntryIsTrimTarget(First) )
      {
        v11 = *(_QWORD *)a3 + ((unsigned __int64)*((unsigned int *)a3 + 3) << 6);
        *(_DWORD *)v11 = *((_DWORD *)First + 20);
        *(_DWORD *)(v11 + 56) ^= (*(_DWORD *)(v11 + 56) ^ *((_DWORD *)First + 26)) & 0x20;
        v12 = *(_DWORD *)(v11 + 56) ^ (*((_DWORD *)First + 26) ^ *(_DWORD *)(v11 + 56)) & 0x40;
        *(_DWORD *)(v11 + 56) = v12;
        v13 = v12 ^ ((unsigned __int8)v12 ^ *((_QWORD *)First + 14) & 0xF8) & 0x18;
        *(_DWORD *)(v11 + 56) = v13;
        *(_DWORD *)(v11 + 56) = v13 ^ (*((_DWORD *)First + 28) ^ v13) & 7;
        if ( _InterlockedIncrement64((volatile signed __int64 *)First + 3) <= 1 )
          __fastfail(0xEu);
        ++*((_DWORD *)a3 + 3);
        *(_QWORD *)(v11 + 32) = First;
      }
      RtlReleaseSRWLockShared((char *)First + 64);
      if ( *((_DWORD *)a3 + 3) >= *((_DWORD *)a3 + 2) )
        break;
      First = (struct _RM_PROC_ENTRY *)CemRcTableGetNext(First);
      if ( !First )
        goto LABEL_21;
    }
    CemRcObjectDereference(First);
  }
LABEL_21:
  v14 = a2 & 1 | 0x40u;
  if ( (a2 & 2) == 0 )
    v14 = a2 & 1;
  result = MemUtilQueryProcessMetrics(*(_QWORD *)a3, *((unsigned int *)a3 + 3), v14);
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
      return (unsigned __int16)result | 0xC0070000;
  }
  else
  {
    qsort(
      *(void **)a3,
      *((unsigned int *)a3 + 3),
      0x40uLL,
      (_CoreCrtNonSecureSearchSortCompareFunction)RmpProcContextCompareMetricsForEmpty);
    return 0LL;
  }
  return result;
}
