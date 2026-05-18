/*
 * XREFs of sub_1800D971C @ 0x1800D971C
 * Callers:
 *     sub_1800D99A0 @ 0x1800D99A0 (sub_1800D99A0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800C88CC @ 0x1800C88CC (sub_1800C88CC.c)
 *     sub_1800D8AEC @ 0x1800D8AEC (sub_1800D8AEC.c)
 *     sub_1800D8BE4 @ 0x1800D8BE4 (sub_1800D8BE4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D971C(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // r10d
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v2 = (__int64 *)(a1 + 552);
  sub_1800C88CC((__int64 *)(a1 + 552), (__int64)v12, &v14);
  if ( !*(_BYTE *)(v13 + 25) && v3 >= *(_DWORD *)(v13 + 32) && v13 != *v2 )
    return v13 + 40;
  v5 = sub_1800D8BE4(&v10);
  v6 = *(_QWORD *)sub_1800D8AEC(v2, (__int64)v12, &v14);
  v7 = *v5;
  v8 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  *(_QWORD *)(v6 + 40) = v7;
  v9 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 48) = v8;
  if ( v9 )
    sub_180010530(v9);
  if ( v11 )
    sub_180010530(v11);
  return v6 + 40;
}
