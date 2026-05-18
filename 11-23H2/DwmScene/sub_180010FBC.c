/*
 * XREFs of sub_180010FBC @ 0x180010FBC
 * Callers:
 *     sub_1800E3CDF @ 0x1800E3CDF (sub_1800E3CDF.c)
 *     sub_1800E4679 @ 0x1800E4679 (sub_1800E4679.c)
 *     sub_1800E47A7 @ 0x1800E47A7 (sub_1800E47A7.c)
 *     sub_1800E4E4E @ 0x1800E4E4E (sub_1800E4E4E.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180010FBC(_QWORD *a1)
{
  void **result; // rax

  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
