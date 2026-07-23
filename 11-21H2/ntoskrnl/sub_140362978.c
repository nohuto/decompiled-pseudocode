/*
 * XREFs of sub_140362978 @ 0x140362978
 * Callers:
 *     sub_14023D5F4 @ 0x14023D5F4 (sub_14023D5F4.c)
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 *     sub_1403628D8 @ 0x1403628D8 (sub_1403628D8.c)
 * Callees:
 *     sub_1403629E0 @ 0x1403629E0 (sub_1403629E0.c)
 */

__int64 __fastcall sub_140362978(__int64 a1, __int64 a2)
{
  if ( sub_1403629E0(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
