/*
 * XREFs of sub_14093C238 @ 0x14093C238
 * Callers:
 *     sub_14093D590 @ 0x14093D590 (sub_14093D590.c)
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14093C238(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 && *(_DWORD *)(v2 + 4) )
    return 3221225760LL;
  else
    return (*(_DWORD *)(a2 + 1376) & 1) != 0 ? 0xC000004B : 0;
}
