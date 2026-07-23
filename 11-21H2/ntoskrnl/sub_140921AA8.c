/*
 * XREFs of sub_140921AA8 @ 0x140921AA8
 * Callers:
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 * Callees:
 *     sub_140921ADC @ 0x140921ADC (sub_140921ADC.c)
 */

__int64 __fastcall sub_140921AA8(void *a1)
{
  void *i; // rbx
  __int64 result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = sub_140921ADC(a1);
    if ( (int)result < 0 )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)i + 16LL) & 2) == 0 )
      return 0LL;
  }
  return result;
}
