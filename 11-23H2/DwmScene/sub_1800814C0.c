/*
 * XREFs of sub_1800814C0 @ 0x1800814C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008156C @ 0x18008156C (sub_18008156C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800814C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_18008156C();
  result = *a4;
  if ( (*(_DWORD *)(*a4 + 440) & 0x10000) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 160LL))(a1, a2, a3, a4);
  return result;
}
