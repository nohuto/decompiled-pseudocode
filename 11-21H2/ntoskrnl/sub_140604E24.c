/*
 * XREFs of sub_140604E24 @ 0x140604E24
 * Callers:
 *     sub_140604DC0 @ 0x140604DC0 (sub_140604DC0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

unsigned __int64 __fastcall sub_140604E24(char a1)
{
  unsigned __int64 result; // rax

  qword_140C1A7E0 = qword_140D01450;
  result = (unsigned int)dword_140C1ACA0;
  dword_140C18FD8 = dword_140C1ACA0;
  if ( !a1 )
  {
    dword_140C18FD0 = dword_140C1AA88;
    return (unsigned __int64)memmove(word_140C18FE0, qword_140D6A8E0, (unsigned int)dword_140D68150);
  }
  return result;
}
