/*
 * XREFs of sub_1405B2004 @ 0x1405B2004
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405B2004(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (v1 >> 19) & 3;
  if ( LODWORD(qword_1400161D0[v2]) == 16 )
    return 2LL;
  if ( (v1 & 0xA00000) == 0xA00000 )
    return (unsigned int)dword_140037160[v2];
  return 1LL;
}
