/*
 * XREFs of sub_14050E264 @ 0x14050E264
 * Callers:
 *     sub_14084476C @ 0x14084476C (sub_14084476C.c)
 *     sub_140A54FB4 @ 0x140A54FB4 (sub_140A54FB4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14050E264(unsigned int a1, _DWORD *a2)
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
