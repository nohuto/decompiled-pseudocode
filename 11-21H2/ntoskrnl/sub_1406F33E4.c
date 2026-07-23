/*
 * XREFs of sub_1406F33E4 @ 0x1406F33E4
 * Callers:
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 * Callees:
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 */

__int64 __fastcall sub_1406F33E4(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 < 0x100 )
    return 0LL;
  sub_1402399A8(0LL, v1 + 48);
  return 1LL;
}
