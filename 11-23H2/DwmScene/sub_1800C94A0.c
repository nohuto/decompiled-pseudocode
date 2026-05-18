/*
 * XREFs of sub_1800C94A0 @ 0x1800C94A0
 * Callers:
 *     sub_1800C95E0 @ 0x1800C95E0 (sub_1800C95E0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_18002CB90 @ 0x18002CB90 (sub_18002CB90.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     sub_1800CBBFC @ 0x1800CBBFC (sub_1800CBBFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C94A0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  _OWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp-8h]

  sub_1800C9FBC(a1, &v10);
  if ( v10 )
  {
    v4 = sub_180010DD0(v12, (__int64)"RenderOutput ColorBuffer");
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800CBBFC((unsigned int)&v13, (unsigned int)&v10, v6, v5, (__int64)a2, (__int64)v4);
    v7 = sub_180026618(v10);
    sub_18001085C(v7, &v9);
    sub_180028284(v9, &v13);
    v12[0] = v9;
    v9 = 0LL;
    sub_18002CB90(a1, v12);
    if ( *((_QWORD *)&v9 + 1) )
      sub_180010530(*((__int64 *)&v9 + 1));
    if ( v14 )
      sub_180010530(v14);
  }
  if ( v11 )
    sub_180010530(v11);
  return sub_18000E72C(a2);
}
