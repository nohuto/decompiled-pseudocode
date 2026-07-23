/*
 * XREFs of sub_14090B170 @ 0x14090B170
 * Callers:
 *     <none>
 * Callees:
 *     sub_14090B0BC @ 0x14090B0BC (sub_14090B0BC.c)
 */

__int64 __fastcall sub_14090B170(int a1, int *a2)
{
  bool v4; // zf
  int v5; // eax

  if ( !dword_140C49FF4 )
    return 3221225659LL;
  if ( (a1 & 0xFFFFFC00) != 0 || (a1 & 3) == 3 || (a1 & 0xFFFFFDFC) != 0 && (a1 & 0x200) != 0 )
    return 3221225485LL;
  if ( _InterlockedCompareExchange(&dword_140C49FF0, 1, 0) )
    return 3221227272LL;
  _interlockedbittestandset(&dword_140C2BD48, 1u);
  sub_14090B0BC(a1, 1u);
  v4 = dword_140C49FF8 == -1;
  v5 = ++dword_140C49FF8;
  if ( v4 )
  {
    v5 = 1;
    dword_140C49FF8 = 1;
  }
  dword_140C4A000 = 1;
  *a2 = v5;
  return 0LL;
}
