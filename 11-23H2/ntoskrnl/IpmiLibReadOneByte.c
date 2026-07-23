/*
 * XREFs of IpmiLibReadOneByte @ 0x1406781BC
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14067866C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x1406787B8 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x140678A28 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x140678C10 (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140C2CBF0) )
    return __inbyte(xmmword_140C2CC40 + a2 * BYTE8(WheaIpmiContext));
  else
    return *(_BYTE *)(xmmword_140C2CC40 + BYTE8(WheaIpmiContext) * (unsigned int)a2);
}
