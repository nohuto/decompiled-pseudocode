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
  ULONG v2; // r8d
  __int64 result; // rax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
  v0 = &unk_180185988;
  Seed = PerformanceCounter.LowPart;
  v1 = 8LL;
  do
  {
    v2 = RtlRandomEx(&Seed);
    result = 148064917 * v2;
    *v0++ = v2 % 0x1EEF;
    --v1;
  }
  while ( v1 );
  return result;
}
