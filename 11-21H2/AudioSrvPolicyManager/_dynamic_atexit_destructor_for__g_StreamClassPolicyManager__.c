/*
 * XREFs of _dynamic_atexit_destructor_for__g_StreamClassPolicyManager__ @ 0x180046B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 dynamic_atexit_destructor_for__g_StreamClassPolicyManager__()
{
  __int64 result; // rax

  if ( g_StreamClassPolicyManager )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_StreamClassPolicyManager + 16LL))(g_StreamClassPolicyManager);
  return result;
}
