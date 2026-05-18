/*
 * XREFs of sub_18001FDF0 @ 0x18001FDF0
 * Callers:
 *     sub_1800FFE76 @ 0x1800FFE76 (sub_1800FFE76.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001FDF0(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  std::ostream::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
