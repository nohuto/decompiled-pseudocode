/*
 * XREFs of sub_140A59068 @ 0x140A59068
 * Callers:
 *     sub_140A58CF8 @ 0x140A58CF8 (sub_140A58CF8.c)
 * Callees:
 *     sub_14025E060 @ 0x14025E060 (sub_14025E060.c)
 *     sub_14025E824 @ 0x14025E824 (sub_14025E824.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

__int64 __fastcall sub_140A59068(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r8d
  __int64 Pool3; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  sub_14025E824();
  LOBYTE(v6) = 3;
  DWORD2(v6) = (unsigned __int16)sub_14025E060(v2);
  Pool3 = ExAllocatePool3(64, v3, 1666475339, (unsigned int)&v6, 1);
  if ( !Pool3 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 33200) = Pool3;
  return 0LL;
}
