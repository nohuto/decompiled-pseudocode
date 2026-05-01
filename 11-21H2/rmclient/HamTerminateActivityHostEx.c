/*
 * XREFs of HamTerminateActivityHostEx @ 0x180001920
 * Callers:
 *     HamTerminateActivityHost @ 0x18001DCB0 (HamTerminateActivityHost.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateActivityHostEx(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7)
{
  CLIENT_CALL_RETURN result; // rax

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xBu, 0LL, *a1, a2, a3, a4, a5, a6, a7).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
