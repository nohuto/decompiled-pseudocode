/*
 * XREFs of SymCryptFdefIntGetValueLsbits32 @ 0x1404000FC
 * Callers:
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140400C78 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntToModulus @ 0x140400E04 (SymCryptIntToModulus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetValueLsbits32(__int64 a1)
{
  return *(unsigned int *)(a1 + 32);
}
