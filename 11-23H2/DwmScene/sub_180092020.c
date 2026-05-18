/*
 * XREFs of sub_180092020 @ 0x180092020
 * Callers:
 *     sub_1800916AC @ 0x1800916AC (sub_1800916AC.c)
 *     sub_180091F50 @ 0x180091F50 (sub_180091F50.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180092020(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
