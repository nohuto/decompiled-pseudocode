/*
 * XREFs of sub_180033C90 @ 0x180033C90
 * Callers:
 *     sub_180030140 @ 0x180030140 (sub_180030140.c)
 *     sub_18006A444 @ 0x18006A444 (sub_18006A444.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_1800312A0 @ 0x1800312A0 (sub_1800312A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180033C90(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  sub_1800312A0(a1, (__int64)&v11, a2);
  v4 = v12;
  if ( *(_BYTE *)(v12 + 25) || (int)_std_type_info_compare(*a2 + 8, *(_QWORD *)(v12 + 32) + 8LL) < 0 )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001F56C();
    v13 = *a1;
    v10 = (unsigned __int64)a1;
    v5 = (__int64 *)sub_180011088(0x38uLL);
    v5[4] = *a2;
    v5[6] = 0LL;
    v5[5] = 0LL;
    v5[6] = 0LL;
    sub_18001DE7C(v5, &v13);
    sub_18001DE7C((__int64 *)(v6 + 8), &v13);
    sub_18001DE7C((__int64 *)(v7 + 16), &v13);
    *(_WORD *)(v8 + 24) = 0;
    v10 = v11;
    v4 = sub_18001F31C(a1, (__int64)&v10, v8);
  }
  return v4 + 40;
}
