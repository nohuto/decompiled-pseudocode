/*
 * XREFs of sub_140A55B88 @ 0x140A55B88
 * Callers:
 *     sub_140A557A0 @ 0x140A557A0 (sub_140A557A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140A55B88()
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // eax
  int v9; // eax

  byte_140C4A429 = 0;
  if ( (unsigned int)dword_140C4A400 >= 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RDX & 0x200000) != 0 )
    {
      v5 = __readmsr(0x1A0u);
      if ( (v5 & 0x1000) == 0 )
      {
        byte_140C4A428 = 1;
        v6 = __readmsr(0x345u);
        v7 = ((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 8) & 0xF;
        if ( (_DWORD)v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 == 1 )
                dword_140C4A464 = 200;
              else
                dword_140C4A464 = 0;
            }
            else
            {
              dword_140C4A464 = 192;
            }
          }
          else
          {
            dword_140C4A464 = 176;
          }
        }
        else
        {
          dword_140C4A464 = 144;
        }
        byte_140C4A429 = 1;
        dword_140C4A448 = 0;
      }
    }
  }
}
