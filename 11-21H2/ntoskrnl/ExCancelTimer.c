/*
 * XREFs of ExCancelTimer @ 0x1402D3E10
 * Callers:
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1409EC088 @ 0x1409EC088 (sub_1409EC088.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1402D57D4 @ 0x1402D57D4 (sub_1402D57D4.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  sub_1402D57D4(a1);
  return KeCancelTimer2(a1, a2);
}
