/*
 * XREFs of RtlTraceDatabaseLock @ 0x18010F680
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall RtlTraceDatabaseLock(__int64 a1)
{
  __int64 result; // rax

  result = RtlEnterCriticalSection(a1 + 48);
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
