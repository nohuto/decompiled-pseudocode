/*
 * XREFs of sub_1800283F0 @ 0x1800283F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_18003DC38 @ 0x18003DC38 (sub_18003DC38.c)
 */

char __fastcall sub_1800283F0(__int64 a1, _QWORD *a2)
{
  char result; // al
  __int64 v3; // r8
  _QWORD *v4; // r9

  result = sub_1800122D0(a2, (_QWORD *)(a1 + 272));
  if ( result )
    return sub_18003DC38(*v4, v3);
  return result;
}
