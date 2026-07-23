/*
 * XREFs of SymCryptIntGetBits @ 0x1403F95CC
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8C78 (SymCryptEckeySetValue.c)
 *     SymCryptModExpWindowed @ 0x140409560 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntGetBits @ 0x1404035D8 (SymCryptFdefIntGetBits.c)
 */

__int64 SymCryptIntGetBits()
{
  return SymCryptFdefIntGetBits();
}
