/*
 * XREFs of sub_180014DB0 @ 0x180014DB0
 * Callers:
 *     sub_1800149F4 @ 0x1800149F4 (sub_1800149F4.c)
 *     sub_18001BA30 @ 0x18001BA30 (sub_18001BA30.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180014DB0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
