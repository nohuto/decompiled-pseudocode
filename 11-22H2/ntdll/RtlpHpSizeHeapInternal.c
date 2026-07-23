/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x180045BE4
 * Callers:
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x180045B78 (RtlpHpExtrasGet.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x180041294 (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180042264 (RtlpHpSegDescriptorValidate.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063F88 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18008777C (RtlpHpLargeAllocSize.c)
 */

unsigned __int64 __fastcall RtlpHpSizeHeapInternal(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9

  if ( (_WORD)a2 )
  {
    v8 = 0;
  }
  else
  {
    v9 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801859B8) >> 20));
    if ( !v9 )
      return RtlpHpLargeAllocSize(a1, a2, a3, a4);
    v8 = v9 - 1;
    if ( v8 == 2 )
      return RtlpHpLargeAllocSize(a1, a2, a3, a4);
  }
  v10 = 192LL * v8 + a1;
  v11 = RtlpHpSegDescriptorValidate(v10 + 320, a2);
  if ( v11 )
    return RtlpHpSegSizeInternal(v10 + 320, v11, a2, v12, a4);
  else
    return -1LL;
}
