/*
 * XREFs of RtlCopyBitMap @ 0x1800F68B0
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x18011B934 (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800F87C4 (RtlpCopyBitMapTailToHead.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // rcx
  int *v8; // r11
  int *v9; // r10
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r8
  __int64 v15; // r8
  int v16; // r14d
  int v17; // edi
  unsigned __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned __int64 v20; // rsi
  int v21; // ebx
  char v22; // di
  int v23; // r9d

  result = *a1;
  v5 = *(_DWORD *)a2 - a3;
  if ( (unsigned int)result <= (unsigned int)v5 )
    v5 = (unsigned int)result;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v9 = (int *)(v7 + 4 * result);
    if ( v8 <= v9 )
    {
      result = (unsigned __int64)&v8[(v5 - 1) >> 5];
      if ( (unsigned __int64)v9 <= result )
        return RtlpCopyBitMapTailToHead(a1, a2, a3, (unsigned int)v5);
    }
    v10 = (unsigned __int64)a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v15 = a3 & 0x1F;
      if ( v5 < 0x20 )
      {
        v20 = v5;
      }
      else
      {
        v16 = *v9;
        v17 = 1 << (32 - v15);
        v18 = v5 >> 5;
        do
        {
          *v9++ = ((*v8 & (v17 - 1)) << v15) | v16 & ((1 << v15) - 1);
          v19 = *v8++ & ~(v17 - 1);
          result = v19 >> (32 - v15);
          v16 = result | *v9 & ~((1 << v15) - 1);
          *v9 = v16;
          --v18;
        }
        while ( v18 );
        v20 = v5 - 32 * (v5 >> 5);
        if ( !v20 )
          return result;
      }
      v21 = *v8;
      v22 = 32 - v15;
      if ( v20 > 32 - v15 )
      {
        *v9 = *v9 & ((1 << v15) - 1) | ((v21 & ((1 << v22) - 1)) << v15);
        v23 = 1 << (v20 + v15 - 32);
        result = (*v8 & (unsigned int)((v23 - 1) << v22)) >> v22;
        v9[1] = result | v9[1] & -v23;
      }
      else
      {
        result = (v21 & (unsigned int)((1 << v20) - 1)) << v15;
        *v9 = result | *v9 & ~(((1 << v20) - 1) << v15);
      }
      return result;
    }
    v11 = v5;
    v12 = v5 & 7;
    v13 = v11 >> 3;
    if ( v13 )
      result = (unsigned __int64)memmove((void *)(v10 + v7), *((const void **)a1 + 1), v13);
    if ( v12 )
    {
      v14 = (_BYTE *)(v10 + v13 + *(_QWORD *)(a2 + 8));
      *v14 &= ~((1 << v12) - 1);
      result = *((_QWORD *)a1 + 1);
      *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
    }
  }
  return result;
}
