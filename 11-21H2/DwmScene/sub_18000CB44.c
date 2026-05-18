/*
 * XREFs of sub_18000CB44 @ 0x18000CB44
 * Callers:
 *     sub_18001032C @ 0x18001032C (sub_18001032C.c)
 * Callees:
 *     sub_18000CB18 @ 0x18000CB18 (sub_18000CB18.c)
 *     sub_18000DE20 @ 0x18000DE20 (sub_18000DE20.c)
 *     sub_18000E2E4 @ 0x18000E2E4 (sub_18000E2E4.c)
 */

void __fastcall __noreturn sub_18000CB44(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  _BYTE v16[24]; // [rsp+60h] [rbp-18h] BYREF

  v8 = sub_18000E2E4(a1, a2, (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", a4);
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  v9 = sub_18000DE20(v16, (unsigned int)v8);
  v10 = *(_QWORD *)v9;
  v15 = *(_DWORD *)(v9 + 8);
  v14 = v10;
  sub_18000CB18(a1, a2, v11, v12, v13, a6, (__int64)&v14);
}
