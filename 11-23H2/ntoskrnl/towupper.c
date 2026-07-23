/*
 * XREFs of towupper @ 0x1403DB9B0
 * Callers:
 *     PfSnParametersVerify @ 0x140846EA4 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1406DA2B0 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
