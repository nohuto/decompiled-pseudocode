/*
 * XREFs of sub_180011700 @ 0x180011700
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DF6B0 @ 0x1800DF6B0 (sub_1800DF6B0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011700(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  if ( !(_BYTE)result )
    return sub_1800DF6B0(a1);
  return result;
}
