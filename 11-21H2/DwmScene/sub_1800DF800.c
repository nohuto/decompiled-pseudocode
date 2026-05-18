/*
 * XREFs of sub_1800DF800 @ 0x1800DF800
 * Callers:
 *     sub_1800DF960 @ 0x1800DF960 (sub_1800DF960.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002A08C @ 0x18002A08C (sub_18002A08C.c)
 *     sub_18002F050 @ 0x18002F050 (sub_18002F050.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     sub_1800E2680 @ 0x1800E2680 (sub_1800E2680.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800DF800(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v11; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  _QWORD v14[2]; // [rsp+70h] [rbp-10h] BYREF

  sub_1800E0390(a1, v10);
  if ( v10[0] )
  {
    v12 = 0LL;
    v13 = 15LL;
    LOBYTE(v11) = 0;
    sub_180012190((__int64 *)&v11, "RenderOutput ColorBuffer", 0x18uLL);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800E2680((unsigned int)v14, (unsigned int)v10, v5, v4, (__int64)a2, (__int64)&v11);
    v6 = sub_18002850C(v10[0]);
    sub_180010EC0(v6, &v9);
    sub_18002A08C((__int64 *)v9, v14);
    v11 = v9;
    v9 = 0LL;
    sub_18002F050(a1, &v11);
    sub_180010910((__int64)&v9);
    sub_180010910((__int64)v14);
  }
  result = sub_180010910((__int64)v10);
  v8 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return result;
}
