/*
 * XREFs of VmpProcessInvalidateSlat @ 0x14062B56C
 * Callers:
 *     VmpFlushTbVaRange @ 0x140629D0C (VmpFlushTbVaRange.c)
 *     VmpInvalidateSlatBatched @ 0x14062A30C (VmpInvalidateSlatBatched.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     VmpInvalidateSingleGpaRange @ 0x14045F736 (VmpInvalidateSingleGpaRange.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x14062A9C0 (VmpLogTbFlushSlatInvalidate.c)
 */

__int64 __fastcall VmpProcessInvalidateSlat(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  int v13; // r14d

  if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 2LL) )
    VmpLogTbFlushSlatInvalidate(v7, v8);
  v9 = a4;
  v10 = ((a2 + 511) & 0xFFFFFFFFFFFFFE00uLL) - a2;
  result = v10 + 512;
  if ( a4 < v10 + 512 )
  {
    LODWORD(v10) = 0;
    v13 = 0;
  }
  else
  {
    v9 = ((_WORD)a4 - (_WORD)v10) & 0x1FF;
    v12 = a4 - v9 - v10;
    v13 = v12;
    if ( v10 )
      result = VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 72), a2, ((a2 + 511) & 0xFFFFFFFFFFFFFE00uLL) - a2, 0);
    if ( v12 )
      result = VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 72), (a2 + 511) & 0xFFFFFE00, v12 >> 9, 1);
  }
  if ( v9 )
    return VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 72), (int)a2 + (int)v10 + v13, v9, 0);
  return result;
}
