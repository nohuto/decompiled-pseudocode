/*
 * XREFs of WPP_SF_ddi @ 0x1C007E104
 * Callers:
 *     ParseSecretProtection @ 0x1C007DC40 (ParseSecretProtection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_ddi(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f4474686c3923574d740efc113fafe26_Traceguids);
}
