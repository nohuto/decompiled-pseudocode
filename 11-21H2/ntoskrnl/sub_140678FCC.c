/*
 * XREFs of sub_140678FCC @ 0x140678FCC
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 *     sub_1409B0C74 @ 0x1409B0C74 (sub_1409B0C74.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

__int64 __fastcall sub_140678FCC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  for ( i = *(_QWORD *)(a1 + 1272); ; i = *(_QWORD *)(a1 + 1272) )
  {
    v7 = i;
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
    if ( v7 == *(_QWORD *)(a1 + 1272) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  result = v7;
  *a3 = v7;
  return result;
}
