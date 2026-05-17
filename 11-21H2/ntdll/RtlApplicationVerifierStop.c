/*
 * XREFs of RtlApplicationVerifierStop @ 0x1800E75E0
 * Callers:
 *     RtlCheckHeldCriticalSections @ 0x180084950 (RtlCheckHeldCriticalSections.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpPageHeapStop @ 0x1800E76DC (RtlpPageHeapStop.c)
 */

struct _PEB *__fastcall RtlApplicationVerifierStop(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x2000100) == 0x2000000 )
    return (struct _PEB *)RtlpPageHeapStop(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( AVrfpVerifierStopMessageFunction )
    return (struct _PEB *)((__int64 (__fastcall *)(__int64))AVrfpVerifierStopMessageFunction)(a1);
  return result;
}
