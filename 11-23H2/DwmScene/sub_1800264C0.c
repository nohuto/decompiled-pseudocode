/*
 * XREFs of sub_1800264C0 @ 0x1800264C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_1800399EC @ 0x1800399EC (sub_1800399EC.c)
 */

char __fastcall sub_1800264C0(__int64 a1, _QWORD *a2)
{
  char result; // al
  __int64 v3; // r8
  _QWORD *v4; // r9

  result = sub_180011DF0(a2, (_QWORD *)(a1 + 272));
  if ( result )
    return sub_1800399EC(*v4, v3);
  return result;
}
