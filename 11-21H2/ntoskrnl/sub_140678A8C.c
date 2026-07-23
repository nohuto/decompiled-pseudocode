/*
 * XREFs of sub_140678A8C @ 0x140678A8C
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 * Callees:
 *     sub_1407F6F60 @ 0x1407F6F60 (sub_1407F6F60.c)
 *     sub_1407F7A80 @ 0x1407F7A80 (sub_1407F7A80.c)
 */

__int64 __fastcall sub_140678A8C(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1496);
  if ( v1 )
  {
    sub_1407F6F60(*(_QWORD *)(a1 + 1496));
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      sub_1407F6F60(v3);
    result = sub_1407F7A80(*(PVOID *)(a1 + 1496));
    *(_QWORD *)(a1 + 1496) = 0LL;
  }
  return result;
}
