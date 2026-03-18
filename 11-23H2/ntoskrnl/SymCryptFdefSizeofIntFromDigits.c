/*
 * XREFs of SymCryptFdefSizeofIntFromDigits @ 0x140405B7C
 * Callers:
 *     SymCryptSizeofIntFromDigits @ 0x1403F9A70 (SymCryptSizeofIntFromDigits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefSizeofIntFromDigits(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (unsigned int)((a1 << 6) + 32);
}
