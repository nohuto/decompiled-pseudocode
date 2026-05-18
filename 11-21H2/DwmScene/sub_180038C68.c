/*
 * XREFs of sub_180038C68 @ 0x180038C68
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_1800369F8 @ 0x1800369F8 (sub_1800369F8.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall sub_180038C68(__int64 a1)
{
  int v2; // eax
  unsigned int i; // r15d
  _QWORD *v4; // rbx
  __int64 *v5; // rax
  const char *v6; // r14
  __int64 *v7; // rax
  const char *v8; // rdi
  __int64 *v9; // rax
  const char *v10; // rsi
  int v11; // eax
  const char *v12; // rdx
  _QWORD v13[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v14; // [rsp+60h] [rbp-69h] BYREF
  char v15; // [rsp+68h] [rbp-61h]
  char *v16[3]; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp-41h]
  char *v18[3]; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp-21h]
  char *v20[3]; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+C8h] [rbp-1h]
  char *v22; // [rsp+D0h] [rbp+7h] BYREF
  unsigned __int64 v23; // [rsp+E8h] [rbp+1Fh]

  sub_18001F2B4(&stru_1801EA288, 3, byte_180128042);
  v2 = sub_1800369F8(a1);
  sub_18001F2B4(&stru_1801EA288, 3, "Engine has %u device(s) attached:", v2);
  sub_18002C5FC(a1 + 112, (__int64)&v14);
  for ( i = 0; i < (unsigned int)sub_1800369F8(a1); ++i )
  {
    sub_180036948(a1, v13, i);
    v4 = (_QWORD *)v13[0];
    v5 = sub_1800306A0((__int64 *)&v22, (_QWORD *)(v13[0] + 208LL));
    v6 = (const char *)v5;
    if ( (unsigned __int64)v5[3] >= 0x10 )
      v6 = (const char *)*v5;
    v7 = sub_1800306A0((__int64 *)v20, v4 + 18);
    v8 = (const char *)v7;
    if ( (unsigned __int64)v7[3] >= 0x10 )
      v8 = (const char *)*v7;
    v9 = sub_1800306A0((__int64 *)v18, v4 + 10);
    v10 = (const char *)v9;
    if ( (unsigned __int64)v9[3] >= 0x10 )
      v10 = (const char *)*v9;
    sub_1800306A0((__int64 *)v16, v4 + 14);
    v11 = sub_180028544((__int64)v4);
    sub_18001F2B4(
      &stru_1801EA288,
      3,
      "    index %u      id %-3u    %-20s     %-30s   level=%-10s   profile=%-8s",
      i,
      v11,
      v12,
      v10,
      v8,
      v6);
    if ( v17 >= 0x10 )
      sub_180010884(v16[0], v17 + 1);
    v16[2] = 0LL;
    v17 = 15LL;
    LOBYTE(v16[0]) = 0;
    if ( v19 >= 0x10 )
      sub_180010884(v18[0], v19 + 1);
    v18[2] = 0LL;
    v19 = 15LL;
    LOBYTE(v18[0]) = 0;
    if ( v21 >= 0x10 )
      sub_180010884(v20[0], v21 + 1);
    v20[2] = 0LL;
    v21 = 15LL;
    LOBYTE(v20[0]) = 0;
    if ( v23 >= 0x10 )
      sub_180010884(v22, v23 + 1);
    sub_180010910((__int64)v13);
  }
  sub_18001F2B4(
    &stru_1801EA288,
    3,
    "-----------------------------------------------------------------------------------");
  if ( v15 )
    sub_18002C8E4(v14);
}
