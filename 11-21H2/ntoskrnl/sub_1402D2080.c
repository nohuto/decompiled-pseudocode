/*
 * XREFs of sub_1402D2080 @ 0x1402D2080
 * Callers:
 *     sub_1402DE5C0 @ 0x1402DE5C0 (sub_1402DE5C0.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D20D4 @ 0x1402D20D4 (sub_1402D20D4.c)
 */

__int64 __fastcall sub_1402D2080(__int64 a1, __int64 a2, __int64 a3)
{
  WORD MinorImageVersion; // ax

  LOBYTE(MinorImageVersion) = 0;
  if ( a3 )
    MinorImageVersion = RtlImageNtHeader(*(PVOID *)(a3 + 24))->OptionalHeader.MinorImageVersion;
  sub_1402D20D4(&stru_14000FE68, MinorImageVersion);
  return 0LL;
}
