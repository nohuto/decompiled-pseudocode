/*
 * XREFs of GetStreamId @ 0x1C0012E9C
 * Callers:
 *     BuildReadWriteCommand @ 0x1C0011154 (BuildReadWriteCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetStreamId(__int64 a1, __int64 a2, int a3)
{
  if ( (*(_BYTE *)(a1 + 4008) & 3) == 3 && *(unsigned __int8 *)(a1 + 4009) == a3 && *(_WORD *)(a1 + 4012) )
    StorPortExtendedFunction(28LL, a1, a2);
  return 0LL;
}
