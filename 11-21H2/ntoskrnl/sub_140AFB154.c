/*
 * XREFs of sub_140AFB154 @ 0x140AFB154
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_140A560D0 @ 0x140A560D0 (sub_140A560D0.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 */

char sub_140AFB154()
{
  char v0; // al
  char result; // al

  MEMORY[0xFFFFF780000002D5] = MEMORY[0xFFFFF780000002D5] & 0xFC | 1;
  if ( !strstr(*(const char **)(qword_140D068D0 + 216), "NOEXECUTE=ALWAYSON") )
  {
    if ( strstr(*(const char **)(qword_140D068D0 + 216), "NOEXECUTE=OPTOUT") )
    {
      v0 = MEMORY[0xFFFFF780000002D5] | 3;
    }
    else if ( strstr(*(const char **)(qword_140D068D0 + 216), "NOEXECUTE=OPTIN")
           || !strstr(*(const char **)(qword_140D068D0 + 216), "NOEXECUTE=ALWAYSOFF")
           && (strstr(*(const char **)(qword_140D068D0 + 216), "NOEXECUTE")
            || !strstr(*(const char **)(qword_140D068D0 + 216), "EXECUTE")) )
    {
      v0 = MEMORY[0xFFFFF780000002D5] & 0xFC | 2;
    }
    else
    {
      v0 = MEMORY[0xFFFFF780000002D5] & 0xFC;
    }
    MEMORY[0xFFFFF780000002D5] = v0;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RDX & 0x4000000) != 0 && (unsigned int)sub_140A56B08() == 2 )
    byte_140C54EDE = 1;
  result = sub_140A560D0();
  if ( result )
  {
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x800);
    result = 1;
    MEMORY[0xFFFFF78000000280] = 1;
  }
  return result;
}
