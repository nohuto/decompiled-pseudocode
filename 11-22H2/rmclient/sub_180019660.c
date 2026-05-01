/*
 * XREFs of sub_180019660 @ 0x180019660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2, a3);
  else
    return 2147942414LL;
}
