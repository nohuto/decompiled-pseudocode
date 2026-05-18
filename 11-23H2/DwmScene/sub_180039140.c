/*
 * XREFs of sub_180039140 @ 0x180039140
 * Callers:
 *     sub_1800390BC @ 0x1800390BC (sub_1800390BC.c)
 *     sub_180039260 @ 0x180039260 (sub_180039260.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180039140(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
