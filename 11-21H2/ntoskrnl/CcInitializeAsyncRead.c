/*
 * XREFs of CcInitializeAsyncRead @ 0x1403D1458
 * Callers:
 *     CcInitializePartition @ 0x1403D0FE0 (CcInitializePartition.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x14053C908 (CcInitializePrivateVolumeCacheMap.c)
 * Callees:
 *     CcForEachNumaNode @ 0x140258140 (CcForEachNumaNode.c)
 */

char __fastcall CcInitializeAsyncRead(__int64 a1, __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 1160) = 0LL;
  v3 = 1;
  CcForEachNumaNode(
    (__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))CcInitializeAsyncReadForNodeHelper,
    a1,
    a2,
    (__int64)&v3);
  return v3;
}
