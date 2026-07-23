/*
 * XREFs of sub_140372940 @ 0x140372940
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140372940(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 result; // rax

  _RAX = a2;
  __asm { cpuid }
  *a3 = result;
  *a4 = _RBX;
  *a5 = _RCX;
  *a6 = _RDX;
  return result;
}
