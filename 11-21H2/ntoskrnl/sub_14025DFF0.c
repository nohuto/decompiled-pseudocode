/*
 * XREFs of sub_14025DFF0 @ 0x14025DFF0
 * Callers:
 *     sub_140856CE8 @ 0x140856CE8 (sub_140856CE8.c)
 *     sub_140A5B19C @ 0x140A5B19C (sub_140A5B19C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14025DFF0(unsigned int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
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
