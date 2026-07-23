/*
 * XREFs of sub_140A5736C @ 0x140A5736C
 * Callers:
 *     sub_140A56CDC @ 0x140A56CDC (sub_140A56CDC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140A5736C(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r10
  unsigned int v3; // r8d
  __int64 result; // rax
  int v13; // r9d

  v1 = (unsigned int)BugCheckParameter2;
  _RAX = 0LL;
  v3 = 0;
  __asm { cpuid }
  if ( (unsigned int)result >= 0x20 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v13 = _RAX;
    _RAX = 32LL;
    __asm { cpuid }
    if ( (v13 & 0x400000) != 0 )
      v3 = (_RBX & 1) != 0;
  }
  if ( (_DWORD)v1 )
  {
    result = (unsigned int)dword_140D06B0C;
    if ( (_DWORD)dword_140D06B0C != v3 )
      KeBugCheckEx(0x5Du, 0x48524553uLL, v1, (unsigned int)dword_140D06B0C, v3);
  }
  else
  {
    LODWORD(dword_140D06B0C) = v3;
  }
  if ( v3 )
  {
    result = v3;
    __writemsr(0x17DAu, v3);
  }
  return result;
}
