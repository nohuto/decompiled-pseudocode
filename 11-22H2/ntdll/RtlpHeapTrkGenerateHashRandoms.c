/*
 * XREFs of RtlpHeapTrkGenerateHashRandoms @ 0x18010B180
 * Callers:
 *     RtlHeapTrkInitialize @ 0x18010A960 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlRandomEx @ 0x18007D060 (RtlRandomEx.c)
 *     NtQueryPerformanceCounter @ 0x18009F410 (NtQueryPerformanceCounter.c)
 */

__int64 RtlpHeapTrkGenerateHashRandoms()
{
  _WORD *v0; // rbx
  __int64 v1; // rdi
  unsigned int v2; // r8d
  __int64 result; // rax
  __int32 v4; // [rsp+30h] [rbp+8h] BYREF
  __int32 v5; // [rsp+38h] [rbp+10h]

  NtQueryPerformanceCounter();
  v0 = &unk_180185988;
  v4 = v5;
  v1 = 8LL;
  do
  {
    v2 = RtlRandomEx(&v4);
    result = 148064917 * v2;
    *v0++ = v2 % 0x1EEF;
    --v1;
  }
  while ( v1 );
  return result;
}
