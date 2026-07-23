/*
 * XREFs of MiGetLargePagesDemoteAsNeeded @ 0x1402E90A8
 * Callers:
 *     MiGetFastLargePages @ 0x1402E898C (MiGetFastLargePages.c)
 *     MiGetLargePageChain @ 0x1402EBCD0 (MiGetLargePageChain.c)
 *     MiFindLargeNodePage @ 0x14061DBB8 (MiFindLargeNodePage.c)
 * Callees:
 *     MiUnlinkNodeLargePages @ 0x1402D7960 (MiUnlinkNodeLargePages.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 */

__int64 __fastcall MiGetLargePagesDemoteAsNeeded(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        unsigned int a8)
{
  int v8; // ebx
  __int64 v10; // r10
  __int64 v11; // r12
  unsigned int v12; // ebp
  __int64 v13; // rsi
  int v14; // ebx
  int v15; // r15d
  __int64 *v16; // r13
  unsigned int v17; // r14d
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 result; // rax
  __int64 v22; // rax
  unsigned __int64 v24; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v8 = a7;
  v10 = a1;
  v11 = *(_QWORD *)(a1 + 16) + 25408LL * a2;
  if ( !*(_QWORD *)(v11 + 22832) && (_DWORD)InitializationPhase )
    return 0LL;
  v12 = 0;
  v13 = 0LL;
  if ( (a7 & 1) == 0 )
    v8 = a7 | 1;
  v14 = v8 | 2;
  v15 = !(a7 & 1) + 1;
  while ( 2 )
  {
    v16 = MiLargePageSizes;
    v17 = 0;
    v18 = (_QWORD *)(v11 + 16 * (v13 + 1));
    while ( 1 )
    {
      v19 = *v16;
      v20 = v12;
      if ( a3 >= *v16 )
        break;
LABEL_7:
      ++v17;
      ++v16;
      v18 += 134;
      if ( v17 >= 3 )
        goto LABEL_8;
    }
    if ( v19 >= a4 )
    {
      v12 = v17;
      if ( v20 )
        v12 = v20;
      if ( v18[1] || *v18 )
      {
        if ( a6 )
          v22 = a3 / v19;
        else
          v22 = 1LL;
        result = MiUnlinkNodeLargePages(v10, a5, v17, v22, a2, 4, a8, v14, 0LL);
        if ( result )
          return result;
        v10 = a1;
        a3 = v24;
        a4 = v25;
      }
      goto LABEL_7;
    }
LABEL_8:
    if ( !v12 || (result = MiGetLargePage(v10, a5, v12, a2, a8, v14, 0LL)) == 0 )
    {
      if ( --v15 )
      {
        v10 = a1;
        v14 &= ~1u;
        a3 = v24;
        v13 = 1LL;
        a4 = v25;
        continue;
      }
      return 0LL;
    }
    return result;
  }
}
