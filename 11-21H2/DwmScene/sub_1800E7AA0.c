/*
 * XREFs of sub_1800E7AA0 @ 0x1800E7AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E7AA0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
  {
    if ( a2[3] >= 8uLL )
      a2 = (_QWORD *)*a2;
    return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 40LL))(v2, a2);
  }
  return result;
}
