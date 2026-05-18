/*
 * XREFs of sub_18002A018 @ 0x18002A018
 * Callers:
 *     sub_180029C9C @ 0x180029C9C (sub_180029C9C.c)
 *     sub_180029D6C @ 0x180029D6C (sub_180029D6C.c)
 *     sub_18002A5F8 @ 0x18002A5F8 (sub_18002A5F8.c)
 * Callees:
 *     sub_18002A1BC @ 0x18002A1BC (sub_18002A1BC.c)
 */

_QWORD *__fastcall sub_18002A018(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v6; // rax
  __int64 i; // r9
  _QWORD *result; // rax

  v6 = (__int64 *)sub_18002A1BC();
  for ( i = *v6; i != v6[1] && (*(_QWORD *)i != a1 || *(_BYTE *)(i + 8) != a3); i += 16LL )
    ;
  result = a2;
  *a2 = i;
  return result;
}
