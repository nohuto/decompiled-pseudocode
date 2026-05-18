/*
 * XREFs of sub_180055904 @ 0x180055904
 * Callers:
 *     sub_180055778 @ 0x180055778 (sub_180055778.c)
 *     sub_180056BB4 @ 0x180056BB4 (sub_180056BB4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180055904(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
