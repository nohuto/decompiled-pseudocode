/*
 * XREFs of RtlpHpSegGetDescriptorValidateSafe @ 0x18012368C
 * Callers:
 *     RtlpHpSizeHeap @ 0x18003ACD0 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180042104 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegFree @ 0x180043CE4 (RtlpHpSegFree.c)
 *     RtlpHpSegLfhVsCommit @ 0x180046B90 (RtlpHpSegLfhVsCommit.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpSegGetDescriptorValidateSafe(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)a1 & a2;
  if ( (a1 ^ v2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v2 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    return v2 + 32LL * ((unsigned int)(a2 - v2) >> *(_BYTE *)(a1 + 8));
  else
    return 0LL;
}
