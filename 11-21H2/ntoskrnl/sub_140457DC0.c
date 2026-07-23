/*
 * XREFs of sub_140457DC0 @ 0x140457DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 */

__int64 __fastcall sub_140457DC0(__int64 a1, ULONG_PTR a2, char a3)
{
  if ( !a1 || ((dword_140C09788 - 1) & *(_DWORD *)(a2 + 40)) != 0 || ((dword_140C09788 - 1) & *(_DWORD *)(a2 + 44)) != 0 )
    return 3221225485LL;
  if ( !*(_BYTE *)(a1 + 437) )
    KeFlushIoBuffers(a2, a3, 1, a2);
  return 0LL;
}
