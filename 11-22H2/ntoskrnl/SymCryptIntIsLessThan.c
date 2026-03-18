/*
 * XREFs of SymCryptIntIsLessThan @ 0x1403F8DD4
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403F9C8C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcpointSetValue @ 0x1403FEC00 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefIntIsLessThan @ 0x140402DF8 (SymCryptFdefIntIsLessThan.c)
 */

__int64 SymCryptIntIsLessThan()
{
  return SymCryptFdefIntIsLessThan();
}
