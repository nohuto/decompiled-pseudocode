/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x18003B150
 * Callers:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(int a1)
{
  unsigned int v1; // r8d
  __int64 v3; // [rsp+48h] [rbp-20h]
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v1 = RtlpFreeHeapInternal(a1, (__int64)&v4);
    if ( v1 && (_WORD)v4 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_180185DF8 + 8LL * (unsigned __int16)v4 - 8) + 32LL),
        -v3);
  }
  else
  {
    return (unsigned int)RtlpFreeHeapInternal(a1, 0LL);
  }
  return v1;
}
