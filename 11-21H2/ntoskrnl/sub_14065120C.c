/*
 * XREFs of sub_14065120C @ 0x14065120C
 * Callers:
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 * Callees:
 *     sub_1406513D8 @ 0x1406513D8 (sub_1406513D8.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_14065120C(__int64 a1)
{
  __int64 v2; // rax

  v2 = sub_140930250(1 << *(_DWORD *)(a1 + 240));
  *(_QWORD *)(a1 + 264) = v2;
  if ( v2 )
    return sub_1406513D8(a1);
  else
    return 3221225626LL;
}
