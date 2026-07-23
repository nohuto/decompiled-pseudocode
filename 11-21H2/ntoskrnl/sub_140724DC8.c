/*
 * XREFs of sub_140724DC8 @ 0x140724DC8
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140678B4C @ 0x140678B4C (sub_140678B4C.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406A61B0 @ 0x1406A61B0 (sub_1406A61B0.c)
 *     sub_1406AB544 @ 0x1406AB544 (sub_1406AB544.c)
 *     sub_140725858 @ 0x140725858 (sub_140725858.c)
 *     sub_140726394 @ 0x140726394 (sub_140726394.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 * Callees:
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 *     sub_140724E14 @ 0x140724E14 (sub_140724E14.c)
 */

__int64 __fastcall sub_140724DC8(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      sub_1403493B0(P, 0LL, 1, a2);
    if ( a3 )
      sub_1403493B0(P, 0LL, 0, a3);
    return sub_140724E14(P);
  }
  return result;
}
