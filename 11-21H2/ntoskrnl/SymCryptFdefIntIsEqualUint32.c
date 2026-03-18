/*
 * XREFs of SymCryptFdefIntIsEqualUint32 @ 0x14040D2C4
 * Callers:
 *     SymCryptIntIsEqualUint32 @ 0x140400C90 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntToModulus @ 0x140400E04 (SymCryptIntToModulus.c)
 * Callees:
 *     SymCryptFdefRawIsEqualUint32 @ 0x14040D478 (SymCryptFdefRawIsEqualUint32.c)
 */

__int64 __fastcall SymCryptFdefIntIsEqualUint32(__int64 a1, unsigned int a2)
{
  return SymCryptFdefRawIsEqualUint32(a1 + 32, *(unsigned int *)(a1 + 4), a2);
}
