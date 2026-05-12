/*
 * XREFs of StorpInitializeAdapterTelemetry @ 0x1C006C0F4
 * Callers:
 *     RaidInitializeAdapter @ 0x1C00A7724 (RaidInitializeAdapter.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C001CD70 (StorpInitializeHierarchicalResetBuckets.c)
 */

__int64 __fastcall StorpInitializeAdapterTelemetry(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  StorpInitializeHierarchicalResetBuckets(a1);
  *(_QWORD *)(v1 + 5152) = MEMORY[0xFFFFF78000000008];
  result = 0LL;
  *(_QWORD *)(v1 + 5160) = 0LL;
  *(_QWORD *)(v1 + 5168) = 0LL;
  *(_QWORD *)(v1 + 5176) = 0LL;
  *(_QWORD *)(v1 + 5184) = 0LL;
  *(_QWORD *)(v1 + 5192) = 0LL;
  *(_QWORD *)(v1 + 5200) = 0LL;
  *(_QWORD *)(v1 + 5208) = 0LL;
  *(_QWORD *)(v1 + 5216) = 0LL;
  *(_QWORD *)(v1 + 5224) = 0LL;
  *(_QWORD *)(v1 + 5232) = 0LL;
  *(_DWORD *)(v1 + 5248) = 0;
  *(_BYTE *)(v1 + 5280) = 0;
  *(_QWORD *)(v1 + 5240) = 1LL;
  return result;
}
