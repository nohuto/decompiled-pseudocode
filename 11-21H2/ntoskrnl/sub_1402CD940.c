/*
 * XREFs of sub_1402CD940 @ 0x1402CD940
 * Callers:
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_1405A7158 @ 0x1405A7158 (sub_1405A7158.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

__int64 __fastcall sub_1402CD940(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( a2 < 0xFFFF800000000000uLL )
  {
    v2 = *((_QWORD *)KeGetCurrentThread() + 23);
    v3 = *(_QWORD *)(v2 + 1368);
    if ( v3 && (*(_DWORD *)(v2 + 2172) & 0x1000) == 0 )
      return *(unsigned int *)(v3 + 8);
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)sub_14027B080(a2) != 1 )
    return 0xFFFFFFFFLL;
  return sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
}
