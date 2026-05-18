/*
 * XREFs of sub_1800B4468 @ 0x1800B4468
 * Callers:
 *     sub_1800B4028 @ 0x1800B4028 (sub_1800B4028.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B4468(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  return *(unsigned int *)(a1 + 36);
}
