/*
 * XREFs of sub_18008EB54 @ 0x18008EB54
 * Callers:
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180092984 @ 0x180092984 (sub_180092984.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18008E974 @ 0x18008E974 (sub_18008E974.c)
 *     sub_18008F0BC @ 0x18008F0BC (sub_18008F0BC.c)
 */

__int64 __fastcall sub_18008EB54(__int64 *a1, __int64 a2, __int64 a3)
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
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 result; // rax
  unsigned __int64 v20; // rax

  v6 = (a2 - *a1) / 40;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x666666666666666LL )
    sub_180012170();
  v8 = v7 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v20 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v20 >= v8 )
      v10 = v20;
    if ( v10 > 0x666666666666666LL )
      sub_1800120D4();
  }
  else
  {
    v10 = 0x666666666666666LL;
  }
  v11 = 40 * v10;
  v12 = sub_180011088(40 * v10);
  v13 = v12 + 40 * v6;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = 0LL;
  v14 = *(_QWORD *)(a3 + 8);
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  *(_QWORD *)v13 = *(_QWORD *)a3;
  *(_QWORD *)(v13 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  v15 = *(_QWORD *)(a3 + 24);
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  v16 = v12;
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(v13 + 32) = *(_DWORD *)(a3 + 32);
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    sub_18008F0BC(v18, a2, v12);
    v17 = a1[1];
    v16 = v13 + 40;
    v18 = a2;
  }
  sub_18008F0BC(v18, v17, v16);
  if ( *a1 )
  {
    sub_18008E974(*a1, a1[1]);
    sub_180010884((char *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = v12;
  a1[1] = v12 + 40 * v8;
  result = v13;
  a1[2] = v11 + v12;
  return result;
}
