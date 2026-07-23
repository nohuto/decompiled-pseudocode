/*
 * XREFs of RtlTraceDatabaseValidate @ 0x180110B50
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return 1;
}
