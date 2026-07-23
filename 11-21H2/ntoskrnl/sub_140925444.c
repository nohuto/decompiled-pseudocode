/*
 * XREFs of sub_140925444 @ 0x140925444
 * Callers:
 *     sub_140925338 @ 0x140925338 (sub_140925338.c)
 * Callees:
 *     sub_140919024 @ 0x140919024 (sub_140919024.c)
 *     sub_140925504 @ 0x140925504 (sub_140925504.c)
 */

bool __fastcall sub_140925444(__int64 a1, __int64 a2)
{
  return (unsigned __int8)sub_140925504(a2, a1 + 40, *(unsigned int *)(a2 + 20))
      && sub_140919024(a1, *(_DWORD *)(a2 + 4), a2);
}
