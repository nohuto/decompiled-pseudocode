/*
 * XREFs of sub_140366D64 @ 0x140366D64
 * Callers:
 *     sub_14023CCE0 @ 0x14023CCE0 (sub_14023CCE0.c)
 *     sub_14023CDE0 @ 0x14023CDE0 (sub_14023CDE0.c)
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 *     sub_14023D9B0 @ 0x14023D9B0 (sub_14023D9B0.c)
 *     sub_14023DD4C @ 0x14023DD4C (sub_14023DD4C.c)
 *     sub_140352090 @ 0x140352090 (sub_140352090.c)
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     sub_1403724D8 @ 0x1403724D8 (sub_1403724D8.c)
 * Callees:
 *     sub_140366DA8 @ 0x140366DA8 (sub_140366DA8.c)
 */

__int64 __fastcall sub_140366D64(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10

  if ( (_DWORD)a3 != 0x8000 )
    return sub_140366DA8(a1, a2, a3);
  v4 = (*a1 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v5 = *a1 + *a2 - v4;
  *a1 = v4;
  *a2 = v5;
  if ( v5 )
    return sub_140366DA8(a1, a2, a3);
  else
    return 0LL;
}
