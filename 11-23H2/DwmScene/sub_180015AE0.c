/*
 * XREFs of sub_180015AE0 @ 0x180015AE0
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001545C @ 0x18001545C (sub_18001545C.c)
 *     sub_1800179FC @ 0x1800179FC (sub_1800179FC.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180034EC0 @ 0x180034EC0 (sub_180034EC0.c)
 *     sub_1800C4174 @ 0x1800C4174 (sub_1800C4174.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180015AE0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD v14[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-18h] BYREF

  v8 = sub_18001C190(4648LL);
  if ( v8 )
  {
    v9 = sub_18001246C(&v15, (_QWORD *)(a1 + 464));
    v8 = sub_1800C4174(v10, a1, v9);
  }
  sub_18001545C(v14, v8);
  v11 = v14[0];
  sub_18002A070(v14[0] + 24LL, v17);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 240LL))(v11, a3, a4);
  sub_180011DA0(&v15, v14);
  sub_180032D40(a1, &v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010530(*((__int64 *)&v15 + 1));
  v15 = 0LL;
  v12 = sub_180011DA0(&v16, v14);
  sub_180034EC0(a1, 7LL, v12, &v15);
  *a2 = v11;
  a2[1] = v14[1];
  sub_180010F54((__int64)v17);
  sub_1800179FC(a3);
  return a2;
}
