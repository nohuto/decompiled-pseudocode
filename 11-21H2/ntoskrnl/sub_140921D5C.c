/*
 * XREFs of sub_140921D5C @ 0x140921D5C
 * Callers:
 *     sub_14069F374 @ 0x14069F374 (sub_14069F374.c)
 *     sub_140921ADC @ 0x140921ADC (sub_140921ADC.c)
 *     sub_140921D8C @ 0x140921D8C (sub_140921D8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140921D5C(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 16;
  else
    return *(_QWORD *)(a1 + 80) + 32 * (a2 - 2LL);
}
