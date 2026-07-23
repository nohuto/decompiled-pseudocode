/*
 * XREFs of RtlGetProcessorSignature @ 0x1403A7CA8
 * Callers:
 *     RtlInitFunctionOverrideCapabilities @ 0x1403A7A38 (RtlInitFunctionOverrideCapabilities.c)
 * Callees:
 *     RtlGetCpuVendor @ 0x1403A7D44 (RtlGetCpuVendor.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall RtlGetProcessorSignature(_BYTE *a1, _BYTE *a2, _WORD *a3, _BYTE *a4, _BYTE *a5)
{
  unsigned int v13; // esi
  char result; // al

  _RAX = 1LL;
  __asm { cpuid }
  v13 = _RAX;
  *a1 = RtlGetCpuVendor(_RCX);
  *a2 = BYTE1(v13) & 0xF;
  result = (v13 >> 4) & 0xF;
  *a3 = (unsigned __int8)(v13 >> 20);
  *a4 = result;
  *a5 = BYTE2(v13) & 0xF;
  return result;
}
