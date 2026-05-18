/*
 * XREFs of sub_1800A8D68 @ 0x1800A8D68
 * Callers:
 *     sub_1800A8CE0 @ 0x1800A8CE0 (sub_1800A8CE0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_1800A8D68(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  _UNKNOWN **result; // rax
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = *(_QWORD **)(a1 + 160);
  for ( i = *(_QWORD **)(a1 + 152); i != v7; i += 2 )
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)*i + 8LL))(
                            *i,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6);
  return result;
}
