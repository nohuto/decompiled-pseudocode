/*
 * XREFs of PopCreateIdlePhaseWatchdog @ 0x140B75398
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     ZwPowerInformation @ 0x14041BCD0 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 PopCreateIdlePhaseWatchdog()
{
  __int64 result; // rax
  _DWORD InputBuffer[26]; // [rsp+30h] [rbp-68h] BYREF
  __int64 OutputBuffer; // [rsp+A0h] [rbp+8h] BYREF

  OutputBuffer = 0LL;
  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u);
  result = OutputBuffer;
  xmmword_140C39F08 = 0LL;
  *(_QWORD *)&xmmword_140C39F08 = 0LL;
  PopPdcIdlePhaseWatchdogContext = OutputBuffer;
  return result;
}
