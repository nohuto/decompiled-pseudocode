/*
 * XREFs of sub_1405C4C94 @ 0x1405C4C94
 * Callers:
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_1402E7D14 @ 0x1402E7D14 (sub_1402E7D14.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 */

__int64 __fastcall sub_1405C4C94(__int64 *a1, __m128i *a2, __m128i *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 result; // rax

  v6 = sub_140317A10((unsigned __int64)a1);
  v7 = sub_1402E7D14(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)a3[0x22000000000LL].m128i_i64 >> 4));
  v8 = 0;
  if ( sub_140317A80((unsigned __int64)a1) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
    {
      goto LABEL_8;
    }
    if ( (v7 & 1) != 0 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *a1 = v7;
  if ( v8 )
    sub_1402294F0((__int64)a1, v7);
  sub_140239060((__int64)a3);
  sub_1402E8154(a3, a2);
  if ( (((unsigned __int64)a2[2].m128i_i64[1] >> 60) & 7) == 3 )
    sub_14033C300((__int64)a3, 3);
  a3[1].m128i_i64[1] &= 0xC000000000000000uLL;
  a2[1].m128i_i64[1] |= 0x4000000000000000uLL;
  v9 = a2[1].m128i_i64[0];
  if ( (v9 & 4) != 0 )
  {
    v9 &= ~4uLL;
    a2[1].m128i_i64[0] = v9;
  }
  if ( (v9 & 2) != 0 )
    a2[1].m128i_i64[0] = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (unsigned int)sub_1403377E0((__int64)a2) )
    sub_140338500((ULONG_PTR)a2, 0xAAAAAAAAAAAAAAABuLL * ((__int64)a2[0x22000000000LL].m128i_i64 >> 4));
  else
    a3[2].m128i_i16[0] = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
