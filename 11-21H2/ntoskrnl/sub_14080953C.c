/*
 * XREFs of sub_14080953C @ 0x14080953C
 * Callers:
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_14080953C(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // ett

  _m_prefetchw(&stru_140C24040);
  LODWORD(result) = stru_140C24040.HandleAttributes;
  do
  {
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)&stru_140C24040, result, result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1CB48, 0LL);
    qword_140C1CB80 = a1;
    dword_140C1CB88 = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C1CB48);
    return sub_1402AFC00((ULONG_PTR)&qword_140C1CB48);
  }
  return result;
}
