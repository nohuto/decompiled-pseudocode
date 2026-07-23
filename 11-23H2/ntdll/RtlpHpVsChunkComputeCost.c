/*
 * XREFs of RtlpHpVsChunkComputeCost @ 0x18006A028
 * Callers:
 *     RtlpHpVsFreeChunkInsert @ 0x180069E80 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180069FBC (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsChunkDecommit @ 0x1801240AC (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkComputeCost(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 *a4)
{
  __int64 v5; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  unsigned int v10; // r9d
  unsigned int v11; // edx
  unsigned __int64 v12; // r8
  __int64 result; // rax

  v5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a1) ^ *(unsigned __int16 *)(a1 + 2));
  v8 = ((v5 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v5 + 4095) >> 12);
  v9 = (a1 - a2 + 4127) & 0xFFFFF000;
  v10 = (a1 + v5 - a2) & 0xFFFFF000;
  if ( v9 < v10 )
  {
    v11 = v10 - v9;
    v12 = *(_QWORD *)(a2 + 16) & (-1LL << (v9 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v10 - 1) >> 12)));
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
  }
  result = v8;
  *a3 = v11 >> 12;
  *a4 = v12;
  return result;
}
