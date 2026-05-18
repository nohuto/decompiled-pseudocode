/*
 * XREFs of sub_1800A2150 @ 0x1800A2150
 * Callers:
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A2150(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  return *(unsigned int *)(a1 + 36);
}
