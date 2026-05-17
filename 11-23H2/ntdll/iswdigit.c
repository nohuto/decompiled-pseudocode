/*
 * XREFs of iswdigit @ 0x180092DD0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x18001CC20 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
