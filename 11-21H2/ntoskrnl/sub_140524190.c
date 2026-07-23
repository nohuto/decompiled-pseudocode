/*
 * XREFs of sub_140524190 @ 0x140524190
 * Callers:
 *     <none>
 * Callees:
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_140A51670 @ 0x140A51670 (sub_140A51670.c)
 */

__int64 sub_140524190()
{
  ULONG_PTR *v0; // rbx
  __int64 v1; // r9
  __int64 v2; // r15
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  int v5; // r12d
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // r13d
  __m128i v11; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR *v16; // [rsp+A8h] [rbp+48h]

  v15 = 0LL;
  v0 = (ULONG_PTR *)qword_140C4DE70;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  while ( v0 != &qword_140C4DE70 )
  {
    v1 = (__int64)v0;
    v16 = v0;
    v0 = (ULONG_PTR *)*v0;
    v2 = v1 + 248;
    v3 = *(__int64 **)(v1 + 248);
    if ( v3 != (__int64 *)(v1 + 248) )
    {
      do
      {
        v4 = v3;
        v5 = 0;
        v6 = *((_DWORD *)v3 + 6) - *((_DWORD *)v3 + 5);
        v3 = (__int64 *)*v3;
        if ( v6 > 0 )
        {
          v7 = 0LL;
          do
          {
            v8 = v4[5];
            if ( (*(_DWORD *)(v7 + v8 + 12) & 0x10) != 0 && !*(_DWORD *)(v7 + v8 + 8) )
            {
              v11 = *(__m128i *)(v7 + v8);
              v12 = *(_OWORD *)(v7 + v8 + 16);
              v13 = *(_OWORD *)(v7 + v8 + 32);
              v14 = *(_QWORD *)(v7 + v8 + 48);
              v11.m128i_i32[3] = _mm_srli_si128(v11, 8).m128i_i32[1] & 0xFFFFFFEF;
              LODWORD(v15) = *(_DWORD *)(v1 + 240);
              HIDWORD(v15) = v5 + *((_DWORD *)v4 + 5);
              v9 = sub_140251FD8(v1, (__int64)&v15, (__int64)&v11);
              if ( v9 < 0 )
              {
                sub_140A51670();
                return (unsigned int)v9;
              }
              v1 = (__int64)v16;
            }
            ++v5;
            v7 += 56LL;
          }
          while ( v5 < *((_DWORD *)v4 + 6) - *((_DWORD *)v4 + 5) );
        }
      }
      while ( v3 != (__int64 *)v2 );
    }
  }
  return 0;
}
