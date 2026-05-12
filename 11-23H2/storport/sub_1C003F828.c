/*
 * XREFs of sub_1C003F828 @ 0x1C003F828
 * Callers:
 *     sub_1C0035018 @ 0x1C0035018 (sub_1C0035018.c)
 *     sub_1C003663C @ 0x1C003663C (sub_1C003663C.c)
 * Callees:
 *     sub_1C003F714 @ 0x1C003F714 (sub_1C003F714.c)
 */

__int64 __fastcall sub_1C003F828(__int64 a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a4 < 0x20 )
    return 3221225714LL;
  *(_QWORD *)(a1 + 112) = a5;
  *(_WORD *)(a1 + 2) = a4;
  KeInitializeDpc((PRKDPC)(a1 + 8), (PKDEFERRED_ROUTINE)sub_1C0015300, a2);
  return sub_1C003F714((union _SLIST_HEADER *)a1);
}
