/*
 * XREFs of sub_140276BF8 @ 0x140276BF8
 * Callers:
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 */

void __fastcall sub_140276BF8(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // r9d
  unsigned __int64 v6; // rsi

  v4 = sub_14027A1B4();
  LOBYTE(v5) = a2;
  v6 = v4;
  sub_1402853B0(a1, 0, 0, v5, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v6 + 40), 0LL, 0, 2u);
  sub_140230680((signed __int64 *)(a1 + 96), v6, 0x63536343u);
}
