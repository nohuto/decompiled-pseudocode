/*
 * XREFs of CemRcObjectDereference @ 0x1800150BC
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180013220 (-RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@.c)
 *     ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610 (-RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS.c)
 *     ?RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z @ 0x180013F44 (-RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z.c)
 *     ?RmpProcEntryDereference@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x18001407C (-RmpProcEntryDereference@@YAXPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z @ 0x180014B80 (-RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180014CB8 (-RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@.c)
 *     ?RmpProcMetricsBufferReset@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DE4 (-RmpProcMetricsBufferReset@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z.c)
 *     CemRcTableGetNext @ 0x180015364 (CemRcTableGetNext.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int64 __fastcall CemRcObjectDereference(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 i; // rcx
  signed __int64 v4; // rtt
  unsigned __int64 v5; // rdi
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  _m_prefetchw(a1 + 3);
  result = a1[3];
  for ( i = result - 1; i > 0; i = result - 1 )
  {
    v4 = result;
    result = _InterlockedCompareExchange64(a1 + 3, i, result);
    if ( v4 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  v5 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a1[2] == -1LL )
  {
    if ( _InterlockedDecrement64(a1 + 3) <= -1 )
      __fastfail(0xEu);
    return (*(__int64 (__fastcall **)(_QWORD *))(v5 + 24))(a1);
  }
  else
  {
    RtlAcquireSRWLockExclusive(v5 + 16);
    v6 = _InterlockedExchangeAdd64(a1 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    v8 = v6 - 1;
    if ( v7 )
    {
      if ( v8 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v5 + 16);
      return (*(__int64 (__fastcall **)(_QWORD *))(v5 + 24))(a1);
    }
    else
    {
      return RtlReleaseSRWLockExclusive(v5 + 16);
    }
  }
}
