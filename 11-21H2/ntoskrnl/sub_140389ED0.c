/*
 * XREFs of sub_140389ED0 @ 0x140389ED0
 * Callers:
 *     sub_140300534 @ 0x140300534 (sub_140300534.c)
 *     sub_1403763A8 @ 0x1403763A8 (sub_1403763A8.c)
 *     sub_14066B830 @ 0x14066B830 (sub_14066B830.c)
 *     sub_14084C934 @ 0x14084C934 (sub_14084C934.c)
 *     sub_1409CE94C @ 0x1409CE94C (sub_1409CE94C.c)
 * Callees:
 *     sub_1402199B0 @ 0x1402199B0 (sub_1402199B0.c)
 */

_QWORD *__fastcall sub_140389ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_1402199B0(48LL, a2, 1950442835LL, a4);
  if ( result )
  {
    *result = 0LL;
    result[2] = 0LL;
    result[3] = 0LL;
    result[5] = 0LL;
    result[2] = result + 1;
    result[1] = result + 1;
    result[5] = result + 4;
    result[4] = result + 4;
  }
  return result;
}
