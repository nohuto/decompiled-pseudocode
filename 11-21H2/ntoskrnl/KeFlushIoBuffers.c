/*
 * XREFs of KeFlushIoBuffers @ 0x140232370
 * Callers:
 *     HalFlushDmaBuffer @ 0x140457DC0 (HalFlushDmaBuffer.c)
 *     HalpDmaFlushDriverMdl @ 0x140504158 (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFlushBuffer @ 0x140513310 (HalpDmaFlushBuffer.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x140513544 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140513C1C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x14051416C (HalpFlushMapBuffers.c)
 *     ViMapDoubleBuffer @ 0x140A88D98 (ViMapDoubleBuffer.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x14056F780 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x14062D620 (EtwTraceCpuCacheFlush.c)
 */

char __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3, __int64 a4)
{
  PVOID v4; // rax
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // r12
  char v10; // si
  void *v11; // rbx
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = KiSystemFullyCoherent;
  memset(v13, 0, sizeof(v13));
  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = *(unsigned int *)(BugCheckParameter4 + 40);
    if ( a3 || a2 )
    {
      v10 = 1;
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
      {
        v11 = *(void **)(BugCheckParameter4 + 24);
      }
      else
      {
        v4 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
        v11 = v4;
      }
      if ( !v11 && CurrentIrql == 15 )
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      if ( (xmmword_140D06910 & 0x4000000) != 0 )
        LOBYTE(v4) = EtwGetKernelTraceTimestamp((unsigned __int64)v13, 0x84000000uLL);
      else
        v10 = 0;
      if ( v11 )
      {
        LOBYTE(v4) = KiFlushRangeAllCaches(BugCheckParameter4, v11, v9, a3);
      }
      else if ( a3 )
      {
        LOBYTE(v4) = KeInvalidateAllCaches();
      }
      if ( v10 )
      {
        LOBYTE(a4) = a2 == 0;
        LOBYTE(v4) = EtwTraceCpuCacheFlush(v13, v11, v9, a4);
      }
    }
  }
  return (char)v4;
}
