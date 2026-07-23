/*
 * XREFs of RtlInitUTF8String @ 0x1405E4060
 * Callers:
 *     sub_1408523B4 @ 0x1408523B4 (sub_1408523B4.c)
 * Callees:
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitString(DestinationString, SourceString);
}
