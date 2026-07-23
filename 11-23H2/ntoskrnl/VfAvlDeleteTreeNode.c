/*
 * XREFs of VfAvlDeleteTreeNode @ 0x14020A720
 * Callers:
 *     VfTargetDriversRemove @ 0x14020A7DC (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140AD24E0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD28EC (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140AE2260 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE237C (VfLookasideDelete.c)
 *     VfCheckForResource @ 0x140AE43AC (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE44F0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE4604 (VfTrackResource.c)
 * Callees:
 *     ViAvlNodeInitializeSessionId @ 0x14020A2F8 (ViAvlNodeInitializeSessionId.c)
 *     ViAvlTableIndex @ 0x14020A440 (ViAvlTableIndex.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A45C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlRaiseIrqlSafe @ 0x14020A490 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4C8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031EC60 (RtlDeleteElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  Buffer = a3;
  if ( a4 )
    v12 = a4;
  else
    v12 = *(_QWORD *)a1;
  ViAvlNodeInitializeSessionId(a1, (__int64)&Buffer);
  v6 = ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(192 * v6 + *(_QWORD *)(a1 + 16)), &Buffer);
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 8));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 192 * v6 + 112);
  *(_QWORD *)(v8 + v7 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v7 + *(_QWORD *)(a1 + 16), a2);
  return v9;
}
