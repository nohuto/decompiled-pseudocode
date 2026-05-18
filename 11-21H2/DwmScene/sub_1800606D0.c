/*
 * XREFs of sub_1800606D0 @ 0x1800606D0
 * Callers:
 *     sub_1800618A8 @ 0x1800618A8 (sub_1800618A8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180060694 @ 0x180060694 (sub_180060694.c)
 *     sub_180060BA8 @ 0x180060BA8 (sub_180060BA8.c)
 */

__int64 __fastcall sub_1800606D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned __int64 v19; // rax

  v6 = (a2 - *a1) / 48;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 4);
  if ( v7 == 0x555555555555555LL )
    sub_180012170();
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4);
  if ( v9 <= 0x555555555555555LL - (v9 >> 1) )
  {
    v19 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v19 >= v8 )
      v10 = v19;
    if ( v10 > 0x555555555555555LL )
      sub_1800120D4();
  }
  else
  {
    v10 = 0x555555555555555LL;
  }
  v11 = 48 * v10;
  v12 = sub_180011088(48 * v10);
  v13 = v12 + 48 * v6;
  *(_BYTE *)v13 = *(_BYTE *)a3;
  *(_QWORD *)(v13 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(v13 + 32) = 0LL;
  *(_QWORD *)(v13 + 40) = 0LL;
  v14 = *(_QWORD *)(a3 + 40);
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  v15 = v12;
  *(_QWORD *)(v13 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(v13 + 40) = *(_QWORD *)(a3 + 40);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    sub_180060BA8(v17, a2, v12);
    v16 = a1[1];
    v15 = v13 + 48;
    v17 = a2;
  }
  sub_180060BA8(v17, v16, v15);
  if ( *a1 )
  {
    sub_180060694(*a1, a1[1]);
    sub_180010884((char *)*a1, 16 * ((a1[2] - *a1) >> 4));
  }
  *a1 = v12;
  result = v13;
  a1[1] = v12 + 48 * v8;
  a1[2] = v11 + v12;
  return result;
}
