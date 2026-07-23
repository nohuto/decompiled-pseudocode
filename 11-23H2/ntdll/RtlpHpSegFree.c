/*
 * XREFs of RtlpHpSegFree @ 0x180043CE4
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsFree @ 0x180043CD0 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180034458 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x180036AF0 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C490 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x180066FBC (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpLogHeapFreeEvent @ 0x180118780 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18012368C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // r9
  __int64 DescriptorValidateSafe; // rdx
  char v8; // al
  unsigned __int64 v9; // r10
  unsigned int v10; // esi
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  int v14; // r8d
  _DWORD *SharedData; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+58h] [rbp+20h] BYREF

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
  }
  else
  {
    v6 = *(_QWORD *)a1 & a2;
    if ( (a1 ^ v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> *(_BYTE *)(a1 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
    goto LABEL_39;
  v8 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v8 & 1) == 0 )
    goto LABEL_39;
  if ( (v8 & 2) != 0 )
  {
    if ( (v8 & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
    {
LABEL_39:
      RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0, 0LL, 0LL);
      return 0;
    }
  }
  else
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 3) != 3
      || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xCu) < 8
      || !DescriptorValidateSafe )
    {
      goto LABEL_39;
    }
  }
  v9 = (DescriptorValidateSafe & *(_QWORD *)a1)
     + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a2 > v9 )
  {
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 8 )
    {
      v10 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 24), v9, a2, a3);
      v14 = 0;
    }
    else
    {
      v10 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(a1 + 32), v9, a2, a3, &v19);
      v14 = 1;
      if ( v10 )
      {
        v17 = *(_QWORD *)(a1 + 24);
        if ( (unsigned int)v19 <= (unsigned int)*(unsigned __int16 *)(v17 + 60) - 16 )
        {
          RtlpHpLfhBucketUpdateStats(v17, (unsigned int)v19, 0LL);
          v14 = 1;
        }
      }
    }
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v16 = 2147353472LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v10 )
    {
      v18 = (unsigned int)(v14 + 2);
LABEL_34:
      RtlpLogHeapFreeEvent(*(_QWORD *)(a1 + 56), a2, v18);
    }
  }
  else
  {
    RtlpHpSegPageRangeShrink(a1, DescriptorValidateSafe, 0, a3);
    v10 = 1;
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v18 = 3LL;
      goto LABEL_34;
    }
  }
  return v10;
}
