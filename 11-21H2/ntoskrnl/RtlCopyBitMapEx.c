/*
 * XREFs of RtlCopyBitMapEx @ 0x140230180
 * Callers:
 *     sub_140709C0C @ 0x140709C0C (sub_140709C0C.c)
 *     sub_14097D688 @ 0x14097D688 (sub_14097D688.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405E6CC4 @ 0x1405E6CC4 (sub_1405E6CC4.c)
 */

unsigned __int64 __fastcall RtlCopyBitMapEx(unsigned __int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 *v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r8
  __int64 v15; // rdi
  __int64 *v16; // r11
  __int64 v17; // rbp
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  char v21; // r8
  __int64 v22; // rbp
  __int64 v23; // r10

  v3 = *a1;
  result = *a2 - a3;
  if ( *a1 > result )
    v3 = *a2 - a3;
  if ( v3 )
  {
    v7 = a2[1];
    v8 = (__int64 *)a1[1];
    result = a3 >> 6;
    v9 = v7 + 8 * (a3 >> 6);
    if ( (unsigned __int64)v8 <= v9 && (result = (unsigned __int64)&v8[(v3 - 1) >> 6], v9 <= result) )
    {
      return sub_1405E6CC4(a1, a2, a3, v3);
    }
    else
    {
      v10 = a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v15 = a3 & 0x3F;
        v16 = (__int64 *)(v7 + 8 * (a3 >> 6));
        if ( v3 < 0x40 )
          goto LABEL_17;
        v17 = *v16;
        v18 = v3 >> 6;
        v3 += -64LL * (v3 >> 6);
        do
        {
          *v16++ = ((((1LL << (64 - ((unsigned __int8)a3 & 0x3Fu))) - 1) & *v8) << (a3 & 0x3F)) | v17 & ((1LL << (a3 & 0x3F)) - 1);
          v19 = ~((1LL << (64 - ((unsigned __int8)a3 & 0x3Fu))) - 1) & *v8++;
          result = v19 >> (64 - ((unsigned __int8)a3 & 0x3Fu));
          v17 = result | *v16 & ~((1LL << (a3 & 0x3F)) - 1);
          *v16 = v17;
          --v18;
        }
        while ( v18 );
        if ( v3 )
        {
LABEL_17:
          v20 = *v8;
          v21 = 64 - (a3 & 0x3F);
          v22 = *v16;
          if ( v3 > 64 - v15 )
          {
            *v16 = v22 & ((1LL << v15) - 1) | ((v20 & ((1LL << v21) - 1)) << v15);
            v23 = 1LL << ((unsigned __int8)v3 + (unsigned __int8)v15 - 64);
            result = (*v8 & (unsigned __int64)((v23 - 1) << v21)) >> v21;
            v16[1] = result | v16[1] & ~(v23 - 1);
          }
          else
          {
            result = ((v20 & ((1LL << v3) - 1)) << v15) | v22 & ~(((1LL << v3) - 1) << v15);
            *v16 = result;
          }
        }
      }
      else
      {
        v11 = v3;
        v12 = v3 & 7;
        v13 = v11 >> 3;
        if ( v13 )
          result = (unsigned __int64)memmove((void *)(v7 + v10), v8, v13);
        if ( v12 )
        {
          v14 = (_BYTE *)(v13 + v10 + a2[1]);
          *v14 &= ~((1 << v12) - 1);
          result = a1[1];
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
        }
      }
    }
  }
  return result;
}
