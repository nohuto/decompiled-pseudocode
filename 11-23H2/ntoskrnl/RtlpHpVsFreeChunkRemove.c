/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x140334024
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024A480 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B930 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkComputeCost @ 0x1403340A0 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, _WORD *a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  RtlRbRemoveNode((unsigned __int64 *)(a1 + 16), (unsigned __int64)(a3 + 4));
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 + v6 - (unsigned int)(unsigned __int16)((unsigned __int16)a3 ^ RtlpHpHeapGlobals ^ *a3);
  *(_QWORD *)(a1 + 56) -= result;
  return result;
}
