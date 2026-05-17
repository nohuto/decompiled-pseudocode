/*
 * XREFs of RtlTraceDatabaseValidate @ 0x18010F6D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlEnterCriticalSection(a1 + 48);
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection(a1 + 48);
  return 1;
}
