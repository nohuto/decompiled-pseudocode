/*
 * XREFs of MmIsVerifierEnabled @ 0x140A7BDF0
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  NTSTATUS v1; // ebx

  v1 = 0;
  if ( VerifierFlags )
  {
    if ( (_QWORD)xmmword_140C1B2B0 )
    {
      if ( (unsigned int)sub_1402DA4B0()
        && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
        || (qword_140D01450 & 0x10) != 0 && (qword_140D01450 & 0x400000) == 0 )
      {
        *VerifierFlags = dword_140C29FC0;
        return v1;
      }
      *VerifierFlags = 0;
    }
    else
    {
      *VerifierFlags = 0;
    }
    return -1073741637;
  }
  return -1073741637;
}
