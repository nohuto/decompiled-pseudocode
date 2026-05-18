/*
 * XREFs of sub_18007E470 @ 0x18007E470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180044B2C @ 0x180044B2C (sub_180044B2C.c)
 *     sub_180048440 @ 0x180048440 (sub_180048440.c)
 *     sub_18004B9E4 @ 0x18004B9E4 (sub_18004B9E4.c)
 *     sub_18004BAFC @ 0x18004BAFC (sub_18004BAFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18007E470(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  sub_18004B9E4(a2, (__int64)&v12);
  if ( (unsigned __int8)sub_180044B2C(v12, v5, v6) )
  {
    v7 = sub_180026618(a3);
    v8 = sub_180034094(v7, 1);
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D48C8, 0LL);
  }
  v9 = (__int64 *)sub_18004BAFC(a2, &v14);
  sub_180048440(*v9, v10, v11);
  if ( v15 )
    sub_180010530(v15);
  if ( v13 )
    sub_180010530(v13);
}
