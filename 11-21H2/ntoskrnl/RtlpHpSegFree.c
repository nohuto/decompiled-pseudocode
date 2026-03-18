/*
 * XREFs of RtlpHpSegFree @ 0x140364794
 * Callers:
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     RtlpHpSegLfhVsFree @ 0x140364230 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140364860 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegDescriptorValidate @ 0x140365700 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140371654 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpLogHeapFailure @ 0x1405F1BBC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v11; // rcx
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v5 = RtlpHpSegDescriptorValidate();
  if ( v5 )
  {
    v8 = (v5 & *(_QWORD *)a1) + ((v5 - (v5 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( v7 > v8 )
    {
      if ( (*(_BYTE *)(v5 + 24) & 0xC) == 8 )
      {
        return (unsigned int)RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 24), v8, v7, a3);
      }
      else
      {
        v9 = RtlpHpVsContextFree(*(_QWORD *)(a1 + 32), v8, v7, a3, &v12);
        if ( v9 )
        {
          v11 = *(_QWORD *)(a1 + 24);
          if ( v12 <= (unsigned int)*(unsigned __int16 *)(v11 + 60) - 16 )
            RtlpHpLfhBucketUpdateStats(v11, v12, 0LL);
        }
      }
    }
    else
    {
      RtlpHpSegPageRangeShrink(a1, v5, v6, a3);
      return 1;
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), v7, 0, 0LL, 0LL);
    return 0;
  }
  return v9;
}
