/*
 * XREFs of sub_18000C118 @ 0x18000C118
 * Callers:
 *     sub_180011794 @ 0x180011794 (sub_180011794.c)
 * Callees:
 *     sub_18000C0EC @ 0x18000C0EC (sub_18000C0EC.c)
 *     sub_18000DDC4 @ 0x18000DDC4 (sub_18000DDC4.c)
 *     sub_18000E264 @ 0x18000E264 (sub_18000E264.c)
 */

void __fastcall __noreturn sub_18000C118(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-20h]
  _BYTE v15[24]; // [rsp+60h] [rbp-18h] BYREF

  v8 = sub_18000E264(a1, a2, (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", a4);
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  v9 = sub_18000DDC4(v15, (unsigned int)v8);
  v10 = *(_QWORD *)v9;
  v14 = *(_DWORD *)(v9 + 8);
  v13 = v10;
  sub_18000C0EC(
    a1,
    (__int128 *)a2,
    (__int128 *)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    v11,
    v12,
    a6,
    (__int64)&v13);
}
