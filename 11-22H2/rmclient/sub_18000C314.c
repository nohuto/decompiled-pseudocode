/*
 * XREFs of sub_18000C314 @ 0x18000C314
 * Callers:
 *     sub_18000DB40 @ 0x18000DB40 (sub_18000DB40.c)
 *     sub_1800117B0 @ 0x1800117B0 (sub_1800117B0.c)
 * Callees:
 *     sub_18000C0EC @ 0x18000C0EC (sub_18000C0EC.c)
 *     sub_18000DDC4 @ 0x18000DDC4 (sub_18000DDC4.c)
 */

void __fastcall __noreturn sub_18000C314(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // xmm0_8
  __int128 *v9; // r9
  __int64 v10; // r11
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+58h] [rbp-20h]
  _BYTE v14[24]; // [rsp+60h] [rbp-18h] BYREF

  v6 = sub_18000DDC4(v14, 2147549183LL);
  v8 = *(_QWORD *)v6;
  v13 = *(_DWORD *)(v6 + 8);
  v12 = v8;
  sub_18000C0EC(v10, (__int128 *)v7, v9, (__int64)v9, v11, a6, (__int64)&v12);
}
