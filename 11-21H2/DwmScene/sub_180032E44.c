/*
 * XREFs of sub_180032E44 @ 0x180032E44
 * Callers:
 *     sub_1801008C2 @ 0x1801008C2 (sub_1801008C2.c)
 *     sub_180100BDA @ 0x180100BDA (sub_180100BDA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032E44(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
