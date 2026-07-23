/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x18001C9FC
 * Callers:
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180019AF0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x180120D74 (RtlpHpVsChunkCoalesce.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkComputeCost @ 0x18001B248 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode(a1 + 1, (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 - (unsigned __int16)(a3 ^ RtlpHpHeapGlobals ^ *(_DWORD *)a3) + v6;
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min - result);
  return result;
}
