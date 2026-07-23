/*
 * XREFs of RtlpHpVsChunkCoalesce @ 0x180037110
 * Callers:
 *     RtlpHpVsContextFree @ 0x180036AF0 (RtlpHpVsContextFree.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpHpVsChunkFree @ 0x180124278 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180038910 (RtlRbRemoveNode.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180069FBC (RtlpHpVsFreeChunkRemove.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r12
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rdi
  int v23; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  v5 = a1;
  v6 = a3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v8 = WORD1(v6);
  v9 = WORD1(v6);
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ ((v23 & 0xFF00FFFF) >> 16) ^ BYTE6(RtlpHpHeapGlobals);
  if ( WORD2(v6) )
  {
    v10 = a3 - 16LL * WORD2(v6);
    v11 = v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10;
    if ( (v11 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, a2, a3 - 16LL * WORD2(v6));
      v5 = a1;
      v4 = v10;
      v9 += WORD1(v11);
    }
  }
  v12 = a2 + 48;
  v13 = v4 + 16LL * v9;
  if ( v13 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v14 = RtlpHpHeapGlobals ^ *(_QWORD *)v13 ^ v13;
    if ( (v14 & 0xFF000000000000LL) == 0 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(v5 + 16), (PRTL_BALANCED_NODE)(v13 + 8));
      v16 = (v13 - a2 + 4127) & 0xFFFFF000;
      v17 = ((v13 + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v13 ^ *(_DWORD *)v13) >> 16)) - a2) & 0xFFFFF000)
          - v16;
      v5 = a1;
      if ( v16 >= (((_DWORD)v13
                  + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v13 ^ *(_DWORD *)v13) >> 16))
                  - (_DWORD)a2) & 0xFFFFF000) )
        v17 = 0;
      v15 = 16 * (((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v13 ^ (unsigned int)v13) >> 16);
      *(_QWORD *)(a1 + 56) -= (unsigned int)(((v13 & 0xFFF) + v15 + 4095) >> 12)
                            + (v17 >> 12)
                            - (unsigned int)((unsigned __int64)(v15 + 4095) >> 12)
                            - (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v13 ^ v13);
      v9 += WORD1(v14);
    }
  }
  if ( (*(_BYTE *)(v5 + 176) & 1) != 0 )
  {
    v20 = v4 + 16LL * v9;
    if ( v20 < v12 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
    {
      v21 = RtlpHpHeapGlobals ^ *(_QWORD *)v20 ^ v20;
      if ( (v21 & 0xFF000000000000LL) == 0 )
      {
        RtlpHpVsFreeChunkRemove(v5, a2, v20);
        v9 += WORD1(v21);
      }
    }
  }
  if ( v8 != v9 )
  {
    v18 = v4 + 16LL * v9;
    *(_WORD *)(v4 + 2) = WORD1(RtlpHpHeapGlobals) ^ v9 ^ WORD1(v4);
    if ( v18 < v12 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v18 + 4) = WORD2(RtlpHpHeapGlobals) ^ v9 ^ WORD2(v18);
  }
  *a4 = v9;
  return v4;
}
