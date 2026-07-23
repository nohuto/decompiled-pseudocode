/*
 * XREFs of sub_14090B220 @ 0x14090B220
 * Callers:
 *     <none>
 * Callees:
 *     sub_14090B0BC @ 0x14090B0BC (sub_14090B0BC.c)
 */

__int64 __fastcall sub_14090B220(int a1)
{
  if ( !dword_140C49FF0 )
    return 290LL;
  if ( a1 != dword_140C49FF8 )
    return 3221225480LL;
  dword_140C4A000 = 0;
  sub_14090B0BC(0, 0);
  _interlockedbittestandreset(&dword_140C2BD48, 1u);
  _InterlockedCompareExchange(&dword_140C49FF0, 0, 1);
  return 0LL;
}
