/*
 * XREFs of sub_140240250 @ 0x140240250
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024029C @ 0x14024029C (sub_14024029C.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_140240250(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = sub_14024029C(a1);
  if ( !stru_140CF5E10.Header.SignalState )
  {
    result = LOWORD(stru_140C4EB40.Alignment);
    if ( LOWORD(stru_140C4EB40.Alignment) >= (((_DWORD)dword_140D06884 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&stru_140CF5E10, 0, 0);
  }
  return result;
}
