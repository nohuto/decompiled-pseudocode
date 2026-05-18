/*
 * XREFs of sub_180035944 @ 0x180035944
 * Callers:
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180035944(__int64 a1)
{
  int v2; // eax
  unsigned int i; // ebx
  _QWORD *v4; // rdi
  const char *v5; // rax
  const char *v6; // r15
  const char *v7; // rax
  const char *v8; // rsi
  const char *v9; // rax
  const char *v10; // r14
  int v11; // eax
  const char *v12; // rdx
  _QWORD *v14; // [rsp+50h] [rbp-79h] BYREF
  __int64 v15; // [rsp+58h] [rbp-71h]
  _BYTE v16[16]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v19[4]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v20[4]; // [rsp+D0h] [rbp+7h] BYREF

  sub_18001DB68(&stru_1801C8288, 3, byte_180106082);
  v2 = sub_180034264(a1);
  sub_18001DB68(&stru_1801C8288, 3, "Engine has %u device(s) attached:", v2);
  sub_18002A244(a1 + 112, (__int64)v16);
  for ( i = 0; i < (unsigned int)sub_180034264(a1); ++i )
  {
    sub_1800341C8(a1, &v14, i);
    v4 = v14;
    v5 = (const char *)sub_18002E0A8(v20, v14 + 26);
    v6 = v5;
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v6 = *(const char **)v5;
    v7 = (const char *)sub_18002E0A8(v19, v4 + 18);
    v8 = v7;
    if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
      v8 = *(const char **)v7;
    v9 = (const char *)sub_18002E0A8(v18, v4 + 10);
    v10 = v9;
    if ( *((_QWORD *)v9 + 3) >= 0x10uLL )
      v10 = *(const char **)v9;
    sub_18002E0A8(v17, v4 + 14);
    v11 = sub_180026650((__int64)v4);
    sub_18001DB68(
      &stru_1801C8288,
      3,
      "    index %u      id %-3u    %-20s     %-30s   level=%-10s   profile=%-8s",
      i,
      v11,
      v12,
      v10,
      v8,
      v6);
    sub_180011B24((__int64)v17);
    sub_180011B24((__int64)v18);
    sub_180011B24((__int64)v19);
    sub_180011B24((__int64)v20);
    if ( v15 )
      sub_180010530(v15);
  }
  sub_18001DB68(
    &stru_1801C8288,
    3,
    "-----------------------------------------------------------------------------------");
  return sub_180029FA0((__int64)v16);
}
