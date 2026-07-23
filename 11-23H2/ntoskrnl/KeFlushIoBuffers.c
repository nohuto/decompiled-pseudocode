/*
 * XREFs of KeFlushIoBuffers @ 0x140347540
 * Callers:
 *     HalFlushDmaBuffer @ 0x14045D280 (HalFlushDmaBuffer.c)
 *     HalpDmaFlushDriverMdl @ 0x140500084 (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFlushBuffer @ 0x140511160 (HalpDmaFlushBuffer.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x140511398 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140511A74 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x140511FD0 (HalpFlushMapBuffers.c)
 *     ViMapDoubleBuffer @ 0x140AC97AC (ViMapDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     KeInvalidateAllCaches @ 0x14036DCE0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x140572700 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x1405FCE3C (EtwTraceCpuCacheFlush.c)
 */

char __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3, __int64 a4)
{
  PVOID v4; // rax
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // r13
  char v10; // di
  char v11; // r15
  void *v12; // rsi
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = KiSystemFullyCoherent;
  memset(v14, 0, sizeof(v14));
  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = *(unsigned int *)(BugCheckParameter4 + 40);
    v10 = 1;
    v11 = 1;
    if ( a3 || a2 )
    {
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
      {
        v12 = *(void **)(BugCheckParameter4 + 24);
      }
      else
      {
        v4 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
        v12 = v4;
      }
      if ( v12 )
      {
        v11 = 0;
      }
      else if ( CurrentIrql == 15 )
      {
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      }
      if ( (xmmword_140D1EAD0 & 0x4000000) != 0 )
        LOBYTE(v4) = EtwGetKernelTraceTimestamp((__int64)v14, 2214592512LL);
      else
        v10 = 0;
      if ( v11 )
      {
        if ( a3 )
          LOBYTE(v4) = KeInvalidateAllCaches();
      }
      else
      {
        LOBYTE(v4) = KiFlushRangeAllCaches(BugCheckParameter4, v12, v9, a3);
      }
      if ( v10 )
      {
        LOBYTE(a4) = a2 == 0;
        LOBYTE(v4) = EtwTraceCpuCacheFlush(v14, v12, v9, a4);
      }
    }
  }
  return (char)v4;
}
