/*
 * XREFs of sub_1800434A0 @ 0x1800434A0
 * Callers:
 *     sub_180047644 @ 0x180047644 (sub_180047644.c)
 * Callees:
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800434A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  result = sub_1800436D4(a1);
  v5 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v5; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 40LL))(*i, a2);
  }
  return result;
}
