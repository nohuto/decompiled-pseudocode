/*
 * XREFs of HalpCpuID @ 0x14036E1C0
 * Callers:
 *     HalpGetProcessorBrandString @ 0x140851E1C (HalpGetProcessorBrandString.c)
 *     HalpMcaSetFeatureFlags @ 0x140A91CE0 (HalpMcaSetFeatureFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpCpuID(unsigned int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  *a3 = _RBX;
  *a4 = _RCX;
  *a5 = _RDX;
  return result;
}
