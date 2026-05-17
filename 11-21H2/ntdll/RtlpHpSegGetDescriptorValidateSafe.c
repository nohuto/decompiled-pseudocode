/*
 * XREFs of RtlpHpSegGetDescriptorValidateSafe @ 0x180120184
 * Callers:
 *     RtlpHpSegLfhVsCommit @ 0x180023D10 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSizeHeap @ 0x180027310 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x18002DF6C (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegFree @ 0x18002E414 (RtlpHpSegFree.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpSegGetDescriptorValidateSafe(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = a2 & *(_QWORD *)a1;
  if ( (a1 ^ v2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v2 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    return v2 + 32LL * ((unsigned int)(a2 - v2) >> *(_BYTE *)(a1 + 8));
  else
    return 0LL;
}
