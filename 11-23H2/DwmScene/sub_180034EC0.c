/*
 * XREFs of sub_180034EC0 @ 0x180034EC0
 * Callers:
 *     sub_180015AE0 @ 0x180015AE0 (sub_180015AE0.c)
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_1800354F0 @ 0x1800354F0 (sub_1800354F0.c)
 *     sub_1800356DC @ 0x1800356DC (sub_1800356DC.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180074440 @ 0x180074440 (sub_180074440.c)
 *     sub_18007444C @ 0x18007444C (sub_18007444C.c)
 *     sub_180074634 @ 0x180074634 (sub_180074634.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_180034EC0(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  _UNKNOWN **result; // rax
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64); // r14
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v17[7]; // [rsp+50h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 912);
  if ( v9 )
  {
    sub_18001246C(&v16, a4);
    v11 = sub_18001246C(v17, v10);
    sub_18007444C(a1 + 368, v11);
    v12 = sub_180074440();
    v13 = sub_180074634(v12);
    result = (_UNKNOWN **)v9(a1, a2, v13);
  }
  v14 = *(_QWORD *)(a3 + 8);
  if ( v14 )
    result = (_UNKNOWN **)sub_180010530(v14);
  v15 = a4[1];
  if ( v15 )
    return (_UNKNOWN **)sub_180010530(v15);
  return result;
}
