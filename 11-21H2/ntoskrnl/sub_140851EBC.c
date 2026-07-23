/*
 * XREFs of sub_140851EBC @ 0x140851EBC
 * Callers:
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 *     sub_140B240EC @ 0x140B240EC (sub_140B240EC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408520BC @ 0x1408520BC (sub_1408520BC.c)
 *     sub_140852250 @ 0x140852250 (sub_140852250.c)
 *     sub_140A01F78 @ 0x140A01F78 (sub_140A01F78.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140851EBC(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi
  unsigned int v4; // ebx
  PVOID v5; // rax
  unsigned int v6; // ebx
  PVOID v7; // rax
  unsigned __int16 v8; // si
  __int64 v9; // r14
  __int64 v10; // rcx
  int v11; // ebx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C577845u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    *PoolWithTag = a1;
    v4 = 8 * (unsigned __int16)word_140D05000;
    v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x6C577845u);
    v3[1] = v5;
    if ( v5 )
    {
      memset(v5, 0, v4);
      v6 = 8 * (unsigned __int16)word_140D05000;
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6C577845u);
      v3[2] = v7;
      if ( v7 )
      {
        memset(v7, 0, v6);
        v8 = 0;
        if ( !word_140D05000 )
        {
LABEL_12:
          *((_DWORD *)v3 + 6) = 252;
          result = 0LL;
          *(_QWORD *)(a1 + 16) = v3;
          return result;
        }
        while ( 1 )
        {
          v9 = 0LL;
          if ( (_UNKNOWN *)qword_140D31700[v8] != (_UNKNOWN *)((char *)&unk_140D3DDC0 + 280 * v8) )
            v9 = qword_140D31700[v8];
          *(_QWORD *)(v3[2] + 8LL * v8) = ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x6C577845u);
          v10 = *(_QWORD *)(v3[2] + 8LL * v8);
          if ( !v10 )
            break;
          sub_140852250(v10, v3, v9);
          *(_QWORD *)(v3[1] + 8LL * v8) = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6C577845u);
          if ( !*(_QWORD *)(v3[1] + 8LL * v8) )
            break;
          memset(*(void **)(v3[1] + 8LL * v8), 0, 0x40uLL);
          v11 = sub_1408520BC((_DWORD)v3, 0, dword_140C0C86C, v9, 0);
          if ( v11 < 0 )
            goto LABEL_13;
          v11 = sub_1408520BC((_DWORD)v3, 0, dword_140C0C86C, v9, 1);
          if ( v11 < 0 )
            goto LABEL_13;
          if ( ++v8 >= (unsigned __int16)word_140D05000 )
            goto LABEL_12;
        }
      }
    }
    v11 = -1073741801;
LABEL_13:
    sub_140A01F78(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
