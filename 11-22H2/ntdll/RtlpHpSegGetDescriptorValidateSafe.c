/*
 * XREFs of RtlpHpSegGetDescriptorValidateSafe @ 0x18012220C
 * Callers:
 *     RtlpHpSizeHeap @ 0x18003AE30 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180042264 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegFree @ 0x180043E44 (RtlpHpSegFree.c)
 *     RtlpHpSegLfhVsCommit @ 0x180046CF0 (RtlpHpSegLfhVsCommit.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
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
