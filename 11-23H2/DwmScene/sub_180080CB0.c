/*
 * XREFs of sub_180080CB0 @ 0x180080CB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180011F38 @ 0x180011F38 (sub_180011F38.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 *     sub_180060C80 @ 0x180060C80 (sub_180060C80.c)
 *     sub_18007C6AC @ 0x18007C6AC (sub_18007C6AC.c)
 *     sub_18007C73C @ 0x18007C73C (sub_18007C73C.c)
 *     sub_18007C854 @ 0x18007C854 (sub_18007C854.c)
 *     sub_18007E7A0 @ 0x18007E7A0 (sub_18007E7A0.c)
 *     sub_1800855A8 @ 0x1800855A8 (sub_1800855A8.c)
 *     sub_180085AA8 @ 0x180085AA8 (sub_180085AA8.c)
 *     sub_1800A45C4 @ 0x1800A45C4 (sub_1800A45C4.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_180080CB0(__int64 a1, _QWORD *a2)
{
  char result; // al
  __int64 v5; // rbx
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h]
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h]
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int128 v12; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v13[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v14[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v15[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v16[3]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v18[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v19[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v20[48]; // [rsp+118h] [rbp+18h] BYREF

  sub_18001246C(&v6, (_QWORD *)(a1 + 56));
  sub_180060C80(v6, &v8, 9);
  if ( v7 )
    sub_180010530(v7);
  result = sub_180011DE0(&v8);
  if ( result )
  {
    v12 = 0LL;
    sub_18000C8C8((__int64)v20, 16LL, 3LL);
    sub_180011C50(*a2 + 56LL, &v10);
    sub_18001265C(v10, &v6);
    if ( v11 )
      sub_180010530(v11);
    sub_180011F38(v6, (__int64)v19);
    sub_18007C854(v6, (__int64)v18);
    sub_1800A45C4((unsigned int)v19, (unsigned int)v18, a1 + 112, (unsigned int)&v12, (__int64)v20);
    sub_18007C73C(v17, (_OWORD *)(*(_QWORD *)(a1 + 176) + 496LL), (_OWORD *)(*(_QWORD *)(a1 + 176) + 544LL));
    v5 = v8;
    sub_180085AA8(v8, &unk_1801D7188, v17);
    sub_18007C73C(v16, (_OWORD *)(*(_QWORD *)(a1 + 176) + 544LL), (_OWORD *)(*(_QWORD *)(a1 + 176) + 592LL));
    sub_180085AA8(v5, &unk_1801D71A8, v16);
    sub_18007C73C(v15, (_OWORD *)(*(_QWORD *)(a1 + 176) + 448LL), (_OWORD *)(*(_QWORD *)(a1 + 176) + 496LL));
    sub_180085AA8(v5, &unk_1801D7228, v15);
    sub_18007C73C(v14, (_OWORD *)(*(_QWORD *)(a1 + 176) + 352LL), (_OWORD *)(*(_QWORD *)(a1 + 176) + 400LL));
    sub_180085AA8(v5, &unk_1801D71E8, v14);
    sub_18007C6AC(v13, *(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 176) + 192LL);
    sub_1800855A8(v5, &unk_1801D71C8, v13);
    sub_18007E7A0((__int64)v13);
    sub_18002A4FC((__int64)v14);
    sub_18002A4FC((__int64)v15);
    sub_18002A4FC((__int64)v16);
    sub_18002A4FC((__int64)v17);
    sub_180013300((__int64)v18);
    sub_180013300((__int64)v19);
    if ( v7 )
      sub_180010530(v7);
    result = sub_18000B4B0((__int64)v20, 16LL, 3LL);
    if ( *((_QWORD *)&v12 + 1) )
      result = sub_180010530(*((__int64 *)&v12 + 1));
  }
  if ( v9 )
    return sub_180010530(v9);
  return result;
}
