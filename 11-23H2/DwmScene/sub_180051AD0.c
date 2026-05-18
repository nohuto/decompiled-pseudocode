/*
 * XREFs of sub_180051AD0 @ 0x180051AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180051C0C @ 0x180051C0C (sub_180051C0C.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 */

__int64 __fastcall sub_180051AD0(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  void **v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-2Ch]
  int v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+3Ch] [rbp-24h]
  int v15; // [rsp+4Ch] [rbp-14h]
  int v16; // [rsp+50h] [rbp-10h]

  v1 = (__int64 *)(a1 + 512);
  if ( !*(_QWORD *)(a1 + 512) )
  {
    v3 = sub_18008141C(a1);
    v4 = sub_1800161AC(v3, &v10);
    sub_180011020(v1, v4);
    if ( *((_QWORD *)&v10 + 1) )
      sub_180010530(*((__int64 *)&v10 + 1));
    v5 = *v1;
    v6 = (void **)sub_180010DD0(&v10, (__int64)"Light Probe Sampler");
    sub_180029824(v5, v6);
    v11 = 0;
    v15 = 0;
    v7 = *v1;
    v16 = 2139095039;
    v14 = 0LL;
    v13 = 7;
    v10 = 3uLL;
    v12 = 8;
    ((void (__fastcall *)(__int64, __int128 *, _QWORD, __int64))sub_180054950)(v7, &v10, 0LL, v8);
  }
  v10 = xmmword_180106A08;
  return sub_180051C0C(a1, &v10);
}
