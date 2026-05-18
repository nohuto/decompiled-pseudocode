/*
 * XREFs of sub_180045304 @ 0x180045304
 * Callers:
 *     sub_1800347F0 @ 0x1800347F0 (sub_1800347F0.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_18007FAC0 @ 0x18007FAC0 (sub_18007FAC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180045178 @ 0x180045178 (sub_180045178.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180045304(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13[5]; // [rsp+40h] [rbp-38h] BYREF

  v13[4] = a4;
  v8 = sub_1800129F4(v13, a4);
  sub_180046470(a1, &v12, v8);
  v11 = 0LL;
  if ( *((_QWORD *)&v12 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL));
  v11 = v12;
  sub_180045178(a1, a2, a3, &v11);
  sub_180010910((__int64)&v12);
  v9 = *(_QWORD *)(a4 + 24);
  if ( v9 >= 8 )
    sub_180010884(*(char **)a4, 2 * v9 + 2);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_WORD *)a4 = 0;
  return a2;
}
