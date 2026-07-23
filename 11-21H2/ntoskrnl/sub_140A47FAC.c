/*
 * XREFs of sub_140A47FAC @ 0x140A47FAC
 * Callers:
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char sub_140A47FAC()
{
  char v0; // bl

  v0 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C68, 0LL);
  if ( dword_140C48C88 < 0 )
  {
    v0 = 1;
    dword_140C48C88 ^= (dword_140C48C88 ^ (dword_140C48C88 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C48C68);
  sub_1402AFC00((ULONG_PTR)&qword_140C48C68);
  return v0;
}
