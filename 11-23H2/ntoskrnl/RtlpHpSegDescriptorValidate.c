/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x140316AF0
 * Callers:
 *     RtlpHpSegFree @ 0x1403153EC (RtlpHpSegFree.c)
 *     RtlpHpSegLfhVsDecommit @ 0x140316A00 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpMetadataCommit @ 0x1403C7414 (RtlpHpMetadataCommit.c)
 *     RtlpHpSizeHeapInternal @ 0x1405B6DC0 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegSetExtraPresent @ 0x1405B70B0 (RtlpHpSegSetExtraPresent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpSegDescriptorValidate(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  unsigned __int64 result; // rax
  char v5; // cl
  char v6; // dl

  v3 = *(_QWORD *)a1 & a2;
  if ( (a1 ^ v3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v3 + 0x10)) != 0xA2E64EADA2E64EADuLL )
    return 0LL;
  result = v3 + 32 * ((unsigned __int64)(unsigned int)(a2 - v3) >> *(_BYTE *)(a1 + 8));
  if ( !result )
    return 0LL;
  v5 = *(_BYTE *)(result + 24);
  if ( (v5 & 1) == 0 )
    return 0LL;
  if ( (v5 & 2) == 0 )
  {
    result -= 32LL * *(unsigned __int8 *)(result + 31);
    v6 = *(_BYTE *)(result + 24);
    if ( (v6 & 3) == 3 && (v6 & 0xCu) >= 8 )
      return result;
    return 0LL;
  }
  if ( (v5 & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
    return 0LL;
  return result;
}
