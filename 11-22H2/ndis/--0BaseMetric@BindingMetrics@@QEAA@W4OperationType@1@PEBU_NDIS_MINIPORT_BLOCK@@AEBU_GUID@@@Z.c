/*
 * XREFs of ??0BaseMetric@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1C0021500
 * Callers:
 *     ??0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_LINK@@AEBU_GUID@@@Z @ 0x1C00214CC (--0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_.c)
 *     ??0UpdateBindings@BindingMetrics@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1C0021ED4 (--0UpdateBindings@BindingMetrics@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 *     ??0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1C0022044 (--0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 */

__int64 __fastcall BindingMetrics::BaseMetric::BaseMetric(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  char v6; // al
  bool v8; // zf

  *(_QWORD *)(a1 + 8) = a4;
  v5 = 0LL;
  *(_QWORD *)a1 = a3;
  *(_BYTE *)(a1 + 16) = a2;
  if ( (unsigned int)dword_1C00F41D8 <= 4
    || (v8 = (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 32LL) == 0, v6 = 1, v8) )
  {
    v6 = v5;
  }
  *(_BYTE *)(a1 + 17) = v6;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 40) = v5;
  if ( v6 )
    *(LARGE_INTEGER *)(a1 + 24) = KeQueryPerformanceCounter((PLARGE_INTEGER)(a1 + 32));
  return a1;
}
