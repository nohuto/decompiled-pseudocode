/*
 * XREFs of sub_140533370 @ 0x140533370
 * Callers:
 *     <none>
 * Callees:
 *     sub_14052FA14 @ 0x14052FA14 (sub_14052FA14.c)
 *     sub_140532404 @ 0x140532404 (sub_140532404.c)
 *     sub_140532998 @ 0x140532998 (sub_140532998.c)
 */

__int64 __fastcall sub_140533370(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __m128i v5; // rax
  unsigned int v6; // esi
  __int8 v7; // r12
  __int64 v9; // r14
  unsigned int v10; // ebp
  __m128i *v11; // rdi
  unsigned __int64 v12; // rcx
  int v13; // ebx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __m128i v16; // rt0
  unsigned __int8 v17; // tt
  unsigned int i; // [rsp+90h] [rbp+8h]

  v5.m128i_i64[1] = a2;
  v6 = 0;
  v7 = v5.m128i_i8[8];
  for ( i = 0; v6 < dword_140C49C74; i = v6 )
  {
    v5.m128i_i64[0] = sub_140532404(v6 << 9);
    v9 = v5.m128i_i64[0];
    if ( !v6 || *(_QWORD *)(v5.m128i_i64[0] + 16) )
    {
      v10 = 0;
      if ( *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v11 = (__m128i *)(*(_QWORD *)(v9 + 16) + 16LL * v10);
          v12 = v11->m128i_i64[0];
          if ( (v11->m128i_i64[0] & 1) != 0 && (!v7 || _bittest(*(const signed __int32 **)(v9 + 40), v10)) )
          {
            v13 = (v11->m128i_u8[15] << 24) | (v12 >> 8) & 0xFFFFFF;
            v5.m128i_i32[0] = sub_14052FA14(v13, (v12 & 0x40) != 0, a3, a5, a4);
            if ( v13 != v5.m128i_i32[0] )
            {
              v14 = ((unsigned __int64)v5.m128i_u32[0] << 32) ^ (_mm_srli_si128(*v11, 8).m128i_u64[0] ^ ((unsigned __int64)v5.m128i_u32[0] << 32)) & 0xFFFFFFFFFFFFFFLL;
              v15 = v11->m128i_i64[0] ^ (v11->m128i_i64[0] ^ ((unsigned __int64)v5.m128i_u32[0] << 8)) & 0xFFFFFF00;
              v5 = *v11;
              do
              {
                v16 = v5;
                v17 = _InterlockedCompareExchange128(v11->m128i_i64, v14, v15, v16.m128i_i64);
                v5 = v16;
              }
              while ( !v17 );
            }
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(a1 + 180) );
        v6 = i;
      }
    }
    ++v6;
  }
  return sub_140532998(a1, v5.m128i_i64[1], 0LL);
}
