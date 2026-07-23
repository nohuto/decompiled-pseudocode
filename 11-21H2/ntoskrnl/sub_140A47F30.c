/*
 * XREFs of sub_140A47F30 @ 0x140A47F30
 * Callers:
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 sub_140A47F30()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C68, 0LL);
  dword_140C48C88 ^= (dword_140C48C88 ^ (dword_140C48C88 - 1)) & 0x7FFFFFFF;
  if ( (dword_140C48C88 & 0x7FFFFFFF) == 0 && qword_140C48C80 )
    KeSetEvent(qword_140C48C80, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C48C68);
  return sub_1402AFC00((ULONG_PTR)&qword_140C48C68);
}
