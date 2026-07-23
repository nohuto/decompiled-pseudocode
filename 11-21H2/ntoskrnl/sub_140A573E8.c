/*
 * XREFs of sub_140A573E8 @ 0x140A573E8
 * Callers:
 *     sub_140A56CDC @ 0x140A56CDC (sub_140A56CDC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140A573E8(__int64 a1, unsigned int a2)
{
  ULONG_PTR v3; // r10
  unsigned int v4; // r8d
  __int64 result; // rax

  _RAX = 0LL;
  v3 = a2;
  v4 = 1;
  __asm { cpuid }
  if ( (unsigned int)result >= 6 )
  {
    _RAX = 6LL;
    __asm { cpuid }
    result = _RAX & 0x880000;
    if ( (_DWORD)result == 8912896 )
    {
      v4 = BYTE1(_RCX);
      if ( BYTE1(_RCX) > 8u )
        KeBugCheckEx(0x5Du, 0x48475350uLL, v3, 8uLL, BYTE1(_RCX));
    }
  }
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)qword_140D05350 != v4 )
      KeBugCheckEx(0x5Du, 0x48475350uLL, v3, (unsigned int)qword_140D05350, v4);
  }
  else
  {
    LODWORD(qword_140D05350) = v4;
  }
  return result;
}
