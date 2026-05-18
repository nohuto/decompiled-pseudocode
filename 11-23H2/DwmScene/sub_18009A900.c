/*
 * XREFs of sub_18009A900 @ 0x18009A900
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

_QWORD *__fastcall sub_18009A900(__int64 a1, _QWORD *a2, char a3)
{
  void *v4; // rdx

  switch ( a3 )
  {
    case 0:
      v4 = &unk_1801D6F28;
      goto LABEL_12;
    case 1:
      v4 = &unk_1801D6F68;
      goto LABEL_12;
    case 2:
      v4 = &unk_1801D6F48;
      goto LABEL_12;
    case 3:
      v4 = &unk_1801D6F08;
      goto LABEL_12;
    case 5:
      v4 = &unk_1801D6F88;
LABEL_12:
      sub_180017648(a2, (__int64)v4);
      return a2;
  }
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
