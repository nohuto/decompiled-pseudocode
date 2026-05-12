/*
 * XREFs of StorpInitializeAdapterTelemetry @ 0x1C005EB94
 * Callers:
 *     RaidInitializeAdapter @ 0x1C008D1D8 (RaidInitializeAdapter.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C0003434 (StorpInitializeHierarchicalResetBuckets.c)
 */

__int64 __fastcall StorpInitializeAdapterTelemetry(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  StorpInitializeHierarchicalResetBuckets(a1);
  *(_QWORD *)(v1 + 5088) = MEMORY[0xFFFFF78000000008];
  result = 0LL;
  *(_QWORD *)(v1 + 5096) = 0LL;
  *(_QWORD *)(v1 + 5104) = 0LL;
  *(_QWORD *)(v1 + 5112) = 0LL;
  *(_QWORD *)(v1 + 5120) = 0LL;
  *(_QWORD *)(v1 + 5128) = 0LL;
  *(_QWORD *)(v1 + 5136) = 0LL;
  *(_QWORD *)(v1 + 5144) = 0LL;
  *(_QWORD *)(v1 + 5152) = 0LL;
  *(_QWORD *)(v1 + 5160) = 0LL;
  *(_QWORD *)(v1 + 5168) = 0LL;
  *(_DWORD *)(v1 + 5184) = 0;
  *(_BYTE *)(v1 + 5216) = 0;
  *(_QWORD *)(v1 + 5176) = 1LL;
  return result;
}
