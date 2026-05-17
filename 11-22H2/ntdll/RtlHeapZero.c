/*
 * XREFs of RtlHeapZero @ 0x18008EF20
 * Callers:
 *     RtlpHpSegAlloc @ 0x180034EA8 (RtlpHpSegAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1800374D0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E3B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpAllocVA @ 0x1800473D0 (RtlpHpAllocVA.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHeapZero(_OWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _OWORD *v3; // r8
  unsigned __int64 v4; // rdx

  if ( a2 < 0x40 )
  {
    if ( a2 )
    {
      *a1 = 0LL;
      *(_OWORD *)((char *)a1 + a2 - 16) = 0LL;
      *(_OWORD *)((char *)a1 + ((a2 & 0x20) >> 1)) = 0LL;
    }
  }
  else if ( (qword_180184E78 & 1) != 0 && a2 >= 0x320 )
  {
    return RtlpHeapZeroFastString();
  }
  else
  {
    v3 = (_OWORD *)((char *)a1 + a2 - 48);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) >> 6;
    do
    {
      *a1 = 0LL;
      a1[1] = 0LL;
      a1 += 4;
      --v4;
      *(a1 - 2) = 0LL;
      *(a1 - 1) = 0LL;
    }
    while ( v4 );
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  return result;
}
