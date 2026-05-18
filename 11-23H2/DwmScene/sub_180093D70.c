/*
 * XREFs of sub_180093D70 @ 0x180093D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180093A10 @ 0x180093A10 (sub_180093A10.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180093D70(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rbx
  void **v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // rax
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+4Ch] [rbp-24h]
  int v18; // [rsp+5Ch] [rbp-14h]
  int v19; // [rsp+60h] [rbp-10h]

  v4 = sub_180026618(a2);
  v5 = sub_1800161AC(v4, &si128);
  v6 = (__int64 *)(a1 + 216);
  sub_180011020((_QWORD *)(a1 + 216), v5);
  if ( si128.m128i_i64[1] )
    sub_180010530(si128.m128i_i64[1]);
  v7 = *v6;
  v8 = (void **)sub_180010DD0(&si128, (__int64)"Image Processing Blur Sampler");
  sub_180029824(v7, v8);
  v9 = *v6;
  v14 = 0;
  v18 = 0;
  v19 = 2139095039;
  v17 = 0LL;
  v15 = 1;
  v16 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B800);
  sub_180054950(v9, &si128, 0LL);
  v10 = *(int *)(a1 + 144);
  v11 = sub_180093A10(a1, si128.m128i_i64);
  sub_180011020((_QWORD *)(a1 + 184), v11);
  if ( si128.m128i_i64[1] )
    sub_180010530(si128.m128i_i64[1]);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180115240[v10],
           dword_180115230[v10]);
}
