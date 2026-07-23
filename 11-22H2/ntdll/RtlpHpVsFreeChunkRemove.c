/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x180069FDC
 * Callers:
 *     RtlpHpVsChunkCoalesce @ 0x180037270 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x1800380B0 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180038A70 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkComputeCost @ 0x18006A048 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode(a1 + 1, (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 - (unsigned int)(unsigned __int16)(a3 ^ RtlpHpHeapGlobals ^ *(_DWORD *)a3) + v6;
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min - result);
  return result;
}
