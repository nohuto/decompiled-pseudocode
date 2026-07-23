/*
 * XREFs of sub_1406E6A28 @ 0x1406E6A28
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_14025A19C @ 0x14025A19C (sub_14025A19C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E6A98 @ 0x1406E6A98 (sub_1406E6A98.c)
 */

__int64 __fastcall sub_1406E6A28(unsigned int *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  result = sub_14025A19C((PVOID *)*a1, 1, &v3);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(__int128 *, unsigned int *, unsigned int *, _QWORD))sub_1406E6A98)(
             &v3,
             a1 + 6,
             a1 + 2,
             a1[10]);
  return result;
}
