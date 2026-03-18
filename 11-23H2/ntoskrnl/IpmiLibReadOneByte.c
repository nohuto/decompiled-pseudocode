/*
 * XREFs of IpmiLibReadOneByte @ 0x140677C6C
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14067811C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x140678268 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406784D8 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x1406786C0 (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140C2CC30) )
    return __inbyte(xmmword_140C2CC80 + a2 * BYTE8(WheaIpmiContext));
  else
    return *(_BYTE *)(xmmword_140C2CC80 + BYTE8(WheaIpmiContext) * (unsigned int)a2);
}
