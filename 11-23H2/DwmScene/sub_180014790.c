/*
 * XREFs of sub_180014790 @ 0x180014790
 * Callers:
 *     sub_180014FB0 @ 0x180014FB0 (sub_180014FB0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_180013E78 @ 0x180013E78 (sub_180013E78.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18003D19C @ 0x18003D19C (sub_18003D19C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180014790(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]
  _BYTE v13[16]; // [rsp+60h] [rbp-10h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_18001246C(&v6, (_QWORD *)(v1 + 32));
  v2 = (_QWORD *)sub_18001265C(v6, &v9);
  sub_18002A0C4(*v2 + 16LL, v13);
  if ( v10 )
    sub_180010530(v10);
  v3 = sub_180013E78(v6, &v11);
  v8 = 0LL;
  v8 = *(_OWORD *)v3;
  *v3 = 0LL;
  v3[1] = 0LL;
  sub_18003D19C(v6, &v8);
  if ( v12 )
    sub_180010530(v12);
  v4 = sub_180013E14(v6, &v11);
  v8 = 0LL;
  v8 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_18003D19C(v6, &v8);
  if ( v12 )
    sub_180010530(v12);
  result = sub_180010F54((__int64)v13);
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
