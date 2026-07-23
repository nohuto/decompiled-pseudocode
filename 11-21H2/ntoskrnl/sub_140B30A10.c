/*
 * XREFs of sub_140B30A10 @ 0x140B30A10
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140B30A10()
{
  __int64 result; // rax
  _DWORD InputBuffer[26]; // [rsp+30h] [rbp-68h] BYREF
  __int64 OutputBuffer; // [rsp+A0h] [rbp+8h] BYREF

  OutputBuffer = 0LL;
  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u);
  result = OutputBuffer;
  xmmword_140C20768 = 0LL;
  *(_QWORD *)&xmmword_140C20768 = 0LL;
  qword_140C20760 = OutputBuffer;
  return result;
}
