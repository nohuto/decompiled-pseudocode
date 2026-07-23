/*
 * XREFs of sub_1402916EC @ 0x1402916EC
 * Callers:
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_140575600 @ 0x140575600 (sub_140575600.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402916EC(__int64 a1)
{
  char result; // al

  result = 0;
  if ( a1 )
  {
    if ( *(_UNKNOWN **)(a1 + 544) == &unk_140D32B00 )
      return 1;
  }
  return result;
}
