/*
 * XREFs of sub_14090DEF0 @ 0x14090DEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 */

__int64 __fastcall sub_14090DEF0(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 32) != a2 || (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
    return 0LL;
  sub_14067EE40(a1, 8LL, a3, 1);
  sub_14067EDC0(a1, a3);
  sub_14067EB68(a1);
  return 2LL;
}
