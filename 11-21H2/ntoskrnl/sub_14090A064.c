/*
 * XREFs of sub_14090A064 @ 0x14090A064
 * Callers:
 *     sub_1409098C0 @ 0x1409098C0 (sub_1409098C0.c)
 * Callees:
 *     sub_1409099C0 @ 0x1409099C0 (sub_1409099C0.c)
 */

__int64 sub_14090A064()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  qword_140C4ADC8 = (__int64)&qword_140C4ADC0;
  qword_140C4ADC0 = (__int64)&qword_140C4ADC0;
  qword_140C4AFF8 = (__int64)&qword_140C4AFF0;
  qword_140C4AFF0 = (__int64)&qword_140C4AFF0;
  result = sub_1409099C0(-1, -1, 1, 0, &v1);
  if ( (int)result >= 0 )
    qword_140C4B060 = qword_140C4ADC0;
  return result;
}
