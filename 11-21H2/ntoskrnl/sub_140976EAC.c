/*
 * XREFs of sub_140976EAC @ 0x140976EAC
 * Callers:
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_1409C0470 @ 0x1409C0470 (sub_1409C0470.c)
 */

void __fastcall sub_140976EAC(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int i; // [rsp+48h] [rbp+10h] BYREF
  ULONG StartingIndex; // [rsp+50h] [rbp+18h] BYREF

  StartingIndex = 0;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a2 + 16); ++v2 )
  {
    if ( (unsigned __int8)sub_1409C0470(*(_QWORD *)(a2 + 24), 0, v2, (unsigned int)&StartingIndex, (__int64)&i) )
      RtlClearBits(*(PRTL_BITMAP *)(a1 + 48), StartingIndex, i - StartingIndex + 1);
  }
}
