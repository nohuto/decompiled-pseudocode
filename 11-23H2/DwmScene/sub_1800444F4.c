/*
 * XREFs of sub_1800444F4 @ 0x1800444F4
 * Callers:
 *     sub_180043CE0 @ 0x180043CE0 (sub_180043CE0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180043604 @ 0x180043604 (sub_180043604.c)
 *     sub_180060A34 @ 0x180060A34 (sub_180060A34.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800444F4(__int64 a1, _QWORD *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  unsigned __int16 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  sub_180043604(a1 + 200, (__int64)&v15);
  if ( sub_180011DE0(a2) )
  {
    *(_DWORD *)(v8 + 32) = 2;
    v9 = (_QWORD *)sub_180060A34(*(_QWORD *)(a1 + 136), v13);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)*v9 + 56LL))(*v9, a1, a2, a3);
  }
  else
  {
    *(_DWORD *)(v8 + 32) = 3;
    v11 = (_QWORD *)sub_180060A34(*(_QWORD *)(a1 + 136), v13);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)*v11 + 64LL))(*v11, a1, a4, a3);
  }
  if ( v14 )
    result = sub_180010530(v14);
  v12 = a2[1];
  if ( v12 )
    return sub_180010530(v12);
  return result;
}
