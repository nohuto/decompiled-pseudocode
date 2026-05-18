/*
 * XREFs of sub_1800AB7A0 @ 0x1800AB7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 */

__int64 *__fastcall sub_1800AB7A0(__int64 a1, __int64 *a2, char a3)
{
  __int64 *v4; // rdx

  switch ( a3 )
  {
    case 0:
      v4 = &qword_1801F5CB8;
      goto LABEL_12;
    case 1:
      v4 = (__int64 *)&qword_1801F5D78;
      goto LABEL_12;
    case 2:
      v4 = &qword_1801F5D38;
      goto LABEL_12;
    case 3:
      v4 = (__int64 *)&Src;
      goto LABEL_12;
    case 5:
      v4 = &qword_1801F5C78;
LABEL_12:
      sub_18001875C(a2, (__int64)v4);
      return a2;
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
