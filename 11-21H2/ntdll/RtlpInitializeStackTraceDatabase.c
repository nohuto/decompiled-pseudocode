/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x18010E150
 * Callers:
 *     RtlControlStackTraceDataBase @ 0x18010DC78 (RtlControlStackTraceDataBase.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlStdDeleteStackDatabase @ 0x18010DD50 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x18010DD90 (RtlStdInitializeStackDatabase.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(void *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  NTSTATUS v4; // ebx
  signed __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  if ( RtlpStackTraceDatabase )
    return 3221225994LL;
  v4 = RtlStdInitializeStackDatabase(a1, a2, a3, &v5);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpStackTraceDatabase, v5, 0LL) )
    {
      RtlStdDeleteStackDatabase((_QWORD *)v5);
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
