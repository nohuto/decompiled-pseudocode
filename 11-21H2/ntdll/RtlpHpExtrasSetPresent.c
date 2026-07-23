/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x18002EA00
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpExtrasAppend @ 0x18011F83C (RtlpHpExtrasAppend.c)
 *     RtlpHpReallocMove @ 0x18011FA24 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpSegSetExtraPresent @ 0x18002E978 (RtlpHpSegSetExtraPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059108 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18008ACC8 (RtlpHpLargeAllocSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v7; // rax

  v3 = 0;
  if ( (_WORD)a2 )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 320, a2);
  v7 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_18017B718) >> 20));
  if ( v7 && (v3 = v7 - 1, (_DWORD)v7 != 3) )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 320, a2);
  else
    return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
}
