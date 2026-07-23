/*
 * XREFs of MiPageStandbyLookasideStatus @ 0x1403316E0
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x140285100 (MiReservePageFileSpaceForPage.c)
 *     MiReplaceStandbyLookaside @ 0x140330E98 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x1403313C0 (MiFindSuitableLookasideReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageStandbyLookasideStatus(ULONG_PTR a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax

  if ( a1 >= qword_140C68160 && a1 < qword_140C68160 + 2048 )
    return 2LL;
  v1 = *(_QWORD *)(48 * a1 - 0x220000000000LL + 16);
  if ( (v1 & 0x400) != 0 )
    v2 = v1 >> 3;
  else
    v2 = v1 >> 27;
  return (v2 & 1) == 0;
}
