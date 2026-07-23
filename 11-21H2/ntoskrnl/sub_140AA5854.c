/*
 * XREFs of sub_140AA5854 @ 0x140AA5854
 * Callers:
 *     sub_140AA3BE0 @ 0x140AA3BE0 (sub_140AA3BE0.c)
 *     sub_140AA3DA0 @ 0x140AA3DA0 (sub_140AA3DA0.c)
 *     sub_140AA3DC0 @ 0x140AA3DC0 (sub_140AA3DC0.c)
 *     sub_140AA3E20 @ 0x140AA3E20 (sub_140AA3E20.c)
 *     sub_140AA3E40 @ 0x140AA3E40 (sub_140AA3E40.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

unsigned __int8 __fastcall sub_140AA5854(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1
    && (*((_DWORD *)KeGetCurrentThread() + 29) & 0x400) == 0
    && !*((_DWORD *)KeGetCurrentThread() + 121) )
  {
    sub_140A8C924(
      0xC4u,
      (unsigned int)BugCheckParameter1,
      CurrentIrql,
      *((unsigned int *)KeGetCurrentThread() + 121),
      a2);
  }
  return CurrentIrql;
}
