/*
 * XREFs of sub_1800336BC @ 0x1800336BC
 * Callers:
 *     sub_180100776 @ 0x180100776 (sub_180100776.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800336BC(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  std::wostream::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
