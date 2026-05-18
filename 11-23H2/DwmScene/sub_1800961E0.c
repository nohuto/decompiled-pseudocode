/*
 * XREFs of sub_1800961E0 @ 0x1800961E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 *     sub_180060CAC @ 0x180060CAC (sub_180060CAC.c)
 *     sub_180093A10 @ 0x180093A10 (sub_180093A10.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800961E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rbx
  void **v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h]
  __m128i si128; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+50h] [rbp-30h]
  int v24; // [rsp+54h] [rbp-2Ch]
  int v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+5Ch] [rbp-24h]
  int v27; // [rsp+6Ch] [rbp-14h]
  int v28; // [rsp+70h] [rbp-10h]

  v4 = sub_180026618(a2);
  v5 = sub_180034870(v4);
  v6 = sub_180017648(&si128, (__int64)&unk_1801D7EC8);
  v7 = sub_1800502A4(v5, &v20, v6);
  v8 = (__int64 *)(a1 + 216);
  sub_180011020((_QWORD *)(a1 + 216), v7);
  if ( v21 )
    sub_180010530(v21);
  v9 = (__int64 *)sub_180060CAC(*v8, &v20);
  sub_180011020((_QWORD *)(a1 + 200), v9);
  if ( v21 )
    sub_180010530(v21);
  v10 = sub_180060148(*v8, &v20);
  sub_180011020((_QWORD *)(a1 + 248), v10);
  if ( v21 )
    sub_180010530(v21);
  v11 = sub_180026618(a2);
  v12 = sub_1800161AC(v11, &v20);
  v13 = (__int64 *)(a1 + 264);
  sub_180011020((_QWORD *)(a1 + 264), v12);
  if ( v21 )
    sub_180010530(v21);
  v14 = *v13;
  v15 = (void **)sub_180010DD0(&si128, (__int64)"Image Processing Bloom Sampler");
  sub_180029824(v14, v15);
  v16 = *v13;
  v23 = 0;
  v27 = 0;
  v28 = 2139095039;
  v26 = 0LL;
  v24 = 1;
  v25 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B800);
  sub_180054950(v16, &si128, 0LL);
  v17 = *(int *)(a1 + 144);
  v18 = sub_180093A10(a1, &v20);
  sub_180011020((_QWORD *)(a1 + 184), v18);
  if ( v21 )
    sub_180010530(v21);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180115240[v17],
           dword_180115360[v17]);
}
