/*
 * XREFs of LdrpObtainLockedEnclave @ 0x1800D9138
 * Callers:
 *     LdrDeleteEnclave @ 0x1800D8380 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D8410 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D8510 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D85B0 (LdrLoadEnclaveModule.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8EB0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 i; // rbx
  __int64 *v5; // r8

  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v5 = (__int64 *)LdrpEnclaveList;
    while ( v5 != &LdrpEnclaveList )
    {
      i = (__int64)v5;
      if ( a2 )
      {
        if ( a1 == v5[9] )
          break;
      }
      else if ( a1 >= v5[9] && a1 - v5[9] < v5[10] )
      {
        break;
      }
      v5 = (__int64 *)*v5;
      i = 0LL;
    }
    if ( i )
      _InterlockedIncrement((volatile signed __int32 *)(i + 60));
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    if ( !i )
      break;
    RtlEnterCriticalSection(i + 16);
    if ( *(_QWORD *)(i + 72) )
      return i;
    RtlLeaveCriticalSection(i + 16);
  }
  return 0LL;
}
