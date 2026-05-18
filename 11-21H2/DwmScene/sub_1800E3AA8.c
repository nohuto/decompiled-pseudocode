/*
 * XREFs of sub_1800E3AA8 @ 0x1800E3AA8
 * Callers:
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     sub_1800ED91C @ 0x1800ED91C (sub_1800ED91C.c)
 * Callees:
 *     sub_1800E3B1C @ 0x1800E3B1C (sub_1800E3B1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E3AA8(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v6[0] = 0LL;
  v7 = 0LL;
  if ( &v7 != a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
  }
  result = sub_1800E3B1C(a1, &v7, v6, a3);
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
