/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x1403513D8
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x14034D5C0 (RtlpHpVsChunkCoalesce.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x14034D4E0 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  RtlRbRemoveNode((unsigned __int64 *)(a1 + 16), a3 + 8);
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 + v6 - (unsigned __int16)(a3 ^ RtlpHpHeapGlobals ^ *(_WORD *)a3);
  *(_QWORD *)(a1 + 56) -= result;
  return result;
}
