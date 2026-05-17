/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x18010F780
 * Callers:
 *     RtlControlStackTraceDataBase @ 0x18010F2A8 (RtlControlStackTraceDataBase.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlStdDeleteStackDatabase @ 0x18010F380 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x18010F3C0 (RtlStdInitializeStackDatabase.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v4; // ebx
  signed __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  if ( RtlpStackTraceDatabase )
    return 3221225994LL;
  v4 = RtlStdInitializeStackDatabase(a1, a2, a3, &v5);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange64(&RtlpStackTraceDatabase, v5, 0LL) )
    {
      RtlStdDeleteStackDatabase();
      return 3221225994LL;
    }
    if ( LdrInitState == 3 )
    {
      v5 = 0x800000000000001LL;
      v6 = 0x8000000;
      RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpStackTraceDatabaseHeapEnum, (__int64)&v5, 0);
    }
  }
  return (unsigned int)v4;
}
