/*
 * XREFs of sub_140291158 @ 0x140291158
 * Callers:
 *     sub_14028FA14 @ 0x14028FA14 (sub_14028FA14.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140291158(__int64 a1)
{
  int v2; // eax
  int v3; // [rsp+0h] [rbp-8h]

  if ( !dword_140D069F0 )
    return 1;
  if ( a1 )
    v2 = *(_DWORD *)(a1 + 376);
  else
    v2 = v3;
  return (v2 & 0x40000) != 0;
}
