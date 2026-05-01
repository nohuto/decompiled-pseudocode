/*
 * XREFs of HamTerminateActivityHost @ 0x18001E780
 * Callers:
 *     <none>
 * Callees:
 *     HamTerminateActivityHostEx @ 0x180002900 (HamTerminateActivityHostEx.c)
 */

CLIENT_CALL_RETURN __fastcall HamTerminateActivityHost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HamTerminateActivityHostEx(a1, a2, a3, a4, 0LL, 0, 0);
}
