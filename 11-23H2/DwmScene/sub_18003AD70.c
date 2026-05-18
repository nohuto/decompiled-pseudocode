/*
 * XREFs of sub_18003AD70 @ 0x18003AD70
 * Callers:
 *     sub_18003A100 @ 0x18003A100 (sub_18003A100.c)
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 *     sub_18003A644 @ 0x18003A644 (sub_18003A644.c)
 *     sub_18003ABE4 @ 0x18003ABE4 (sub_18003ABE4.c)
 *     sub_18003AC7C @ 0x18003AC7C (sub_18003AC7C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18003AD70(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; i += 2 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
    *a3 = *i;
    a3[1] = i[1];
    a3 += 2;
    *i = 0LL;
    i[1] = 0LL;
  }
  return a3;
}
