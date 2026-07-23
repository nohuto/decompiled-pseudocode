/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x18010F918
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18010F9EC (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     RtlpStdLockAcquire @ 0x18010FB74 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18010FB94 (RtlpStdLockRelease.c)
 */

unsigned __int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, void *a2)
{
  unsigned __int64 v3; // rsi
  char *v4; // rcx
  unsigned __int64 v5; // rdi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  RtlpStdLockAcquire(a1);
  v4 = *(char **)(a1 + 152);
  v5 = *(_QWORD *)(a1 + 168) - 8LL;
  BaseAddress = v4;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v5 < (unsigned __int64)v4 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v4 - 4096) <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      BaseAddress = v4 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = BaseAddress;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v3 = v5;
    *(_QWORD *)(a1 + 168) = v5;
    goto LABEL_9;
  }
  if ( v5 >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  RtlpStdLockRelease(a1);
  return v3;
}
