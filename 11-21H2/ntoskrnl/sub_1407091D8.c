/*
 * XREFs of sub_1407091D8 @ 0x1407091D8
 * Callers:
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 * Callees:
 *     sub_140709200 @ 0x140709200 (sub_140709200.c)
 */

__int64 __fastcall sub_1407091D8(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
    return 0LL;
  else
    return sub_140709200();
}
