/*
 * XREFs of PopIsMktmeEnabled @ 0x140AA33EC
 * Callers:
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x140A888A0 (KiGetCpuVendor.c)
 */

bool PopIsMktmeEnabled()
{
  char v0; // di
  unsigned __int64 v11; // rax

  v0 = 0;
  if ( (unsigned int)KiGetCpuVendor() == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RCX & 0x2000) != 0 )
      {
        v11 = __readmsr(0x982u);
        if ( (v11 & 2) != 0 )
          return (v11 & 0xF00000000LL) != 0;
      }
    }
  }
  return v0;
}
