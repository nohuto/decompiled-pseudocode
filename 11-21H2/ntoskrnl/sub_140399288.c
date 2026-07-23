/*
 * XREFs of sub_140399288 @ 0x140399288
 * Callers:
 *     sub_140A540E0 @ 0x140A540E0 (sub_140A540E0.c)
 *     sub_140A6AACC @ 0x140A6AACC (sub_140A6AACC.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_140399288(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = *(_DWORD *)(a1 + 8) & 0xFFFFFFF3 | 8;
  *(_DWORD *)(a1 + 8) = result;
  v2 = *(struct _KEVENT **)(a1 + 40);
  if ( v2 )
    return KeSetEvent(v2, 0, 0);
  return result;
}
