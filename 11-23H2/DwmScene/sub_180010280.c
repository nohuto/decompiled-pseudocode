/*
 * XREFs of sub_180010280 @ 0x180010280
 * Callers:
 *     sub_180010260 @ 0x180010260 (sub_180010260.c)
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010280(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
