/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x18002E8C4
 * Callers:
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 *     RtlpHpExtrasGet @ 0x18003048C (RtlpHpExtrasGet.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x18002D0AC (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x18002DF6C (RtlpHpSegDescriptorValidate.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059108 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18008A334 (RtlpHpLargeAllocSize.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
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
    v9 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_18017B718) >> 20));
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
