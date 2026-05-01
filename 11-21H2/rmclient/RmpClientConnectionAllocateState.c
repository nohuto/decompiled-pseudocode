/*
 * XREFs of RmpClientConnectionAllocateState @ 0x18000A4D4
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x18000A458 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     HamIpcChannelAllocateState @ 0x180005C80 (HamIpcChannelAllocateState.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientConnectionAllocateState(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  _BYTE v4[8]; // [rsp+48h] [rbp-20h] BYREF

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021F00, 0, 0LL, a1, a2 + 16, v4).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Simple = HamIpcChannelAllocateState(a2 + 24, (__int64)v4);
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
