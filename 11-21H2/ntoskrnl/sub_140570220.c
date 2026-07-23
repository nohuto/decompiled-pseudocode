/*
 * XREFs of sub_140570220 @ 0x140570220
 * Callers:
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 * Callees:
 *     sub_14057004C @ 0x14057004C (sub_14057004C.c)
 *     sub_140570120 @ 0x140570120 (sub_140570120.c)
 */

unsigned __int64 __fastcall sub_140570220(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return sub_140570120(*(unsigned __int64 **)(a1 + 1112));
  else
    return sub_14057004C();
}
