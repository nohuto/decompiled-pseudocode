/*
 * XREFs of sub_140659774 @ 0x140659774
 * Callers:
 *     sub_1406593C0 @ 0x1406593C0 (sub_1406593C0.c)
 * Callees:
 *     sub_1406BC9D0 @ 0x1406BC9D0 (sub_1406BC9D0.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 */

__int64 __fastcall sub_140659774(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x200080) == 0 && (int)sub_1406BC9D0() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 5952LL) )
    sub_1406F83A0(7LL, 0LL, 0LL, 0LL);
  return 0LL;
}
