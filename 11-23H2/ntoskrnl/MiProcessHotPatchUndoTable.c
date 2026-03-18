/*
 * XREFs of MiProcessHotPatchUndoTable @ 0x140A3AF9C
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x140A3A908 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlClearBits @ 0x14022DA00 (RtlClearBits.c)
 *     RtlDetermineHotPatchUndoExtent @ 0x140A763BC (RtlDetermineHotPatchUndoExtent.c)
 */

void __fastcall MiProcessHotPatchUndoTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int i; // [rsp+48h] [rbp+10h] BYREF
  ULONG StartingIndex; // [rsp+50h] [rbp+18h] BYREF

  StartingIndex = 0;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a2 + 16); ++v2 )
  {
    if ( (unsigned __int8)RtlDetermineHotPatchUndoExtent(
                            *(_QWORD *)(a2 + 24),
                            0,
                            v2,
                            (unsigned int)&StartingIndex,
                            (__int64)&i) )
      RtlClearBits(*(PRTL_BITMAP *)(a1 + 48), StartingIndex, i - StartingIndex + 1);
  }
}
