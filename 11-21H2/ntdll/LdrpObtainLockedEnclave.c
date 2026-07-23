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

PVOID *__fastcall LdrpObtainLockedEnclave(_BYTE *a1, char a2)
{
  PVOID *i; // rbx
  PVOID *v5; // r8

  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v5 = (PVOID *)LdrpEnclaveList;
    while ( v5 != &LdrpEnclaveList )
    {
      i = v5;
      if ( a2 )
      {
        if ( a1 == v5[9] )
          break;
      }
      else if ( a1 >= v5[9] && a1 - (_BYTE *)v5[9] < (unsigned __int64)v5[10] )
      {
        break;
      }
      v5 = (PVOID *)*v5;
      i = 0LL;
    }
    if ( i )
      _InterlockedIncrement((volatile signed __int32 *)i + 15);
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    if ( !i )
      break;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
    if ( i[9] )
      return i;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
  }
  return 0LL;
}
