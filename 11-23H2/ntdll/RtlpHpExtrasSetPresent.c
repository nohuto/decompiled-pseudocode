/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x180045BC0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocMove @ 0x18008E8AC (RtlpHpReallocMove.c)
 *     RtlpHpExtrasAppend @ 0x180123180 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlpHpSegSetExtraPresent @ 0x180045B38 (RtlpHpSegSetExtraPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063E58 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18008840C (RtlpHpLargeAllocSetExtraPresent.c)
 */

unsigned __int8 __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v7; // rax

  v3 = 0;
  if ( (_WORD)a2 )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 320, a2);
  v7 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_180188A88) >> 20));
  if ( v7 && (v3 = v7 - 1, (_DWORD)v7 != 3) )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 320, a2);
  else
    return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
}
