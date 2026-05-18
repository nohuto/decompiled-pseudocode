/*
 * XREFs of sub_18003D00C @ 0x18003D00C
 * Callers:
 *     sub_180041924 @ 0x180041924 (sub_180041924.c)
 * Callees:
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D00C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  result = sub_18003E370();
  v5 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v5; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 48LL))(*i, a2);
  }
  return result;
}
