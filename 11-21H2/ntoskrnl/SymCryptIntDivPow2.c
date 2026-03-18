/*
 * XREFs of SymCryptIntDivPow2 @ 0x140400C00
 * Callers:
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x140401398 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFixedWindowRecoding @ 0x140411408 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140411568 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntDivPow2 @ 0x14040AC0C (SymCryptFdefIntDivPow2.c)
 */

__int64 SymCryptIntDivPow2()
{
  return SymCryptFdefIntDivPow2();
}
