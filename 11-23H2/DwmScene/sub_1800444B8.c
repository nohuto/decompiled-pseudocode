/*
 * XREFs of sub_1800444B8 @ 0x1800444B8
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800444B8(__int64 a1)
{
  if ( !*(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 8) == 0LL;
  if ( *(_DWORD *)a1 != 1 )
    return 1;
  return *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24);
}
