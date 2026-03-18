/*
 * XREFs of SymCryptIntDivPow2 @ 0x1403F938C
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x1403F9AB8 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptFdefModInvGeneric @ 0x1404044E0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFixedWindowRecoding @ 0x140409A28 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140409B84 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntDivPow2 @ 0x1404032FC (SymCryptFdefIntDivPow2.c)
 */

__int64 SymCryptIntDivPow2()
{
  return SymCryptFdefIntDivPow2();
}
