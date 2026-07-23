/*
 * XREFs of sub_14023ADA4 @ 0x14023ADA4
 * Callers:
 *     sub_14023AC88 @ 0x14023AC88 (sub_14023AC88.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool __fastcall sub_14023ADA4(__int16 a1, char a2, char a3)
{
  bool result; // al

  if ( dword_140C09590 == -1 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX != 1752462657 )
      goto LABEL_5;
    if ( (_DWORD)_RDX != 1769238117 )
      goto LABEL_5;
    if ( (_DWORD)_RCX != 1145913699 )
      goto LABEL_5;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (((unsigned int)_RAX >> 8) & 0xF) != 0xF || (_RAX & 0xFF00000) != 0 )
    {
LABEL_5:
      result = 0;
      dword_140C09590 = 0;
      return result;
    }
    dword_140C09590 = 1;
  }
  else if ( dword_140C09590 != 1 )
  {
    return 0;
  }
  return !a1 && !a2 && (a3 & 0x1Fu) >= 0x18;
}
