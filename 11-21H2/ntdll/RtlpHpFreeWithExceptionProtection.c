/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1800277B0
 * Callers:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(int a1, int a2, int a3)
{
  unsigned int v3; // r8d
  __int64 v5; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int16 v6; // [rsp+88h] [rbp+20h] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v3 = RtlpFreeHeapInternal(a1, a2, a3, (unsigned int)&v5, (__int64)&v6);
    if ( v3 && v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_180178B38 + 8LL * v6 - 8) + 32LL), -v5);
  }
  else
  {
    return (unsigned int)RtlpFreeHeapInternal(a1, a2, a3, 0, 0LL);
  }
  return v3;
}
