/*
 * XREFs of sub_1800099BC @ 0x1800099BC
 * Callers:
 *     sub_18000238C @ 0x18000238C (sub_18000238C.c)
 *     sub_18000246C @ 0x18000246C (sub_18000246C.c)
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     sub_1800099B0 @ 0x1800099B0 (sub_1800099B0.c)
 *     sub_180019260 @ 0x180019260 (sub_180019260.c)
 *     sub_18001AE40 @ 0x18001AE40 (sub_18001AE40.c)
 *     sub_18001AE90 @ 0x18001AE90 (sub_18001AE90.c)
 *     sub_18001B25C @ 0x18001B25C (sub_18001B25C.c)
 *     sub_18001B450 @ 0x18001B450 (sub_18001B450.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800099BC(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
