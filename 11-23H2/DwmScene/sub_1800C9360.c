/*
 * XREFs of sub_1800C9360 @ 0x1800C9360
 * Callers:
 *     sub_180011170 @ 0x180011170 (sub_180011170.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180024944 @ 0x180024944 (sub_180024944.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_18002CA44 @ 0x18002CA44 (sub_18002CA44.c)
 *     sub_18006F930 @ 0x18006F930 (sub_18006F930.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     sub_1800D635C @ 0x1800D635C (sub_1800D635C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C9360(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 *v8; // r9
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  _OWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp-8h]

  result = sub_1800C9FBC(a1, &v10);
  if ( v10 )
  {
    v3 = sub_180010DD0(v12, (__int64)"RenderOutput DepthBuffer");
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800D635C((unsigned int)&v13, (unsigned int)&v10, v5, v4, (__int64)v3);
    v6 = sub_180026618(v10);
    sub_180024944(v6, &v9);
    v7 = sub_18001246C(v12, &v13);
    sub_18006F930(v8, v7, 0);
    v12[0] = v9;
    v9 = 0LL;
    result = (__int64)sub_18002CA44(a1, v12);
    if ( *((_QWORD *)&v9 + 1) )
      result = sub_180010530(*((__int64 *)&v9 + 1));
    if ( v14 )
      result = sub_180010530(v14);
  }
  if ( v11 )
    return sub_180010530(v11);
  return result;
}
