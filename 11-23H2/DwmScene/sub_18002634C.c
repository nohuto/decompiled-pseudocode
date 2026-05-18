/*
 * XREFs of sub_18002634C @ 0x18002634C
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_180026DBC @ 0x180026DBC (sub_180026DBC.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_1800A18F0 @ 0x1800A18F0 (sub_1800A18F0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002634C(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 *v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // r8
  _QWORD *v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rcx
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a2;
  v12[0] = *a2;
  v4 = a2[1];
  v12[1] = v4;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180026DBC(a1, v14);
  sub_18002A0C4(a1 + 24, v13);
  v5 = *(__int64 **)(a1 + 248);
  if ( v5 != *(__int64 **)(a1 + 256) )
  {
    while ( 1 )
    {
      v6 = v5 + 2;
      if ( sub_180015678(v5, v12) )
        break;
      v5 = v6;
      if ( v6 == v7 )
        goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_1800A18F0(*v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    v9 = *(__int64 **)(a1 + 256);
    while ( v6 != v9 )
    {
      sub_180011020(v6 - 2, v6);
      v6 += 2;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 256) - 8LL);
    if ( v10 )
      sub_180010530(v10);
    *(_QWORD *)(a1 + 256) -= 16LL;
  }
LABEL_11:
  sub_180010F54((__int64)v13);
  result = sub_180010F54((__int64)v14);
  if ( v4 )
    return sub_180010530(v4);
  return result;
}
