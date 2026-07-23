/*
 * XREFs of sub_1405F34F0 @ 0x1405F34F0
 * Callers:
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 * Callees:
 *     sub_1403629E0 @ 0x1403629E0 (sub_1403629E0.c)
 */

unsigned __int64 __fastcall sub_1405F34F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax

  v4 = sub_1403629E0(a1 + 16, 8 * ((a2 + 1) << *(_DWORD *)(a1 + 8)) - 1, 8 * (a3 << *(_DWORD *)(a1 + 8)));
  if ( v4 == -1LL )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (v4 >> 3 >> *(_DWORD *)(a1 + 8) << *(_DWORD *)(a1 + 8));
}
