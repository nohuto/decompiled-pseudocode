/*
 * XREFs of sub_140970C20 @ 0x140970C20
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     sub_140970A74 @ 0x140970A74 (sub_140970A74.c)
 *     sub_140970C6C @ 0x140970C6C (sub_140970C6C.c)
 */

__int64 __fastcall sub_140970C20(__int64 a1, unsigned int a2)
{
  int v4; // edx
  __int64 v5; // rcx

  if ( sub_14029C6C4() && (!v4 || (unsigned int)sub_140970A74(v5)) )
    return sub_140970C6C(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
