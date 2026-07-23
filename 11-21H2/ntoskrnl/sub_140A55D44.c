/*
 * XREFs of sub_140A55D44 @ 0x140A55D44
 * Callers:
 *     sub_140A55CC0 @ 0x140A55CC0 (sub_140A55CC0.c)
 * Callees:
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_1403E0C98 @ 0x1403E0C98 (sub_1403E0C98.c)
 */

char __fastcall sub_140A55D44(const char *a1, const char *a2, __int64 a3, unsigned __int64 *a4)
{
  char *v6; // rax

  v6 = strstr(a1, a2);
  if ( !v6 || v6[a3] != 61 )
    return 0;
  *a4 = sub_1403E0C98((unsigned __int8 *)&v6[a3 + 1]);
  return 1;
}
