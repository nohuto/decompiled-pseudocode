/*
 * XREFs of sub_18008EA40 @ 0x18008EA40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011ED4 @ 0x180011ED4 (sub_180011ED4.c)
 *     sub_18001B02C @ 0x18001B02C (sub_18001B02C.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800507E4 @ 0x1800507E4 (sub_1800507E4.c)
 *     sub_18005081C @ 0x18005081C (sub_18005081C.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_18005D454 @ 0x18005D454 (sub_18005D454.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 *     sub_18008E220 @ 0x18008E220 (sub_18008E220.c)
 *     sub_18008E248 @ 0x18008E248 (sub_18008E248.c)
 *     sub_18008E304 @ 0x18008E304 (sub_18008E304.c)
 *     sub_18008E32C @ 0x18008E32C (sub_18008E32C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008EA40(_DWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // edx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 result; // rax
  __int128 v20; // [rsp+20h] [rbp-20h] BYREF
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF

  v6 = sub_18008141C((__int64)a1);
  v7 = sub_180034870(v6);
  v21 = 0LL;
  sub_1800507E4(v7, (__int64)(a1 + 442), &v21);
  v21 = 0LL;
  sub_1800507E4(v7, (__int64)(a1 + 462), &v21);
  sub_180011C50((__int64)(a1 + 14), &v20);
  sub_180011ED4(v20, &v21);
  if ( *((_QWORD *)&v20 + 1) )
    sub_180010530(*((__int64 *)&v20 + 1));
  v8 = v21;
  if ( *(_BYTE *)(v21 + 124) && *(float *)(v21 + 104) > 0.0 )
  {
    sub_18008DC1C((__int64)a1);
    if ( a1[490] )
    {
      v9 = 3;
      if ( *(_DWORD *)(v8 + 120) != 2 )
        v9 = 1;
    }
    else
    {
      if ( a1[486] )
      {
        v10 = 4;
        if ( *(_DWORD *)(v8 + 120) != 2 )
          v10 = 2;
        v11 = sub_18001B02C((__int64)a1, v10);
        a1[103] = 6;
        a1[78] = v11;
        goto LABEL_16;
      }
      v9 = 3;
      if ( *(_DWORD *)(v8 + 120) != 2 )
        v9 = 1;
    }
    sub_18001B02C((__int64)a1, v9);
    a1[103] = 3;
    a1[78] = 1065353216;
LABEL_16:
    v13 = a1[485] - 1;
    LODWORD(v20) = v12;
    *(_QWORD *)((char *)&v20 + 4) = __PAIR64__(v13, v12);
    HIDWORD(v20) = v13;
    sub_18005D454((__int64)a1, &v20);
    sub_18005C290(v14, a2, a3);
    v15 = sub_18008E32C((__int64)a1, &v20);
    sub_1800507E4(v7, (__int64)(a1 + 442), v15);
    if ( *((_QWORD *)&v20 + 1) )
      sub_180010530(*((__int64 *)&v20 + 1));
    v16 = sub_18008E248((__int64)a1, &v20);
    sub_1800507E4(v7, (__int64)(a1 + 462), v16);
    if ( *((_QWORD *)&v20 + 1) )
      sub_180010530(*((__int64 *)&v20 + 1));
  }
  v17 = (_QWORD *)sub_18008E304((__int64)a1, &v20);
  sub_18005081C(v7, (__int64)(a1 + 442), v17);
  if ( *((_QWORD *)&v20 + 1) )
    sub_180010530(*((__int64 *)&v20 + 1));
  v18 = (_QWORD *)sub_18008E220((__int64)a1, &v20);
  result = sub_18005081C(v7, (__int64)(a1 + 462), v18);
  if ( *((_QWORD *)&v20 + 1) )
    result = sub_180010530(*((__int64 *)&v20 + 1));
  if ( *((_QWORD *)&v21 + 1) )
    return sub_180010530(*((__int64 *)&v21 + 1));
  return result;
}
