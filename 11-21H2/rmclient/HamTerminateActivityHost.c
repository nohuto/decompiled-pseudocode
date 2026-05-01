/*
 * XREFs of HamTerminateActivityHost @ 0x18001DCB0
 * Callers:
 *     <none>
 * Callees:
 *     HamTerminateActivityHostEx @ 0x180001920 (HamTerminateActivityHostEx.c)
 */

CLIENT_CALL_RETURN __fastcall HamTerminateActivityHost(_QWORD *a1, __int64 a2, int a3, int a4)
{
  return HamTerminateActivityHostEx(a1, a2, a3, a4, 0LL, 0, 0);
}
