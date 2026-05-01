/*
 * XREFs of sub_1800089B0 @ 0x1800089B0
 * Callers:
 *     sub_180003DC0 @ 0x180003DC0 (sub_180003DC0.c)
 *     sub_180003EA0 @ 0x180003EA0 (sub_180003EA0.c)
 *     sub_180004230 @ 0x180004230 (sub_180004230.c)
 *     sub_18001AE40 @ 0x18001AE40 (sub_18001AE40.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800089B0(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( !v2 )
    return 0LL;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
