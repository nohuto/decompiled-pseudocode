/*
 * XREFs of sub_1800D8738 @ 0x1800D8738
 * Callers:
 *     sub_1800D78AC @ 0x1800D78AC (sub_1800D78AC.c)
 * Callees:
 *     sub_1800DEC80 @ 0x1800DEC80 (sub_1800DEC80.c)
 */

__int64 __fastcall sub_1800D8738(__int64 a1, __int128 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF

  v4 = a4[1];
  v10 = 0LL;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a4[1];
  }
  *(_QWORD *)&v10 = *a4;
  v5 = *a3;
  *a3 = 0LL;
  v11[0] = v5;
  v6 = a3[1];
  a3[1] = 0LL;
  v7 = *a2;
  *((_QWORD *)&v10 + 1) = v4;
  v8 = a2[1];
  v11[1] = v6;
  v12[0] = v7;
  v12[1] = v8;
  return ((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD *, __int128 *))sub_1800DEC80)(a1, v12, v11, &v10);
}
