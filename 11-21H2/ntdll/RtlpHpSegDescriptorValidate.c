/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x18002DF6C
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpSizeHeapInternal @ 0x18002E8C4 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegSetExtraPresent @ 0x18002E978 (RtlpHpSegSetExtraPresent.c)
 *     RtlpHpSegLfhVsDecommit @ 0x18002EEE0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpMetadataCommit @ 0x180056AF0 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x180120184 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegDescriptorValidate(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  __int64 DescriptorValidateSafe; // rdx
  char v6; // al

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
  }
  else
  {
    v4 = a2 & *(_QWORD *)a1;
    if ( (a1 ^ v4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v4 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v4 + 32 * ((unsigned __int64)(unsigned int)(a2 - v4) >> *(_BYTE *)(a1 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
    return 0LL;
  v6 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v6 & 1) == 0 )
    return 0LL;
  if ( (v6 & 2) == 0 )
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 3) == 3 && (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xCu) >= 8 )
      return DescriptorValidateSafe;
    return 0LL;
  }
  if ( (v6 & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
    return 0LL;
  return DescriptorValidateSafe;
}
