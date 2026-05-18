/*
 * XREFs of sub_1800900BC @ 0x1800900BC
 * Callers:
 *     sub_180066E20 @ 0x180066E20 (sub_180066E20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 *     sub_180050DC4 @ 0x180050DC4 (sub_180050DC4.c)
 *     sub_180051054 @ 0x180051054 (sub_180051054.c)
 *     sub_1800515C4 @ 0x1800515C4 (sub_1800515C4.c)
 *     sub_18008F990 @ 0x18008F990 (sub_18008F990.c)
 *     sub_1800902BC @ 0x1800902BC (sub_1800902BC.c)
 *     sub_1800904E0 @ 0x1800904E0 (sub_1800904E0.c)
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 *     sub_180090F5C @ 0x180090F5C (sub_180090F5C.c)
 *     sub_180091014 @ 0x180091014 (sub_180091014.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800900BC(__int64 a1, _BYTE *a2, __int64 a3, const void **a4)
{
  void **v6; // rdx
  size_t v7; // rdi
  const void **v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  void **v11; // rdx
  const void *v12; // rcx
  __int64 v13; // rcx
  void **v14; // rdx
  const void *v15; // rcx
  __int64 v16; // rcx
  void **v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v21; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  int v23; // [rsp+40h] [rbp-C0h]
  _QWORD v24[30]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[4]; // [rsp+140h] [rbp+40h] BYREF

  sub_180050DC4((__int64)v25, a2, &a2[a3]);
  sub_180051054(v24, v25);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v6 = &qword_1801D8828;
  if ( (unsigned __int64)qword_1801D8840 >= 0x10 )
    v6 = (void **)qword_1801D8828;
  v7 = (size_t)a4[2];
  v8 = a4;
  v9 = (unsigned __int64)a4[3];
  if ( v9 >= 0x10 )
    v8 = (const void **)*a4;
  if ( v7 == qword_1801D8838 && !memcmp(v8, v6, v7) )
  {
    sub_1800904E0(v10, v25, &v20);
    v7 = (size_t)a4[2];
    v9 = (unsigned __int64)a4[3];
  }
  v11 = &qword_1801D87C8;
  if ( (unsigned __int64)qword_1801D87E0 >= 0x10 )
    v11 = (void **)qword_1801D87C8;
  v12 = a4;
  if ( v9 >= 0x10 )
    v12 = *a4;
  if ( v7 == qword_1801D87D8 && !memcmp(v12, v11, v7) )
  {
    sub_1800902BC(v13, v24, &v20);
    v7 = (size_t)a4[2];
    v9 = (unsigned __int64)a4[3];
  }
  v14 = &qword_1801D87E8;
  if ( (unsigned __int64)qword_1801D8800 >= 0x10 )
    v14 = (void **)qword_1801D87E8;
  v15 = a4;
  if ( v9 >= 0x10 )
    v15 = *a4;
  if ( v7 == qword_1801D87F8 && !memcmp(v15, v14, v7) )
  {
    sub_1800906E4(v16, v24, &v20);
    v7 = (size_t)a4[2];
    v9 = (unsigned __int64)a4[3];
  }
  v17 = &qword_1801D8808;
  if ( (unsigned __int64)qword_1801D8820 >= 0x10 )
    v17 = (void **)qword_1801D8808;
  if ( v9 >= 0x10 )
    a4 = (const void **)*a4;
  if ( v7 == qword_1801D8818 && !memcmp(a4, v17, v7) )
    sub_180090AB8(v18, v24, &v20);
  sub_180091014(a1, v20, &v21);
  sub_180090F5C(a1);
  sub_18008F990(a1);
  sub_18002A4FC((__int64)&v21);
  sub_1800515C4((__int64)v24);
  return sub_180011B24((__int64)v25);
}
