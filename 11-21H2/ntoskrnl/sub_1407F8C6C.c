/*
 * XREFs of sub_1407F8C6C @ 0x1407F8C6C
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     sub_1409ABFB0 @ 0x1409ABFB0 (sub_1409ABFB0.c)
 */

char __fastcall sub_1407F8C6C(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    __int2c();
  result = sub_14020A400(a1);
  if ( result )
  {
    result = sub_1409ABFB0(*(PVOID *)(v3 + 1464));
    *(_QWORD *)(a1 + 1464) = 0LL;
  }
  return result;
}
