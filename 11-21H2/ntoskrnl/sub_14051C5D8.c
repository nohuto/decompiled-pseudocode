/*
 * XREFs of sub_14051C5D8 @ 0x14051C5D8
 * Callers:
 *     sub_140524E30 @ 0x140524E30 (sub_140524E30.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14051C5D8(_QWORD *a1)
{
  __int64 v12; // rax
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-30h]

  memset(a1, 0, 0xC0uLL);
  *a1 |= 0x43uLL;
  _RAX = 1LL;
  *((_BYTE *)a1 + 9) = 2;
  __asm { cpuid }
  a1[2] = (unsigned int)_RAX;
  if ( sub_1403AAE50() == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RDX & 0x8000) != 0 )
    {
      v12 = a1[2];
      *a1 |= 0x2000uLL;
      LODWORD(v20) = v12;
      _RAX = 26LL;
      __asm { cpuid }
      HIDWORD(v20) = _RAX;
      a1[2] = v20;
    }
  }
  v18 = *((unsigned int *)KeGetCurrentPrcb() + 53);
  *a1 |= 0x100uLL;
  result = 0LL;
  a1[19] = v18;
  return result;
}
