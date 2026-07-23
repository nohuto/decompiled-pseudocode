/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x140333E84
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024A460 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkComputeCost @ 0x140333F00 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  RtlRbRemoveNode(a1 + 1, (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 + v6 - (unsigned int)(unsigned __int16)(a3 ^ RtlpHpHeapGlobals ^ *(_WORD *)a3);
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min - result);
  return result;
}
