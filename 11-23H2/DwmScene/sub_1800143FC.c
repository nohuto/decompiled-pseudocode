/*
 * XREFs of sub_1800143FC @ 0x1800143FC
 * Callers:
 *     sub_180014C10 @ 0x180014C10 (sub_180014C10.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013C74 @ 0x180013C74 (sub_180013C74.c)
 *     sub_180013D44 @ 0x180013D44 (sub_180013D44.c)
 *     sub_180014620 @ 0x180014620 (sub_180014620.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800143FC(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h]
  _BYTE v11[16]; // [rsp+50h] [rbp-10h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_18001246C(&v5, (_QWORD *)(v1 + 32));
  v2 = (_QWORD *)sub_18001265C(v5, &v9);
  sub_18002A0C4(*v2 + 16LL, v11);
  if ( v10 )
    sub_180010530(v10);
  sub_180013D44(v5, &v7);
  v3 = sub_18001246C(&v9, (_QWORD *)(qword_1801D3390 + 96));
  sub_180014620(v7, v3);
  sub_180013C74(v5, &v9);
  if ( v10 )
    sub_180010530(v10);
  if ( v8 )
    sub_180010530(v8);
  result = sub_180010F54((__int64)v11);
  if ( v6 )
    return sub_180010530(v6);
  return result;
}
