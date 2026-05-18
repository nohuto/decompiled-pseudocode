/*
 * XREFs of sub_180088934 @ 0x180088934
 * Callers:
 *     sub_18008863C @ 0x18008863C (sub_18008863C.c)
 *     sub_1800888BC @ 0x1800888BC (sub_1800888BC.c)
 *     sub_180089084 @ 0x180089084 (sub_180089084.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180088934(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
