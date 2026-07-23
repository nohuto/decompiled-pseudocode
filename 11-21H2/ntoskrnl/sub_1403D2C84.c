/*
 * XREFs of sub_1403D2C84 @ 0x1403D2C84
 * Callers:
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 sub_1403D2C84()
{
  __int64 result; // rax

  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)result >= 0x80000008 )
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    result = (1LL << _RAX) - 1;
    qword_140C09798 = result;
  }
  return result;
}
