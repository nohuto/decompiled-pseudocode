/*
 * XREFs of sub_1405B2914 @ 0x1405B2914
 * Callers:
 *     sub_14025E544 @ 0x14025E544 (sub_14025E544.c)
 * Callees:
 *     sub_14022689C @ 0x14022689C (sub_14022689C.c)
 *     sub_14025DB3C @ 0x14025DB3C (sub_14025DB3C.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 */

void *__fastcall sub_1405B2914(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx

  if ( !a2 )
    return sub_14022689C(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
  v2 = *(_QWORD *)(a1 + 224);
  v3 = *(_QWORD *)(v2 + 312);
  *(_QWORD *)(v2 + 312) = 0LL;
  sub_14025DB3C(v3);
  return (void *)sub_140268284(v2 + 184);
}
