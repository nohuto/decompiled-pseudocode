/*
 * XREFs of sub_14023DC8C @ 0x14023DC8C
 * Callers:
 *     sub_14023CDE0 @ 0x14023CDE0 (sub_14023CDE0.c)
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023DC8C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax

  v3 = a2 + 32 * a3;
  *(_WORD *)(v3 + 24) = *(_WORD *)(a2 + 24) - a3;
  *(_WORD *)(v3 + 26) = a3;
  *(_WORD *)(a2 + 24) = a3;
  v4 = *(unsigned __int16 *)(v3 + 24);
  *(_BYTE *)v3 = *(_BYTE *)v3 & 0xFC | 1;
  v5 = v3 + 32LL * v4;
  *(_OWORD *)(v3 + 8) = *(_OWORD *)(a2 + 8);
  if ( v5 < 32LL * *(unsigned __int16 *)(a1 + 40) + (a2 & ~(32 * (unsigned __int64)*(unsigned __int16 *)(a1 + 40) - 1)) )
    *(_WORD *)(v5 + 26) = v4;
  return v3;
}
