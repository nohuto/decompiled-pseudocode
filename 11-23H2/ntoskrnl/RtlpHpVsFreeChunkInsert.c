/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x140249F70
 * Callers:
 *     RtlpHpVsChunkFree @ 0x14024D6D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     RtlpHpVsContextAddSubsegment @ 0x14034F73C (RtlpHpVsContextAddSubsegment.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  __int16 v3; // r14
  unsigned int v4; // r9d
  unsigned int v5; // ebx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  unsigned __int64 Root; // rdx
  BOOLEAN v10; // al
  unsigned __int64 v12; // rax

  v3 = ((16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a3 ^ *(_DWORD *)a3) >> 16))
       + (unsigned __int64)(a3 & 0xFFF)
       + 4095) >> 12)
     - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a3 ^ *(_DWORD *)a3) >> 16))) + 4095) >> 12);
  v4 = (a3 - a2 + 4127) & 0xFFFFF000;
  v5 = (a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a3 ^ *(_DWORD *)a3) >> 16)) - a2) & 0xFFFFF000;
  if ( v4 >= v5 )
  {
    v7 = 0;
    v8 = 0LL;
  }
  else
  {
    v7 = v5 - v4;
    v8 = *(_QWORD *)(a2 + 16) & (-1LL << (v4 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                - (unsigned __int8)((unsigned __int64)(v5 - 1) >> 12)));
  }
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min
                                   + ((unsigned int)((0x101010101010101LL
                                                    * ((((v8 - ((v8 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v8 - ((v8 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                      + ((((v8 - ((v8 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                        + (((v8 - ((v8 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
  *(_WORD *)a3 = RtlpHpHeapGlobals ^ a3 ^ (v3
                                         + (v7 >> 12)
                                         - ((0x101010101010101LL
                                           * ((((v8 - ((v8 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                             + (((v8 - ((v8 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                             + ((((v8 - ((v8 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                               + (((v8 - ((v8 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  Root = (unsigned __int64)a1[1].Root;
  if ( ((__int64)a1[1].Min & 1) != 0 )
  {
    if ( !Root )
    {
LABEL_5:
      v10 = 0;
      return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v10, (PRTL_BALANCED_NODE)(a3 + 8));
    }
    Root ^= (unsigned __int64)&a1[1];
  }
  v10 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3 ^ (unsigned int)a3) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(Root - 8) ^ ((_DWORD)Root - 8)) )
      {
        v12 = *(_QWORD *)(Root + 8);
        if ( ((__int64)a1[1].Min & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_19;
          v12 ^= Root;
        }
        if ( !v12 )
        {
LABEL_19:
          v10 = 1;
          return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v10, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      else
      {
        v12 = *(_QWORD *)Root;
        if ( ((__int64)a1[1].Min & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_5;
          v12 ^= Root;
        }
        if ( !v12 )
          goto LABEL_5;
      }
      Root = v12;
    }
  }
  return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v10, (PRTL_BALANCED_NODE)(a3 + 8));
}
