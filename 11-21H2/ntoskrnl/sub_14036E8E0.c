/*
 * XREFs of sub_14036E8E0 @ 0x14036E8E0
 * Callers:
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_14036E290 @ 0x14036E290 (sub_14036E290.c)
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_14036E8E0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx

  v3 = a2 ^ *(_QWORD *)a2;
  v4 = a2 ^ *(_QWORD *)(a2 + 8);
  v5 = (unsigned __int64 *)(v3 + 8);
  if ( (v3 ^ *(_QWORD *)(v3 + 8)) != a2 || (v4 ^ *(_QWORD *)v4) != a2 )
    __fastfail(3u);
  v6 = v4 ^ v3;
  *(_QWORD *)v4 = v6;
  *v5 = v6;
  v7 = *(_QWORD *)(a2 + 16) - ((*(_QWORD *)(a2 + 16) >> 1) & 0x5555555555555555LL);
  return _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(a1 + 48),
           -((unsigned int)((0x101010101010101LL
                           * (((v7 & 0x3333333333333333LL)
                             + ((v7 >> 2) & 0x3333333333333333LL)
                             + (((v7 & 0x3333333333333333LL) + ((v7 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
}
