/*
 * XREFs of towupper @ 0x1403DB7D0
 * Callers:
 *     PfSnParametersVerify @ 0x140846BA4 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1406DA280 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
