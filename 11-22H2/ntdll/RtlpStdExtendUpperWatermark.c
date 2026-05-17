/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x18010E498
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18010E56C (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     RtlpStdLockAcquire @ 0x18010E6F4 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18010E714 (RtlpStdLockRelease.c)
 */

unsigned __int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  v2 = 0LL;
  RtlpStdLockAcquire(a1);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_QWORD *)(a1 + 168) - 8LL;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v4 < v3 )
    {
      if ( v3 - 4096 <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      v6 = v3 - 4096;
      if ( (int)ZwAllocateVirtualMemory() < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = v6;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v2 = v4;
    *(_QWORD *)(a1 + 168) = v4;
    goto LABEL_9;
  }
  if ( v4 >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  RtlpStdLockRelease(a1);
  return v2;
}
