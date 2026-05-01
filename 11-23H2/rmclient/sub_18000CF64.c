/*
 * XREFs of sub_18000CF64 @ 0x18000CF64
 * Callers:
 *     sub_18000A774 @ 0x18000A774 (sub_18000A774.c)
 * Callees:
 *     sub_18000CE14 @ 0x18000CE14 (sub_18000CE14.c)
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_18000F974 @ 0x18000F974 (sub_18000F974.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 */

__int64 __fastcall sub_18000CF64(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_BYTE *)a1 = 0;
  sub_180011A6C(a1 + 16, 0LL);
  *(_BYTE *)a1 = 0;
  sub_18000F974(a1);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v2 )
    sub_18000DD90();
  v3 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v3 )
    sub_18000DD90();
  sub_18000CE14((_QWORD *)(a1 + 40));
  sub_18000CE14((_QWORD *)(a1 + 32));
  return sub_18000CEA0((struct _TP_TIMER **)(a1 + 16));
}
