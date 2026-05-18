/*
 * XREFs of sub_180070344 @ 0x180070344
 * Callers:
 *     sub_18006A5AC @ 0x18006A5AC (sub_18006A5AC.c)
 *     sub_18006A718 @ 0x18006A718 (sub_18006A718.c)
 *     sub_18006A884 @ 0x18006A884 (sub_18006A884.c)
 *     sub_18006A9F0 @ 0x18006A9F0 (sub_18006A9F0.c)
 *     sub_18006AB5C @ 0x18006AB5C (sub_18006AB5C.c)
 *     sub_18006ACC8 @ 0x18006ACC8 (sub_18006ACC8.c)
 *     sub_18006DFB0 @ 0x18006DFB0 (sub_18006DFB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_180045DF4 @ 0x180045DF4 (sub_180045DF4.c)
 *     sub_1800463EC @ 0x1800463EC (sub_1800463EC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180070344(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int128 v12; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-39h]
  _QWORD *v14; // [rsp+40h] [rbp-29h]
  __int64 v15[4]; // [rsp+48h] [rbp-21h] BYREF
  char *v16[3]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+17h]

  v13 = a3;
  v14 = a4;
  sub_18002C73C(a1 + 16);
  v12 = 0LL;
  v8 = a4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a4[1];
  }
  *(_QWORD *)&v12 = *a4;
  *((_QWORD *)&v12 + 1) = v8;
  sub_1800463EC(a1, (__int64 *)v16, &v12);
  v9 = *a3;
  v10 = sub_1800129F4(v15, (__int64)v16);
  sub_180045DF4(v9, a2, (__int64)v10);
  if ( v17 >= 8 )
    sub_180010884(v16[0], 2 * v17 + 2);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  return a2;
}
