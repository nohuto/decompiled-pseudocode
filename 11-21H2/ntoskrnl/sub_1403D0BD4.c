/*
 * XREFs of sub_1403D0BD4 @ 0x1403D0BD4
 * Callers:
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_140277C9C @ 0x140277C9C (sub_140277C9C.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 */

__int64 __fastcall sub_1403D0BD4(__int64 a1, __m128i *a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __m128i *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  char v19; // [rsp+68h] [rbp+10h] BYREF

  if ( (a2[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && a2[2].m128i_i16[0] == 1 && sub_140277C9C((__int64)a2) )
  {
    v19 = 17;
    v9 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)a2[0x22000000000LL].m128i_i64 >> 4)) + 2);
    v10 = sub_1402E8990((__int64)a2);
    v11 = sub_1403250B0(
            *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)a2[2].m128i_i64[1] >> 43) & 0x3FF)),
            (v10 << byte_140C506CD) | (v9 << byte_140C506CC) | (-1431655765
                                                              * ((__int64)a2[0x22000000000LL].m128i_i64 >> 4)) & dword_140C50738,
            a4);
    if ( v11 != -1 )
    {
      v12 = (__m128i *)(48 * v11 - 0x220000000000LL);
      v13 = sub_140273AF0(a2->m128i_i64[1] | 0x8000000000000000uLL, (__int64)&v19);
      if ( v13 )
      {
        if ( !sub_140277C50((__int64)a2) )
        {
          v17 = sub_140333AA0(a1);
          if ( (unsigned int)sub_1402EA95C(a2, v12, a3, v17, a5, 0) )
          {
            LOBYTE(v14) = v19;
            sub_140334790(v13, v14, v15, v16);
            a2[1].m128i_i64[0] = 0LL;
            sub_1402E89B0((unsigned __int64 *)&a2[1]);
            sub_140268408((__int64)a2);
            return 1LL;
          }
        }
        LOBYTE(v14) = v19;
        sub_140334790(v13, v14, v15, v16);
      }
      sub_140268408((__int64)v12);
    }
  }
  return 0LL;
}
