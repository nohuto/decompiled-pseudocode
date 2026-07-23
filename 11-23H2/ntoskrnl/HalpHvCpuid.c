/*
 * XREFs of HalpHvCpuid @ 0x14050B810
 * Callers:
 *     HalpInterruptGetIrtInfo @ 0x14081E840 (HalpInterruptGetIrtInfo.c)
 *     HalpInitializeProfiling @ 0x140A91264 (HalpInitializeProfiling.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpHvCpuid(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
