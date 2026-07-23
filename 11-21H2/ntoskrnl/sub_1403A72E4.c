/*
 * XREFs of sub_1403A72E4 @ 0x1403A72E4
 * Callers:
 *     sub_1402A1AEC @ 0x1402A1AEC (sub_1402A1AEC.c)
 *     sub_140389CB0 @ 0x140389CB0 (sub_140389CB0.c)
 *     sub_1407FA9D0 @ 0x1407FA9D0 (sub_1407FA9D0.c)
 * Callees:
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1403A72E4(ULONG_PTR a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(a1, -10000LL * a2, 0LL, (__int64)v3);
  }
  return result;
}
