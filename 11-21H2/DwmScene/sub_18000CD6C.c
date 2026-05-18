/*
 * XREFs of sub_18000CD6C @ 0x18000CD6C
 * Callers:
 *     sub_18000DD84 @ 0x18000DD84 (sub_18000DD84.c)
 * Callees:
 *     sub_18000CB18 @ 0x18000CB18 (sub_18000CB18.c)
 *     sub_18000DE20 @ 0x18000DE20 (sub_18000DE20.c)
 */

void __fastcall __noreturn sub_18000CD6C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp-20h]
  _BYTE v13[24]; // [rsp+60h] [rbp-18h] BYREF

  v6 = sub_18000DE20(v13, 2147549183LL);
  v7 = *(_QWORD *)v6;
  v12 = *(_DWORD *)(v6 + 8);
  v11 = v7;
  sub_18000CB18(v9, 2895, v8, v9, v10, a6, (__int64)&v11);
}
