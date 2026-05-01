/*
 * XREFs of sub_180009000 @ 0x180009000
 * Callers:
 *     sub_18000BD28 @ 0x18000BD28 (sub_18000BD28.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

signed int __fastcall sub_180009000(ULONGLONG *CallbackContext)
{
  bool v1; // zf
  signed int result; // eax
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = CallbackContext[4] == 0;
  ProviderId = *(GUID *)(CallbackContext[1] - 16);
  if ( !v1 )
    __fastfail(5u);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  result = EventRegister(&ProviderId, EnableCallback, CallbackContext, CallbackContext + 4);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    EventSetInformation(
      CallbackContext[4],
      2LL,
      CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1],
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
    return 0;
  }
  return result;
}
