/*
 * XREFs of sub_180020F14 @ 0x180020F14
 * Callers:
 *     sub_180021530 @ 0x180021530 (sub_180021530.c)
 * Callees:
 *     sub_180020FF0 @ 0x180020FF0 (sub_180020FF0.c)
 */

__int64 __fastcall sub_180020F14(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF

  v4 = *a4;
  *a4 = 0LL;
  v10[0] = v4;
  v5 = a4[1];
  a4[1] = 0LL;
  v10[1] = v5;
  v6 = *a3;
  *a3 = 0LL;
  v11[0] = v6;
  v7 = a3[1];
  a3[1] = 0LL;
  v11[1] = v7;
  v12[0] = *a2;
  v8 = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  v12[1] = v8;
  return ((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD *, _QWORD *))sub_180020FF0)(a1, v12, v11, v10);
}
