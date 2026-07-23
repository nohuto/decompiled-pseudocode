/*
 * XREFs of WdiDispatchControl @ 0x1407E56FC
 * Callers:
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 * Callees:
 *     EtwGetProviderIdFromHandle @ 0x1403697B4 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x1407E576C (WdipStartEndScenario.c)
 */

__int64 __fastcall WdiDispatchControl(unsigned int *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  result = EtwGetProviderIdFromHandle((ULONG_PTR *)*a1, 1, &v3);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(__int128 *, unsigned int *, unsigned int *, _QWORD))WdipStartEndScenario)(
             &v3,
             a1 + 6,
             a1 + 2,
             a1[10]);
  return result;
}
