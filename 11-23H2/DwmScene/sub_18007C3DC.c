/*
 * XREFs of sub_18007C3DC @ 0x18007C3DC
 * Callers:
 *     sub_1800A58E8 @ 0x1800A58E8 (sub_1800A58E8.c)
 *     sub_1800A78BC @ 0x1800A78BC (sub_1800A78BC.c)
 *     sub_1800A7DC0 @ 0x1800A7DC0 (sub_1800A7DC0.c)
 *     sub_1800AF488 @ 0x1800AF488 (sub_1800AF488.c)
 *     sub_1800AF71C @ 0x1800AF71C (sub_1800AF71C.c)
 *     sub_1800AFAA8 @ 0x1800AFAA8 (sub_1800AFAA8.c)
 *     sub_1800B1B34 @ 0x1800B1B34 (sub_1800B1B34.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18007BE40 @ 0x18007BE40 (sub_18007BE40.c)
 *     sub_18007C218 @ 0x18007C218 (sub_18007C218.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18007C3DC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // [rsp+20h] [rbp-68h]
  __int64 v7; // [rsp+28h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-58h]
  _BYTE v9[16]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v10[5]; // [rsp+48h] [rbp-40h] BYREF

  v10[4] = a1;
  sub_18007C218(&v7, *(_DWORD *)(a2 + 20));
  v6 = sub_180017648(v10, a1);
  v4 = *(_QWORD *)sub_18007BE40((__int64 *)(v7 + 16), (__int64)v9, v6);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 16);
  sub_180011B24((__int64)v6);
  if ( v8 )
    sub_180010530(v8);
  sub_180011B24(a1);
  return 1;
}
