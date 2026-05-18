/*
 * XREFs of sub_18008E9B8 @ 0x18008E9B8
 * Callers:
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18008E91C @ 0x18008E91C (sub_18008E91C.c)
 *     sub_18008F01C @ 0x18008F01C (sub_18008F01C.c)
 */

__int64 __fastcall sub_18008E9B8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  unsigned __int64 v18; // rax

  v6 = (a2 - *a1) / 56;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x492492492492492LL )
    sub_180012170();
  v8 = v7 + 1;
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  if ( v9 <= 0x492492492492492LL - (v9 >> 1) )
  {
    v18 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v18 >= v8 )
      v10 = v18;
    if ( v10 > 0x492492492492492LL )
      sub_1800120D4();
  }
  else
  {
    v10 = 0x492492492492492LL;
  }
  v11 = 56 * v10;
  v12 = sub_180011088(56 * v10);
  v13 = v12 + 56 * v6;
  sub_18001875C((__int64 *)v13, a3);
  v14 = v12;
  *(_WORD *)(v13 + 32) = *(_WORD *)(a3 + 32);
  *(_DWORD *)(v13 + 36) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(v13 + 40) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(v13 + 44) = *(_DWORD *)(a3 + 44);
  *(_DWORD *)(v13 + 48) = *(_DWORD *)(a3 + 48);
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    sub_18008F01C(v16, a2, v12);
    v15 = a1[1];
    v14 = v13 + 56;
    v16 = a2;
  }
  sub_18008F01C(v16, v15, v14);
  if ( *a1 )
  {
    sub_18008E91C(*a1, a1[1]);
    sub_180010884((char *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = v12;
  result = v13;
  a1[1] = v12 + 56 * v8;
  a1[2] = v11 + v12;
  return result;
}
